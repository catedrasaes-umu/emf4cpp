// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Resource.cpp
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

#include "Resource.hpp"

#include <cassert>
#include <fstream>
#include <sstream>

#include <ecore.hpp>
#include <mapping/EListImpl.hpp>
#include <util/EcoreUtil.hpp>

#include "ResourceSet.hpp"

namespace ecorecpp {
namespace resource {

class ResourceContentEList : public ::ecorecpp::mapping::ContainingEList<::ecore::EObject_ptr> {
	using base_t = ::ecorecpp::mapping::EListImpl<::ecore::EObject_ptr>;

public:
    ResourceContentEList(Resource* rs)
	: _this(rs) {
	}

	virtual ~ResourceContentEList() = default;

	void push_back(::ecore::EObject_ptr _obj) override {
		base_t::m_content.push_back(_obj);
        	if ( auto other = _obj->_getDirectResource() ) {
        		other->getContents()->remove(_obj);
		}
		_obj->_setEResource(_this);
	}

private:
	Resource* _this;
};
}
}

using namespace ::ecorecpp::resource;
//Resource::Factory::Registry
const std::string Resource::Factory::Registry::DEFAULT_EXTENSION = "*";
const std::string Resource::Factory::Registry::DEFAULT_CONTENT_TYPE_IDENTIFIER = "*";

Resource::Factory::Registry::Registry()
	: _protocolToFactoryMap(),
	  _extensionToFactoryMap() {
}

Resource::Factory* Resource::Factory::Registry::getFactory(const QUrl& uri) {
	//1. check protocol map
	Resource::Factory::Registry::FactoryMap::const_iterator factoryIt =
			getProtocolToFactoryMap().find(uri.scheme().toStdString());
	if ( factoryIt != getProtocolToFactoryMap().cend() )
		return (*factoryIt).second.get();

	//2. check file extension
	const QString extension = uri.fileName().section('.',-1);
	factoryIt = getExtensionToFactoryMap().find(extension.toStdString());
	if ( factoryIt != getExtensionToFactoryMap().cend() )
		return (*factoryIt).second.get();

	//3. Try default file extension
	factoryIt = getExtensionToFactoryMap().find(DEFAULT_EXTENSION);
	if ( factoryIt != getExtensionToFactoryMap().cend() )
		return (*factoryIt).second.get();

	//4. check content (not implemented)

	return nullptr;
}

Resource::Factory::Registry::FactoryMap&
		Resource::Factory::Registry::getProtocolToFactoryMap() {
	return _protocolToFactoryMap;
}

Resource::Factory::Registry::FactoryMap&
		Resource::Factory::Registry::getExtensionToFactoryMap() {
	return _extensionToFactoryMap;
}


//Resource::Factory
Resource_ptr Resource::Factory::createResource(const QUrl& uri) {
	throw "Not implemented!";
}

//Resource
Resource::Resource(const QUrl& uri)
	: _refCount(0u),
	  _qurl(uri),
	  _contents(new ResourceContentEList(this)),
	  _resourceSet(nullptr),
	  _loaded(false) {
}

const QUrl& Resource::getURI() const {
	return _qurl;
}

void Resource::setURI(const QUrl& uri) {
	_qurl = uri;
}

ResourceSet* Resource::getResourceSet() {
	return _resourceSet;
}

void Resource::setResourceSet(ResourceSet* rs) {
	if (_resourceSet == rs)
		return;

	if (_resourceSet)
		_resourceSet->getResources().remove( Resource_ptr(this) );

	_resourceSet = rs;
}

void Resource::load() {
	if (_loaded)
		return;

	if (!getURI().isLocalFile())
		throw std::logic_error("Resource::load() can only treat local file uris.");

	const std::string filename(getURI().toLocalFile().toStdString());
	std::ifstream ifs(filename.c_str());
	load(ifs);
	ifs.close();

	_loaded = true;
}

void Resource::load ( std::istream& ) {
	throw std::logic_error("Resource::load() is not implemented.");
}

void Resource::save() {
	if (!getURI().isLocalFile())
		throw std::logic_error("Resource::save() can only treat local file uris.");

	const std::string filename(getURI().toLocalFile().toStdString());
	std::ofstream ofs(filename.c_str(), std::ios_base::trunc);
	save(ofs);
	ofs.close();
}

void Resource::save( std::ostream& ) {
	throw std::logic_error("Resource::save() is not implemented.");
}

void Resource::unload() {
	if (_loaded) {
		getContents()->clear();
		_loaded = false;
	}
}

bool Resource::isLoaded() const {
	return _loaded;
}

::ecore::EObject_ptr Resource::getEObject(const std::string& uriFragment) {
	if (uriFragment.empty() || !_contents->size()) {
		return nullptr;
	}

	if ( uriFragment[0] != '/' ) {// use intrinsic IDs?
		for (auto it = getAllContents(); *it; ++it) {
			if ( ::ecorecpp::util::EcoreUtil::getId(*it) == uriFragment )
				return *it;
		}
		// Object not found?
		return nullptr;
	}

	std::istringstream input(uriFragment.substr(1));
	std::string segment;

	::ecore::EObject_ptr current = nullptr;
	if ( _contents->size() > 1 ) {
		std::getline(input, segment, '/');
		current = getEObjectForURIFragmentRootSegment(segment);
		if ( !current )
			return nullptr;
	} else {
		current = _contents->get(0);
	}

	while (std::getline(input, segment, '/') ) {
		if (segment.empty())
			continue;

		if ( segment[0] == '@' )
			segment.erase(segment.begin());

		unsigned long long index = 0;
		bool isCollection = false;
		size_t dotPosition = segment.rfind('.');
		if ( dotPosition != std::string::npos ) {
			std::string indexString = segment.substr(dotPosition+1);
			try {
				index = std::stoull(indexString);
			} catch (const std::invalid_argument& ia) {
				std::cerr << "Index of segment could not be parsed" << std::endl;
				return nullptr;
			}
			segment.erase(dotPosition);
			isCollection = true;
		}

		auto cl = current->eClass();
		assert(cl);
		auto sf = cl->getEStructuralFeature(segment);
		assert(sf);
		::ecorecpp::mapping::any any = current->eGet(sf);
		if (isCollection) {
			auto collection = ecorecpp::mapping::any::any_cast<
					::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type>(any);

			assert(collection->size() >= index);
			current = collection->get(index);
		} else {
			current = ::ecorecpp::mapping::any::any_cast<::ecore::EObject_ptr>(any);
		}
	}

	return current;
}

std::string Resource::getURIFragmentRootSegment( ::ecore::EObject_ptr obj ) {
	for ( size_t ind = 0; ind < _contents->size() ; ++ind ) {
		if ( _contents->get(ind) == obj ) {
			return std::to_string(ind);
		}
	}

	return "";
}

::ecore::EObject_ptr Resource::getEObjectForURIFragmentRootSegment( const std::string& root ) {
	unsigned long long index = 0;
	if ( root.empty() || !_contents->size() )
		return _contents->size() ? _contents->get(index) : nullptr;

	try {
		index = std::stoull(root);
	} catch (const std::invalid_argument& ia) {
		std::cerr << "Index of root segment could not be parsed" << std::endl;
		return nullptr;
	}

	if ( index >= _contents->size() )
		return nullptr;

	return _contents->get(index);
}

std::string Resource::getURIFragment( ::ecore::EObject_ptr obj ) {
	if (!obj)
		return "";

	//1. Look for id attribute and return its value, if existing.
	std::string id = ::ecorecpp::util::EcoreUtil::getId(obj);
	if (!id.empty())
		return id;

	//2. Return xpath
	auto current = obj;
	while ( auto container = current->eContainer() ) {
		auto esf = current->eContainingFeature();
		if (esf->getUpperBound() == 1) {
			id.insert(0, std::string("/@") + esf->getName() );
		} else {
			ecorecpp::mapping::any _any = container->eGet(esf);

			auto ef = ecorecpp::mapping::any::any_cast<
					mapping::EList<::ecore::EObject_ptr>::ptr_type >(_any);

			for (size_t index = 0; index < ef->size(); ++index) {
				if ( ef->get(index) == current ) {
					id.insert( 0, std::string("/@")
							+ esf->getName()
							+ "." + std::to_string(index) );
					break;
				}
			}
		}
		current = container;
	}

	if ( _contents->size() > 1 )
		id.insert(0, getURIFragmentRootSegment(current));

	id.insert(0, std::string("/"));
	return id;
}

::ecorecpp::util::TreeIterator<::ecore::EObject_ptr> Resource::getAllContents() {
	return ::ecorecpp::util::TreeIterator<::ecore::EObject_ptr>(_contents);
}

const ::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type& Resource::getContents() {
	return _contents;
}
