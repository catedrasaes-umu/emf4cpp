#include "PyEcore.hpp"

using namespace ecore;
using namespace PyEcore;

int main(int argc, char *argv[])
{
    Py_Initialize();

    // Foreach package
    EPackage_ptr pkg = EcorePackage::_instance();
    PyEPackage py_pkg(pkg);

    // FIXME: Does not compile because char* to wchar_t* conversion
    // See this: https://stackoverflow.com/a/18353327/62365
    return Py_Main(argc, argv);
}
