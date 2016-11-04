#include <cassert>

#include <ecorecpp/resource/ResourceSet.hpp>
#include <ecorecpp/resource/XMLResource.hpp>
#include <ecorecpp/MetaModelRepository.hpp>

#include <root.hpp>
#include <ecore.hpp>

int main(int argc, char* argv[])
{
	using ::ecorecpp::resource::Resource;
	using ::ecorecpp::resource::ResourceSet;

	auto mmr = ecorecpp::MetaModelRepository::_instance();
	mmr->load( ::root::RootPackage::_instance() );
	mmr->load( ::root::settings::SettingsPackage::_instance() );
	mmr->load( ::root::results::ResultsPackage::_instance() );
	mmr->load( ::root::model::requirement::RequirementPackage::_instance() );
	mmr->load( ::root::model::ModelPackage::_instance() );
	mmr->load( ::root::model::memory::MemoryPackage::_instance() );
	mmr->load( ::root::model::autosar::AutosarPackage::_instance() );

	QUrl file = QUrl::fromLocalFile("./testcrossref.root");
	QUrl stimuli = QUrl::fromLocalFile("./stimulation_guid.iprx");
	//QUrl stimuli = QUrl::fromLocalFile("./generator.iprx");

	ResourceSet::getInstance().getResourceFactoryRegistry()
			->getProtocolToFactoryMap()[file.scheme().toStdString()].reset(
					new ::ecorecpp::resource::XMLResourceFactory() );

	Resource* stimuliResource = ResourceSet::getInstance().createResource(stimuli);
	stimuliResource->load();

	Resource* modelResource = ResourceSet::getInstance().getResource(file, false);
	assert (modelResource);
	//stimuliResource->getContents()->push_back(sc);

	QUrl newModel = QUrl::fromLocalFile("./testcrossref_saved.root");
	QUrl newStimuli = QUrl::fromLocalFile("./stimulation_guid_saved.iprx");

	modelResource->setURI(QUrl::fromLocalFile("./testcrossref_saved.root"));
	stimuliResource->setURI(QUrl::fromLocalFile("./stimulation_guid_saved.root"));
	modelResource->save();
	stimuliResource->save();
/*
	auto iter = resource->getAllContents();
	while (*iter) {
		std::cerr << "Level: " << iter.level() << '\t';
		std::cerr << (*iter)->eClass()->getName() << std::endl;
		++iter;
	}
*/
    return 0;
}

