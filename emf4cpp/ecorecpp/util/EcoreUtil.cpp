// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EcoreUtil.cpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "EcoreUtil.hpp"

#include <map>
#include <ecore.hpp>

#include "../mapping/EList.hpp"


namespace ecorecpp {
namespace util {

std::string EcoreUtil::getId( ::ecore::EObject_ptr obj ) {
	if (!obj)
		return "";

	::ecore::EClass_ptr cl = obj->eClass();

	auto& attributes = cl->getEAllAttributes();

	for ( const auto& attr : attributes ) {
		if ( attr->isID()
				&& !attr->isTransient()
				&& attr->getUpperBound() == 1
				&& obj->eIsSet(attr) ) {

			auto at_classifier = attr->getEType();
			if ( auto atc = at_classifier->as<::ecore::EDataType>() ) {

				auto fac =
						at_classifier->getEPackage()->getEFactoryInstance();

				ecorecpp::mapping::any any = obj->eGet(attr);

				return fac->convertToString(atc, any);
			}
		}
	}
	return "";
}

/** Internal helpers. */
namespace details {

/** The cached results contain the list of packages, which have been scanned,
 * and the list of class, which have been found. */
struct SubClasses {
	std::set< ::ecore::EPackage_ptr > _packages;
	std::set<::ecore::EClass_ptr> _classes;
};

/** Cache for abstract subclasses. Indexed by the superclass. */
std::map< ::ecore::EClass*, details::SubClasses > _abstractSubClasses;

/** Cache for non-abstract subclasses. Indexed by the superclass. */
std::map< ::ecore::EClass*, details::SubClasses > _subClasses;


void scanPackage( ::ecore::EPackage_ptr package, ::ecore::EClass_ptr superclass,
				  SubClasses& result ) {
	// 0. Store Package as "scanned"
	result._packages.insert(package);

	// 1. A class is its own base class
	result._classes.insert(superclass);

	// 2. Iterate over all subpackages
	for (auto subPackage : package->getESubpackages())
		scanPackage(subPackage, superclass, result);

	// 3. Iterate over all EClassifiers
	for (auto eClassifier : package->getEClassifiers()) {
		auto eClass = eClassifier->as<::ecore::EClass>();
		if (!eClass)
			continue;
	// 4. Iterate over all ESuperTypes of an EClass
		for (auto eSuperType : eClass->getEAllSuperTypes()) {
			if (eSuperType == superclass) {
				result._classes.insert(eClass);
				break;
			}
		}
	}
}

} // namespace details


/** Scans the package for all classes, including abstract classes, derived
 * from a given superclass, stores the result in a cache, and returns a
 * reference to the content of the cache.
 */
const std::set<::ecore::EClass_ptr>& EcoreUtil::getAbstractSubClasses( ::ecore::EPackage_ptr package,
															::ecore::EClass_ptr superclass ) {
	auto it = details::_abstractSubClasses.find(superclass.get());

	if (it == details::_abstractSubClasses.end()) {
		details::SubClasses cacheEntry;
		details::scanPackage(package, superclass, cacheEntry);

		bool ignore;
		std::tie(it, ignore) = details::_abstractSubClasses.insert(
			std::make_pair(superclass.get(), cacheEntry) );

	} else {
		auto& cacheEntry = it->second;
		// check if package has been scanned
		if (cacheEntry._packages.count(package) == 0) {
			details::scanPackage(package, superclass, cacheEntry);
		}
	}

	return it->second._classes;
}

/** Scans the package for all non-abstract classes derived from a given
 * superclass, stores the result in a cache, and returns a reference to the
 * content of the cache.
 *
 * Intended usage:
 \code{.cpp}
 auto classBase = BasePackage::_instance()
	->getEClassifier("Base")->as<ecore::EClass>();
 auto& subclassesOfBase = Utils::getSubClasses(
	SomePackage::_instance(), classBase );

 std::cerr << "classBase " << classBase.get()
		   << " " << classBase->getName() << std::endl;
 for (auto subClass : subclassesOfBase)
	std::cerr << "\tsubClass " << subClass.get()
			  << " " << subClass->getEPackage()->getName()
			  << "::" << subClass->getName() << std::endl;
\endcode
 */
const std::set<::ecore::EClass_ptr>& EcoreUtil::getSubClasses( ::ecore::EPackage_ptr package,
													::ecore::EClass_ptr superclass ) {
	auto concreteIt = details::_subClasses.find(superclass.get());

	if ( concreteIt == details::_subClasses.end()
		 || concreteIt->second._packages.count(package) == 0 ) {
		// refresh cache for abstract subclasses, if needed.
		(void)getAbstractSubClasses(package, superclass);
		auto abstractIt = details::_abstractSubClasses.find(superclass.get());
		assert(abstractIt != details::_abstractSubClasses.end());

		details::SubClasses copy = abstractIt->second;
		std::set<::ecore::EClass_ptr> concreteClasses;
		for (auto eClass : copy._classes)
			if (!eClass->isAbstract())
				concreteClasses.insert(eClass);
		copy._classes = concreteClasses;

		if (concreteIt == details::_subClasses.end()) {
			bool ignore;
			std::tie(concreteIt, ignore) = details::_subClasses.insert(
				std::make_pair(superclass.get(), copy) );
		} else
			concreteIt->second = copy;
	}

	return concreteIt->second._classes;
}
} //util
} //ecorecpp
