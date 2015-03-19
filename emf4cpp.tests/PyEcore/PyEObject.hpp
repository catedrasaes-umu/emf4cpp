#ifndef PYEOBJECT_HPP
#define PYEOBJECT_HPP

#include "CXX/Objects.hxx"
#include "CXX/Extensions.hxx"

// Members
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>

namespace PyEcore
{

class PyEObject: public Py::PythonExtension< PyEObject >
{
public:

    PyEObject(ecore::EObject_ptr obj, bool release = false);
    virtual ~PyEObject();

    virtual Py::Object getattr(const char *name);

protected:

    ecore::EObject_ptr m_obj;
    ecore::EClass_ptr m_class;
    bool m_release;

private:

    typedef Py::PythonExtension< PyEObject > parent_t;
    typedef Py::MethodDefExt< PyEObject > method_t;

    Py::Object dummy(const Py::Tuple &rargs)
    {
        return Py::None();
    }

    static PyObject *method_varargs_call_handler(
            PyObject *_self_and_name_tuple, PyObject *_args);
    static void dealloc_method_def(void* m);
    inline Py::Object get(const char* name, const Py::Tuple &rargs);
    inline Py::Object set(const char* name, const Py::Tuple &rargs);
};

} // PyEcore

#endif // PYEOBJECT_HPP
