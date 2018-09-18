#include "PyEPackage.hpp"
#include "PyEObject.hpp"
#include <ecore.hpp>
#include <iostream>
#include <sstream>
#include <cstring>

#include "CXX/Objects.hxx"

using namespace PyEcore;
using namespace ecore;

#define NAME(o) o->getName().c_str()

PyEPackage::PyEPackage(ecore::EPackage_ptr pkg) :
    PyEModuleBase(pkg->getName().c_str()), m_pkg(pkg), m_fac(
            pkg->getEFactoryInstance())
{
    ::ecorecpp::mapping::EList< EClassifier_ptr > const& classifiers = pkg->getEClassifiers();
    Py::Dict dict(moduleDictionary());

    // Register methods
    for (size_t i = 0; i < classifiers.size(); i++)
    {
        EClass_ptr eclass = instanceOf< EClass > (classifiers[i]);
        if (eclass)
        {
            const std::string& name_ = eclass->getName();

            // Create method
            std::string s("create");
            s += name_;

            char* create = strdup(s.c_str());
            add_varargs_method(create);
            m_strings.push_back(char_ptr(create));

            // EClass as module
            m_classes.push_back(class_ptr(new PyEClass(eclass)));
            dict[eclass->getName()] = m_classes.back()->module();
        }
    }

    initialize();

    dict["nsURI"] = Py::String(pkg->getNsURI());
    dict["name"] = Py::String(pkg->getName());
    dict["nsPrefix"] = Py::String(pkg->getNsPrefix());
}

PyEPackage::~PyEPackage()
{
}

Py::Object PyEPackage::invoke_method_keyword(void *method_def,
        const Py::Tuple &_args, const Py::Dict &_keywords)
{
    std::cout << "keyword" << std::endl;
    return Py::None();
}

Py::Object PyEPackage::invoke_method_varargs(void *method_def,
        const Py::Tuple &_args)
{
    std::cout << "varargs" << std::endl;

    try
    {
        method_t *meth_def = reinterpret_cast< method_t * > (method_def);
        const char * name = meth_def->ext_meth_def.ml_name;

        if (strncmp(name, "create", 6) == 0)
        {
            EClass_ptr eclass =
                    ::ecore::as< EClass >(m_pkg->getEClassifier(name + 6));

            return Py::asObject(new PyEObject(m_fac->create(eclass), true));
        }

    } catch (...)
    {
    }

    return Py::None();
}
