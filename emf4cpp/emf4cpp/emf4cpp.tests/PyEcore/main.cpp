#include "PyEcore.hpp"

using namespace ecore;
using namespace PyEcore;

int main(int argc, char *argv[])
{
    Py_Initialize();

    // Foreach package
    EPackage_ptr pkg = EcorePackage::_instance();
    PyEPackage py_pkg(pkg);

    return Py_Main(argc, argv);
}
