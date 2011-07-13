#include "PyEObject.hpp"
#include <ecore.hpp>
#include <ecorecpp.hpp>

using namespace PyEcore;
using namespace ecore;

PyEObject::PyEObject(ecore::EObject_ptr obj, bool release) :
    m_obj(obj), m_class(obj->eClass()), m_release(release)
{
}

PyEObject::~PyEObject()
{
    if (m_release)
        delete m_obj;
}

Py::Object PyEObject::getattr(const char *name)
{
    // set or get
    if (strncmp(name, "set_", 4) == 0 || strncmp(name, "get_", 4) == 0)
    {
        try
        {
            method_t *method_def = new method_t(name, &PyEObject::dummy,
                    method_varargs_call_handler, "");

            Py::Tuple self(2);
            self[0] = Py::Object(this);
            self[1] = Py::Object(PyCObject_FromVoidPtr(method_def,
                    dealloc_method_def));

            PyObject *func =
                    PyCFunction_New(&method_def->ext_meth_def, self.ptr());

            return Py::Object(func, true);
        } catch (...)
        {
        }
    }

    // Default
    return parent_t::getattr(name);
}

inline Py::Object PyEObject::set(const char* name, const Py::Tuple &rargs)
{
    EStructuralFeature_ptr sf = m_class->getEStructuralFeature(name);
    EAttribute_ptr at = sf->as< EAttribute > ();

    if (at)
    {
        Py::String s(rargs[0]);
        const std::string value(s.as_std_string());
        ecorecpp::mapping::any any(&value);
        m_obj->eSet(sf, any);

        // TODO: extender para el resto de tipos
    }
    else
    {
        // EReference_ptr ref = sf->as< EReference > ();

        for (size_t i = 0; i < rargs.length(); i++)
        {
            PyObject *pyobj = rargs[i].ptr();
            PyEObject *obj = static_cast< PyEObject * > (pyobj);
            ecorecpp::mapping::any any = obj->m_obj;

            m_obj->eSet(sf, any);
        }
    }

    return Py::None();
}

inline Py::Object PyEObject::get(const char* name, const Py::Tuple &rargs)
{
    EStructuralFeature_ptr sf = m_class->getEStructuralFeature(name);
    ecorecpp::mapping::any any = m_obj->eGet(sf);

    // TODO: extender para el resto de tipos
    EAttribute_ptr at = sf->as< EAttribute > ();
    if (at)
    {
        return Py::String(*ecorecpp::mapping::any::any_cast< const std::string * >(any));
    }
    else
    {
        EReference_ptr ref = sf->as< EReference > ();

        if (ref->getUpperBound() == 1)
        {
            EObject_ptr obj = ecorecpp::mapping::any::any_cast< EObject_ptr >(any);
            return Py::asObject(new PyEObject(obj));
        }
        else
        {
            Py::List list;

            ::ecorecpp::mapping::EEListBase_ptr children = ecorecpp::mapping::any::any_cast<
                    ::ecorecpp::mapping::EEListBase_ptr >(any);

            for (size_t j = 0; j < children->size(); j++)
            {
                EObject_ptr child = (*children)[j];
                list.append(Py::asObject(new PyEObject(child)));
            }

            return list;
        }
    }

    return Py::None();
}

PyObject* PyEObject::method_varargs_call_handler(
        PyObject *_self_and_name_tuple, PyObject *_args)
{
    try
    {
        Py::Tuple self_and_name_tuple(_self_and_name_tuple);

        PyObject *self_in_cobject = self_and_name_tuple[0].ptr();
        PyEObject *self = static_cast< PyEObject * > (self_in_cobject);

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

void PyEObject::dealloc_method_def(void* m)
{
    method_t * d = reinterpret_cast< method_t* > (m);
    delete d;
}

