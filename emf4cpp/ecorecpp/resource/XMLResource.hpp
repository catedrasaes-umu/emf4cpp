// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLResource.hpp
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

#ifndef XMLResource_HPP
#define XMLResource_HPP

#include "../dllEcorecpp.hpp"

#include <unordered_map>

#include "../mapping/type_definitions.hpp"
#include "Resource.hpp"

namespace ecore {
class EObject;
}

namespace ecorecpp {
namespace resource {

//Factory
class EXPORT_ECORECPP_DLL XMLResourceFactory : public Resource::Factory {
public:
	XMLResourceFactory() = default;
	~XMLResourceFactory() override;

	Resource_ptr createResource(const QUrl&) override;
};

//Resource
class EXPORT_ECORECPP_DLL XMLResource : public Resource {
public:
	explicit XMLResource(const QUrl&);
	~XMLResource() override;

	void load(std::istream&) override;
	void save(std::ostream&) override;

	void setID(::ecore::EObject_ptr, const std::string&);
	std::string getID(::ecore::EObject_ptr);

	::ecore::EObject_ptr getEObject(const std::string& uriFragment) override;
	std::string getURIFragment(::ecore::EObject_ptr) override;

	/** Use ids from the map, where the user has set them. They are stored in
	 * the attribue xmi:id. */
	virtual bool useIDs() const;
	/** Generate unique ids automatically. They are stored in the attribue
	 * xmi:id. */
	virtual bool useUUIDs() const;
	/* If all is disabled, xpath is used for references. */

protected:
	/** Generates a new UUID and calls setId(). */
	virtual std::string createID(::ecore::EObject_ptr);

private:
	void doLoad(const std::vector<::ecorecpp::mapping::type_definitions::char_t>&);

	std::unordered_map<::ecore::EObject*, std::string> _eObjectToIDMap;
	std::unordered_map<std::string, ::ecore::EObject*> _idToEObjectMap;
};

} // resource
} // ecorecpp

#endif    /* XMLResource_HPP */
