#include <ecorecpp.hpp>
#include <ecore.hpp>
#include <iostream>
#include <fstream>

using namespace ::ecore;
using ::ecorecpp::mapping::EList;

int main(int argc, char* argv[])
{
	EList< EClassifier > const& classifiers =
			EcorePackage::_instance()->getEClassifiers();

        std::ofstream outfile ("salida.ecore");
	::ecorecpp::serializer::serializer _ser(outfile);
	_ser.serialize(EcorePackage::_instance());

	std::cout << EcorePackage::_instance()->getEClass()->getEAllStructuralFeatures().size() << std::endl;
	std::cout << EcorePackage::_instance()->getEClass()->getEAllReferences().size() << std::endl;
	std::cout << EcorePackage::_instance()->getEClass()->getEAllAttributes().size() << std::endl;

	std::cout << EcorePackage::_instance()->getEClass()->getEStructuralFeatures().size() << std::endl;
	std::cout << EcorePackage::_instance()->getEClass()->getEReferences().size() << std::endl;
	std::cout << EcorePackage::_instance()->getEClass()->getEAttributes().size() << std::endl;

	std::cout << EcorePackage::_instance()->getEClass()->getESuperTypes().size() << std::endl;
	std::cout << EcorePackage::_instance()->getEClass()->getEAllSuperTypes().size() << std::endl;
}
