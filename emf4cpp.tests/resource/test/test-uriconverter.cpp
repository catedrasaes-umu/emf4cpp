#include <cassert>
#include <unordered_map>
#include <string>

#include <ecorecpp/resource/ResourceSet.hpp>
#include <ecorecpp/resource/URIConverter.hpp>
#include <ecorecpp/resource/XMLResource.hpp>
#include <ecorecpp/MetaModelRepository.hpp>

#include <ecore.hpp>
#include <ResourceTests.hpp>

int main(int argc, char* argv[])
{
    auto factory = ::ResourceTests::ResourceTestsFactory::_instance();

	auto root = factory->createRoot();

	auto target = factory->createReferenceTarget();
	root->setTarget(target);

	auto referrer1 = factory->createReferrer();
	referrer1->setReference(target);
	root->getReferrers().push_back(referrer1);
	auto referrer2 = factory->createReferrer();
	referrer2->setReference(target);
	root->getReferrers().push_back(referrer2);

	const QUrl file = QUrl::fromLocalFile("./resourcetest1.xml");
	::ecorecpp::resource::ResourceSet rSet;
	rSet.getResourceFactoryRegistry()
			->getProtocolToFactoryMap()[file.scheme().toStdString()].reset(
					new ::ecorecpp::resource::XMLResourceFactory() );
	auto resource = rSet.createResource(file);
	resource->getContents()->push_back(root);
	resource->save();

	auto referrer3 = factory->createReferrer();
	referrer3->setReference(target);
	const QUrl file1 = QUrl::fromLocalFile("./referrer.xml");
	auto resource2 = rSet.createResource(file1);

	resource2->getContents()->push_back(referrer3);
	const QUrl aliasUri("model://resourcetest/1/2");
	resource->setURI(aliasUri);
	resource2->save();

	::ecorecpp::resource::ResourceSet rSet2;
	rSet2.getResourceFactoryRegistry()
			->getProtocolToFactoryMap()[file.scheme().toStdString()].reset(
					new ::ecorecpp::resource::XMLResourceFactory() );
	rSet2.getURIConverter()->getURIMap()[aliasUri.toString().toStdString()] = file.toString().toStdString();

	::ecorecpp::MetaModelRepository::_instance()->load(::ResourceTests::ResourceTestsPackage::_instance());
	auto resource3 = rSet2.createResource(file1);
	resource3->load();

	auto referrer4 = ::ecore::as< ::ResourceTests::Referrer >(resource3->getContents()->get(0));
	assert(referrer4 && referrer4->getReference());
	return 0;
}

