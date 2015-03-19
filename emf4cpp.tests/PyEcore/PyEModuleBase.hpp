#ifndef PYEMODULEBASE_HPP
#define PYEMODULEBASE_HPP

#include "CXX/Extensions.hxx"

#include <map>
#include <string>

namespace PyEcore
{

class PyEModuleBase: public Py::ExtensionModuleBase
{
public:

    virtual ~PyEModuleBase();

protected:

    PyEModuleBase(const char * name);

    void initialize();

    // Methods map
    typedef Py::MethodDefExt< PyEModuleBase > method_t;
    typedef std::map< std::string, method_t * >
            method_map_t;
    method_map_t m_method_map;

    typedef Py::Object (PyEModuleBase::*method_varargs_function_t)(
            const Py::Tuple &args);
    typedef Py::Object (PyEModuleBase::*method_keyword_function_t)(
            const Py::Tuple &args, const Py::Dict &kws);

    inline void add_varargs_method(const char *name, const char *doc = "")
    {
        m_method_map[std::string(name)]
                = new Py::MethodDefExt< PyEModuleBase >(name,
                        &PyEModuleBase::dummy_varargs,
                        Py::method_varargs_call_handler, doc);
    }

    inline void add_keyword_method(const char *name, const char *doc = "")
    {
        m_method_map[std::string(name)]
                = new Py::MethodDefExt< PyEModuleBase >(name,
                        &PyEModuleBase::dummy_keyword,
                        Py::method_keyword_call_handler, doc);
    }

private:

    virtual Py::Object invoke_method_noargs( void *method_def )
    {
        return Py::None();
    }

    Py::Object dummy_varargs(const Py::Tuple &rargs)
    {
        return Py::None();
    }

    Py::Object dummy_keyword(const Py::Tuple &args, const Py::Dict &kws)
    {
        return Py::None();
    }
};

} // PyEcore

#endif // PYEMODULEBASE_HPP
