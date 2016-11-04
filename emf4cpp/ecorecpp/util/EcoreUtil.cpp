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

} //util
} //ecorecpp
