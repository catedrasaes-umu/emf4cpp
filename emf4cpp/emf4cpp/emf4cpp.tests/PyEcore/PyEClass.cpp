#include "PyEClass.hpp"
#include <ecore.hpp>
#include <iostream>
#include "CXX/Objects.hxx"

using namespace PyEcore;
using namespace ecore;

#define NAME(o) o->getName().c_str()

PyEClass::PyEClass(ecore::EClass_ptr cl) :
    PyEModuleBase(NAME(cl)), m_class(cl)
{
    // TODO: Register methods

    // add_varargs_method("instanceOf");

    initialize();

    Py::Dict dict(moduleDictionary());
    dict["name"] = Py::String(cl->getName());
}

PyEClass::~PyEClass()
{
}

Py::Object PyEClass::invoke_method_keyword(void *method_def,
        const Py::Tuple &_args, const Py::Dict &_keywords)
{
    std::cout << "keyword" << std::endl;
    return Py::None();
}

Py::Object PyEClass::invoke_method_varargs(void *method_def,
        const Py::Tuple &_args)
{
    std::cout << "varargs" << std::endl;

    try
    {
        method_t *meth_def = reinterpret_cast< method_t * > (method_def);
        const char * name = meth_def->ext_meth_def.ml_name;

    } catch (...)
    {
    }

    return Py::None();
}
