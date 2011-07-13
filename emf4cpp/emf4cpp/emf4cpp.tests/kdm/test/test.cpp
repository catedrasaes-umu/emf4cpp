#include <ecorecpp.hpp>
#include <kdm.hpp>


int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = kdm::KdmPackage::_instance();
    ::ecorecpp::serializer::serializer ser("metamodel.ecore");
    ser.serialize(_epkg);

    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::data::DataPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::action::ActionPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::build::BuildPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::code::CodePackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::conceptual::ConceptualPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::core::CorePackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::event::EventPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::source::SourcePackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::platform::PlatformPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::structure::StructurePackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::ui::UiPackage::_instance());
    ::ecorecpp::MetaModelRepository::_instance()->load(kdm::kdm::KdmPackage::_instance());

    if (argc > 1)
    {
        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

        assert(_eobj);

        ::ecorecpp::serializer::serializer ser("model.xmi");
        ser.serialize(_eobj);
    }
}

