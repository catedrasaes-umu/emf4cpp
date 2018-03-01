#include <cassert>
#include <unordered_map>
#include <string>

#include <ecorecpp/resource/ResourceSet.hpp>
#include <ecorecpp/resource/XMLResource.hpp>
#include <ecorecpp/MetaModelRepository.hpp>

#include <ecore.hpp>
#include <ResourceTests.hpp>

int main(int argc, char* argv[])
{
	using ::ecorecpp::resource::Resource;
	using ::ecorecpp::resource::ResourceSet;

    ::ecorecpp::MetaModelRepository::_instance()->load(::ResourceTests::ResourceTestsPackage::_instance());

	QUrl file = QUrl::fromLocalFile("./resourceoptions.xml");

	ResourceSet::getInstance().getResourceFactoryRegistry()
			->getProtocolToFactoryMap()[file.scheme().toStdString()].reset(
					new ::ecorecpp::resource::XMLResourceFactory() );

	::ecorecpp::resource::Resource_ptr fileResource = ResourceSet::getInstance().createResource(file);
	fileResource->load();

	QUrl withKeepDefault = QUrl::fromLocalFile("./withKeepDefault.xml");
	QUrl withoutKeepDefault = QUrl::fromLocalFile("./withoutKeepDefault.xml");

	fileResource->setURI(withKeepDefault);
	fileResource->save(std::unordered_map<std::string,std::string>{{"KEEP_DEFAULT_CONTENT", "true"}});
	fileResource->setURI(withoutKeepDefault);
	fileResource->save(std::unordered_map<std::string,std::string>{{"KEEP_DEFAULT_CONTENT", "false"}});
    return 0;
}

