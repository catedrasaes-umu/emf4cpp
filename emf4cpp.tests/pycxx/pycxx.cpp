/*
 * emf4cpp.cpp
 *
 *  Created on: 03/06/2010
 *      Author: asenac
 */

#include <Python.h>
#include <ecore.hpp>
#include <ecorecpp.hpp>
#include <iostream>
#include <sstream>
#include <memory>
#include <cstring>

using namespace ecore;

// PyCXX
#include "CXX/Objects.hxx"
#include "CXX/Extensions.hxx"

// forward
class ecore_object;
class ecore_module;

class ecore_object: public Py::PythonExtension< ecore_object >
{
public:
    typedef Py::PythonExtension< ecore_object > parent_t;
    typedef Py::MethodDefExt< ecore_object > method_t;
    typedef ecore_object T;

    ecore_object(EObject_ptr obj) :
        m_obj(obj), m_class(obj->eClass())
    {
    }

    virtual ~ecore_object()
    {
        // TODO: release object?
    }

    virtual Py::Object getattr(const char *name)
    {
        // set or get
        if (strncmp(name, "set_", 4) == 0 || strncmp(name, "get_", 4) == 0)
        {
            try
            {
                method_t *method_def = new method_t(name, &ecore_object::dummy,
                        method_varargs_call_handler, "");

                Py::Tuple self(2);
                self[0] = Py::Object(this);
                self[1] = Py::Object(PyCObject_FromVoidPtr(method_def,
                        dealloc_method_def));

                PyObject *func =
                        PyCFunction_New( &method_def->ext_meth_def, self.ptr() );

                return Py::Object(func, true);
            } catch (...)
            {
            }
        }

        // Default
        return parent_t::getattr(name);
    }

protected:

    Py::Object dummy(const Py::Tuple &rargs)
    {
        return Py::None();
    }

    inline Py::Object set(const char* name, const Py::Tuple &rargs)
    {
        EStructuralFeature_ptr sf = m_class->getEStructuralFeature(name);
        EAttribute_ptr at = ::ecore::as< EAttribute >(sf);

        if (at)
        {
            Py::String s(rargs[0]);
            const std::string value(s.as_std_string());
            boost::any any(&value);
            m_obj->eSet(sf, any);

            // TODO: extender para el resto de tipos
        }
        else
        {
            EReference_ptr ref = ::ecore::as< EReference >(sf);

            for (size_t i = 0; i < rargs.length(); i++)
            {
                PyObject *pyobj = rargs[i].ptr();
                T *obj = static_cast< T * > (pyobj);
                boost::any any = obj->m_obj;

                m_obj->eSet(sf, any);
            }
        }

        return Py::None();
    }

    inline Py::Object get(const char* name, const Py::Tuple &rargs)
    {
        EStructuralFeature_ptr sf = m_class->getEStructuralFeature(name);
        boost::any any = m_obj->eGet(sf);

        // TODO: extender para el resto de tipos
        EAttribute_ptr at = ::ecore::as< EAttribute >(sf);
        if (at)
        {
            return Py::String(*boost::any_cast< const std::string * >(any));
        }
        else
        {
            EReference_ptr ref = ::ecore::as< EReference >(sf);

            if (ref->getUpperBound() == 1)
            {
                EObject_ptr obj = boost::any_cast< EObject_ptr >(any);
                return Py::asObject(new ecore_object(obj));
            }
            else
            {
                Py::List list;

                ::ecorecpp::mapping::EEListBase_ptr children = boost::any_cast<
                        ::ecorecpp::mapping::EEListBase_ptr >(any);

                for (size_t j = 0; j < children->size(); j++)
                {
                    EObject_ptr child = (*children)[j];
                    list.append(Py::asObject(new ecore_object(child)));
                }

                return list;
            }
        }

        return Py::None();
    }

    static void dealloc_method_def(void* m)
    {
        method_t * d = reinterpret_cast< method_t* > (m);
        delete d;
    }

    static PyObject *method_varargs_call_handler(
            PyObject *_self_and_name_tuple, PyObject *_args)
    {
        try
        {
            Py::Tuple self_and_name_tuple(_self_and_name_tuple);

            PyObject *self_in_cobject = self_and_name_tuple[0].ptr();
            T *self = static_cast< T * > (self_in_cobject);

            method_t *meth_def =
                    reinterpret_cast< method_t * > (PyCObject_AsVoidPtr(
                            self_and_name_tuple[1].ptr()));
            Py::Tuple args(_args);

            const char *op_name = meth_def->ext_meth_def.ml_name;

            // std::cout << "Calling method: " << op_name << std::endl;

            // set an EStructuralFeature
            if (strncmp(op_name, "set_", 4) == 0)
                return Py::new_reference_to(self->set(op_name + 4, args));
            // get an tEStructuralFEature

            else if (strncmp(op_name, "get_", 4) == 0)
                return Py::new_reference_to(self->get(op_name + 4, args));
            // operation

            else
            {
                // TODO
            }

            return Py::new_reference_to(Py::None());

        } catch (...)
        {
            return 0;
        }
    }

    EObject_ptr m_obj;
    EClass_ptr m_class;

    friend class ecore_module;
};

class ecore_module: public Py::ExtensionModule< ecore_module >
{
public:
    ecore_module(EPackage_ptr pkg) :
        Py::ExtensionModule< ecore_module >(pkg->getName().c_str()),
                m_pkg(pkg), m_fac(pkg->getEFactoryInstance())

    {
        std::vector< EClassifier_ptr > const& classifiers =
                pkg->getEClassifiers();

        for (size_t i = 0; i < classifiers.size(); i++)
        {
            EClass_ptr eclass = instanceOf< EClass > (classifiers[i]);
            if (eclass)
            {
                // TODO:
                add_varargs_method(eclass->getName().c_str(),
                        &ecore_module::dummy, "documentation");
            }
            else
            {
                // TODO:
            }
        }

        initialize("Sorry, no documentation");

        Py::Dict d(moduleDictionary());
        d["NsURI"] = Py::String(pkg->getNsURI());
        d["name"] = Py::String(pkg->getName());
        d["NsPrefix"] = Py::String(pkg->getNsPrefix());
        d["package"] = Py::asObject(new ecore_object(m_pkg));
        d["factory"] = Py::asObject(new ecore_object(m_fac));
    }

    virtual ~ecore_module()
    {

    }

protected:

    Py::Object dummy(const Py::Tuple &rargs)
    {
        return Py::None();
    }

    // overrided
    virtual Py::Object invoke_method_varargs(void *method_def,
            const Py::Tuple &args)
    {
        Py::MethodDefExt< ecore_module >
                *meth_def =
                        reinterpret_cast< Py::MethodDefExt< ecore_module > * > (method_def);

        const char * name = meth_def->ext_meth_def.ml_name;
        
	EClass_ptr eclass = ::ecore::as< EClass >(m_pkg->getEClassifier(name));

        if (args.length())
        {
            bool result;
            PyObject *pyobj = args[0].ptr();
            ecore_object *obj = static_cast< ecore_object * > (pyobj);
            EClass_ptr src = obj->m_class;

            std::vector< EClass_ptr > const& supertypes = eclass->getEAllSuperTypes();
            result = (src == eclass);
            for(size_t i=0; !result && i < supertypes.size(); i++)
                result = (supertypes[i] == eclass);

            return Py::Boolean(result);
        }

        return Py::asObject(new ecore_object(m_fac->create(eclass)));
    }

    EPackage_ptr m_pkg;
    EFactory_ptr m_fac;
};

int main(int argc, char *argv[])
{
    assert(argc > 1);

    EPackage_ptr pkg = EcorePackage::_instance();

    Py_Initialize();

    std::auto_ptr< ecore_module > em(new ecore_module(pkg));

    return Py_Main(argc, argv);
}
