#ifndef PYECLASS_HPP
#define PYECLASS_HPP

#include "PyEModuleBase.hpp"
#include <ecore/EClass.hpp>

namespace PyEcore
{

class PyEClass: public PyEModuleBase
{
public:

    PyEClass(ecore::EClass_ptr cl);
    virtual ~PyEClass();

    // Invoke
    virtual Py::Object invoke_method_keyword(void *method_def,
            const Py::Tuple &_args, const Py::Dict &_keywords);
    virtual Py::Object invoke_method_varargs(void *method_def,
            const Py::Tuple &_args);

protected:

    ecore::EClass_ptr m_class;
};

} // PyEcore

#endif // PYECLASS_HPP
