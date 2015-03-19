#include "PyEModuleBase.hpp"

using namespace PyEcore;

PyEModuleBase::PyEModuleBase(const char * name) :
    Py::ExtensionModuleBase(name)
{
}

PyEModuleBase::~PyEModuleBase()
{
}

void PyEModuleBase::initialize()
{
    Py::ExtensionModuleBase::initialize("Sorry, no documentation");

    Py::Dict dict(moduleDictionary());

    //
    // put each of the methods into the modules dictionary
    // so that we get called back at the function in T.
    //
    method_map_t::const_iterator i = m_method_map.begin();
    method_map_t::const_iterator i_end = m_method_map.end();
    for (; i != i_end; ++i)
    {
        Py::MethodDefExt< PyEModuleBase > *method_def = (*i).second;

        static PyObject *self = PyCObject_FromVoidPtr(this, Py::do_not_dealloc);

        Py::Tuple args(2);
        args[0] = Py::Object(self);
        args[1] = Py::Object(PyCObject_FromVoidPtr(method_def,
                Py::do_not_dealloc));

        PyObject *func = PyCFunction_New(&method_def->ext_meth_def,
                Py::new_reference_to(args));

        method_def->py_method = Py::Object(func, true);

        dict[(*i).first] = method_def->py_method;
    }
}
