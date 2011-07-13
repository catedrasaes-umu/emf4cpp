#include <ecorecpp.hpp>
#include <CST.hpp>
#include <CST/CSTPackage.hpp>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = ::CST::CSTPackage::_instance();
    // ::ecorecpp::util::print_all(_epkg);

    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

        assert(_eobj);
        std::ofstream outfile ("salida.xmi");
	::ecorecpp::serializer::serializer ser(outfile);
	ser.serialize(_eobj);
    }
}

