// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EcoreUtil.hpp
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

#ifndef EcoreUtil_HPP
#define EcoreUtil_HPP

#include "../dllEcorecpp.hpp"

#include <set>
#include <string>

#include <ecore_forward.hpp>

namespace ecorecpp {
namespace util {
struct EXPORT_ECORECPP_DLL EcoreUtil {

	/** Return ID-attribute value in string representation.
	 *
	 *  If no ID-attribute exists, this function returns an empty
	 *  string.
	 */
	static std::string getId( ::ecore::EObject_ptr );

	/** Return all potential non-abstract subclasses for a given class.
	 *
	 * The EPackage and its sub-packages are scanned. As this is an expensive
	 * operation, the result is cached.
	 * \note Uses the cache of getAbstractSubClasses()
	 */
	static const std::set<::ecore::EClass_ptr>& getSubClasses(
			::ecore::EPackage_ptr, ::ecore::EClass_ptr );

	/** Return all potential subclasses for a given class, including abstract
	 * classes.
	 *
	 * The EPackage and its sub-packages are scanned. As this is an expensive
	 * operation, the result is cached.
	 */
	static const std::set<::ecore::EClass_ptr>& getAbstractSubClasses(
			::ecore::EPackage_ptr, ::ecore::EClass_ptr );
};

} //util
} //ecorecpp

#endif
