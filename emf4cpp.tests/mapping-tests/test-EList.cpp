#include <ecore.hpp>
#include <ecorecpp/mapping/EListImpl.hpp>

#include <iostream>

using namespace ecore;
using namespace ecorecpp::mapping;

int main()
{
	EListImpl< EClassifier_ptr > original;

	EList< EClassifier_ptr >& orig(original);

	original.push_back( EClassifier_ptr(nullptr) );
	original.push_back( EClassifier_ptr(nullptr) );
	original.push_back( EClassifier_ptr(nullptr) );

	// Con dynamic_cast
	EList< EEnum_ptr >::ptr_type parent = orig.asEListOf< EEnum_ptr >();

	std::cout << parent->size() << std::endl;
}
