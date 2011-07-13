#include <ecorecpp.hpp>
#include <ecore/EcorePackage.hpp>
#include <fstream>

int main(int argc, char* argv[])
{

    assert(argc > 2);

    ::ecorecpp::parser::parser _parser;
    ::ecore::EObject_ptr obj = _parser.load(argv[1]);

    std::ofstream outfile (argv[2]);
    ::ecorecpp::serializer::serializer _ser(outfile);
    _ser.serialize(obj);

    return 0;
}

