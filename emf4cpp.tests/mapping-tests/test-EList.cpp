#include <ecore.hpp>
#include <ecorecpp/mapping/EListImpl.hpp>

#include <iostream>

using namespace ecore;
using namespace ecorecpp::mapping;

int main()
{
	EListImpl< EClassifier > original;

	EList< EClassifier >& orig(original);

	original.push_back(NULL);
	original.push_back(NULL);
	original.push_back(NULL);

	// Con dynamic_cast
	EList< EEnum >::ptr_type parent = orig.asEListOf< EEnum >();

	std::cout << parent->size() << std::endl;
}
