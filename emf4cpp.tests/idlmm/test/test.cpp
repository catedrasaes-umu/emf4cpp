// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
#include <ecorecpp.hpp>
#include <idlmm.hpp>
#include <idlmm/IdlmmPackage.hpp>
#include <iostream>

template<typename T>
void print_container(T container, int level)
{
    typedef ::ecorecpp::mapping::EList< ::idlmm::Contained_ptr > containeds_t;

    std::string indent(level, '\t');

    containeds_t const& contains = container->getContains();

    for (size_t i = 0; i < contains.size(); i++)
    {
    	::idlmm::Contained_ptr contained = contains[i];
    	::ecore::EObject_ptr eobj = ::ecore::as< ::ecore::EObject >(contained);

    	std::cout << indent << contained->getIdentifier() << "\t" << eobj->eClass()->getName() << std::endl;

    	::idlmm::Container_ptr child = ::ecore::as< ::idlmm::Container >(contained);
    	if (child)
            print_container(child, level+1);
    }
}

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = ::idlmm::IdlmmPackage::_instance();
    ::ecorecpp::util::print_all(_epkg);
    std::ofstream outfile ("metamodel.ecore");
    ::ecorecpp::serializer::serializer ser(outfile);
    ser.serialize(_epkg);

    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

        assert(_eobj);

        ::idlmm::TranslationUnit_ptr _tu = ::ecore::as<
            ::idlmm::TranslationUnit >(_eobj);

        assert(_tu);

        print_container(_tu, 0);

        std::ofstream outfile ("salida.xmi");
        ::ecorecpp::serializer::serializer ser(outfile);
        ser.serialize(_eobj);
    }
}

