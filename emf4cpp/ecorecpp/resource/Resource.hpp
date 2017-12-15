// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Resource.hpp
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

#ifndef Resource_HPP
#define Resource_HPP

#include "../dllEcorecpp.hpp"

#include <iostream>
#include <unordered_map>
#include <boost/intrusive_ptr.hpp>

#include <QtCore/qstring.h>
#include <QtCore/qurl.h>

#include "../util/TreeIterator.hpp"

namespace ecore {
	class EObject;
}

namespace ecorecpp {
namespace resource {

class Resource;
using Resource_ptr = boost::intrusive_ptr<Resource>;


class EXPORT_ECORECPP_DLL Resource {
public:

	Resource(const Resource&)    = delete;
	void operator=(const Resource&) = delete;
	virtual ~Resource() = default;

	class EXPORT_ECORECPP_DLL Factory {
	public:
		virtual Resource_ptr createResource(const QUrl& uri);

		class EXPORT_ECORECPP_DLL Registry {
		public:
			static const std::string DEFAULT_EXTENSION;
			static const std::string DEFAULT_CONTENT_TYPE_IDENTIFIER;

			using FactoryMap =
					std::unordered_map<std::string, std::unique_ptr<Factory>>;

			static Registry& getInstance() {
				static Registry instance;

				return instance;
			}

			Registry(const Registry&)       = delete;
			void operator=(const Registry&) = delete;

			Factory* getFactory(const QUrl& uri);

			FactoryMap& getProtocolToFactoryMap();
			FactoryMap& getExtensionToFactoryMap();

		private:
			Registry();

			FactoryMap _protocolToFactoryMap;
			FactoryMap _extensionToFactoryMap;
		};
	};

	virtual ::ecorecpp::util::TreeIterator<::ecore::EObject_ptr> getAllContents();
	virtual const ::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type& getContents();

	const QUrl& getURI() const;
	void setURI(const QUrl&);

	ResourceSet* getResourceSet();
	void setResourceSet(ResourceSet*);

    virtual void load();
	virtual void load(std::istream&);

	virtual void save();
	virtual void save(std::ostream&);

	virtual void unload();

	bool isLoaded() const;

	virtual ::ecore::EObject_ptr getEObjectForURIFragmentRootSegment(const std::string&);
	virtual std::string getURIFragmentRootSegment(::ecore::EObject_ptr);

	virtual ::ecore::EObject_ptr getEObject(const std::string& uriFragment);
	virtual std::string getURIFragment(::ecore::EObject_ptr);

protected:
	explicit Resource(const QUrl&);

    friend void intrusive_ptr_add_ref(Resource* p) { ++p->_refCount; }
    friend void intrusive_ptr_release(Resource* p) {
		if (--p->_refCount == 0u)
			delete p; }
    mutable std::atomic_size_t _refCount;

private:
	QUrl _qurl;
	::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type _contents;
	ResourceSet* _resourceSet;

	bool _loaded;
};

} // resource
} // ecorecpp

#endif    /* Resource_HPP */
