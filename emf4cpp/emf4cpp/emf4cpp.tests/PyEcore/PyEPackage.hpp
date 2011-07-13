#ifndef PYEPACKAGE_HPP
#define PYEPACKAGE_HPP

#include "PyEModuleBase.hpp"

// Members
#include "PyEClass.hpp"
#include <ecore/EPackage.hpp>
#include <ecore/EFactory.hpp>
#include <boost/shared_ptr.hpp>
#include <vector>
#include <string>

namespace PyEcore
{

class PyEPackage: public PyEModuleBase
{
public:

    PyEPackage(ecore::EPackage_ptr pkg);
    virtual ~PyEPackage();

    // Invoke
    virtual Py::Object invoke_method_keyword(void *method_def,
            const Py::Tuple &_args, const Py::Dict &_keywords);
    virtual Py::Object invoke_method_varargs(void *method_def,
            const Py::Tuple &_args);

protected:

    ecore::EPackage_ptr m_pkg;
    ecore::EFactory_ptr m_fac;

    typedef boost::shared_ptr< PyEClass > class_ptr;
    std::vector< class_ptr > m_classes;

    typedef boost::shared_ptr< char > char_ptr;
    std::vector< char_ptr > m_strings;
};

} // PyEcore

#endif // PYEPACKAGE_HPP
