// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * URIHandler.hpp
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
#ifndef URIHandler_HPP
#define URIHandler_HPP

#include "../dllEcorecpp.hpp"

#include <list>
#include <memory>

namespace ecore {
	class EObject;
}
class QUrl;

namespace ecorecpp {
namespace resource {

class URIHandler;
using URIHandler_ptr = std::shared_ptr<URIHandler>;

/** A class for uri type handling. This class is used by the URIConverter.
 *
 *  The base class (URIHandler) implementation can only handle local
 *  file uris. For all other types of uris (e.g. https://, ftp://, svn://)
 *  specialized derived classes must be implemented.
 */
class EXPORT_ECORECPP_DLL URIHandler {
public:
	using URIHandlerList = std::list<URIHandler_ptr>;
	static const URIHandlerList DEFAULT_HANDLERS;

	URIHandler();
	virtual ~URIHandler();

	/** Returns true, if this handler can handle uris of the given form.*/
	virtual bool canHandle(const QUrl&) const;

	/** Returns input stream for uri, may return a null pointer,
	 *  if the given uri can not be handled*/
	virtual std::shared_ptr<std::istream> createInputStream(const QUrl&) const;
	/** Returns output stream for uri, may return a null pointer,
	 *  if the given uri can not be handled*/
	virtual std::shared_ptr<std::ostream> createOutputStream(const QUrl&) const;

	/** Remove uri resource. Does nothing, if the given uri can
	 *  not be handled.*/
	virtual void remove(const QUrl&) const;
	/** Check existence of uri resource. Return 'false',
	 *  if the given uri can not be handled.*/
	virtual bool exists(const QUrl&) const;
};

} // resource
} // ecorecpp

#endif
