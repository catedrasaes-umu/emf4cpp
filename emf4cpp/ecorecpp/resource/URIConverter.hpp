// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * URIConverter.hpp
 * Copyright (C) INCHRON GmbH 2018 <soeren.henning@inchron.com>
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
#ifndef URIConverter_HPP
#define URIConverter_HPP

#include "../dllEcorecpp.hpp"

#include <memory>
#include <string>
#include <unordered_map>

#include "URIHandler.hpp"

namespace ecore {
	class EObject;
}
class QUrl;

namespace ecorecpp {
namespace resource {

/** Class URIConverter
 *
 *  URIConverter for getting uri specific output/input streams
 *  and for normalizing uris.
 */
class EXPORT_ECORECPP_DLL URIConverter {
public:
	/** Create a new URIConverter containing the URIHandler::DEFAULT_HANDLERS
	 *  list.*/
	URIConverter();
	/** Create a new URIConverter with user defined URIHandler list.*/
	URIConverter(const URIHandler::URIHandlerList&);
	virtual ~URIConverter();

	/** Get input stream. Delegates to matching URIHandler.*/
	std::shared_ptr<std::istream> createInputStream(const QUrl&) const;
	/** Get output stream. Delegates to matching URIHandler.*/
	std::shared_ptr<std::ostream> createOutputStream(const QUrl&) const;

	/** Remove resource. Delegates to matching URIHandler.*/
	void remove(const QUrl&) const;
	/** Check existence of resource. Delegates to matching URIHandler.*/
	bool exists(const QUrl&) const;

	using URIMap = std::unordered_map<std::string, std::string>;
	URIMap& getURIMap();

	/** Returns a mapped url.
	 *
	 *  The trimmed (removed query and fragment) source url is mapped
	 *  to a target url, if a matching entry exists in the URIMap.
	 *  The resulting target url gets normalized again until no further
	 *  entry is found in the map. This allows for chained mappings.
	 *  Before the resulting target url is returned, the original query
	 *  and fragment strings are appended.*/
	QUrl normalize(const QUrl&) const;

	/** Returns a matching URIHandler.
	 *
	 *  If no URIHandler can be found this method throws an
	 *  exception of type std::logic_error.*/
	const URIHandler_ptr& getURIHandler(const QUrl&) const;
	URIHandler::URIHandlerList& getURIHandlers();

private:
	URIMap _uriMap;
	URIHandler::URIHandlerList _handlers;
};

} // resource
} // ecorecpp

#endif
