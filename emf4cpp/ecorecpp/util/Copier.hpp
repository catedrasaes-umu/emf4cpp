// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Copier/Copier.hpp
 * Copyright (C) INCHRON GmbH 2018 <stefan.quandt@inchron.com>
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

#ifndef Copier_HPP
#define Copier_HPP

#include <ecore/EObject.hpp>
#include <map>

namespace ecorecpp {
namespace util {

class EXPORT_ECORECPP_DLL Copier {
public:
	Copier( bool keepExternalReferences = true );
	virtual ~Copier();

	::ecore::EObject_ptr clone( ::ecore::EObject_ptr );
	::ecore::EObject_ptr copy( ::ecore::EObject_ptr );
	void copy_references( ::ecore::EObject_ptr src, ::ecore::EObject_ptr dst );

	/** Return a copied object for a source object. If the source object was
	 * not copied, e.g. because it is not in a containment relation to the
	 * copied tree's root, a nullptr is returned. */
	::ecore::EObject_ptr get_clone( ::ecore::EObject_ptr );

protected:
	bool _keepExternalRefs;
	std::map<::ecore::EObject_ptr, ::ecore::EObject_ptr> m_objectsMap;
};

} // util
} // ecorecpp

#endif  /* Copier_HPP */
