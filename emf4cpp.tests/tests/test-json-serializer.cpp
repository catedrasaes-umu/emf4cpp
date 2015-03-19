#include <ecorecpp.hpp>
#include <ecore/EcorePackage.hpp>

int main(int argc, char* argv[])
{

    ::ecorecpp::json::serializer _ser("salida.json");
    _ser.serialize(::ecore::EcorePackage::_instance());

    return 0;
}

