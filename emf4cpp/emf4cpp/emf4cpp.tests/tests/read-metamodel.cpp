#include <ecorecpp.hpp>
#include <ecore/EcorePackage.hpp>

int main(int argc, char* argv[])
{
    // ::ecorecpp::util::print_all(::ecore::EcorePackage::_instance());

    assert(argc > 1);

    ::ecorecpp::MetaModelRepository_ptr mmr =
            ::ecorecpp::MetaModelRepository::_instance();

    for (int i = 1; i < argc; i++)
    {
        try
        {
            ::ecorecpp::parser::parser _parser;
            ::ecore::EObject_ptr _eobj = _parser.load(argv[i]);

            assert(_eobj);

            ::ecore::EPackage_ptr _epkg = ::ecore::instanceOf<
                    ::ecore::EPackage >(_eobj);

            assert(_epkg);

            std::cout << _eobj;

            mmr->load(_epkg);
        } catch (const char* e)
        {
            std::cout << e << std::endl;
        }
    }
}

