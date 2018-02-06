// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "ecore.hpp"

namespace ecore {

	void addAnnotation(::ecore::EAttribute_ptr attr, std::string source, std::string key, std::string value ) {
		ecore::EAnnotation* annotation = new ecore::EAnnotation();
		annotation->setSource(source);
		::ecore::EStringToStringMapEntry* entry = new ::ecore::EStringToStringMapEntry();
		entry->setKey(key);
		entry->setValue(value);
		annotation->getDetails().push_back(entry);
		attr->getEAnnotations().push_back(annotation);
	}

}				 
