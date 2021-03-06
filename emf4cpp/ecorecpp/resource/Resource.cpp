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
#include <iostream>
#include <sstream>
#include <ecore.hpp>
#include <mapping/EListImpl.hpp>
#include <util/EcoreUtil.hpp>

#include "ResourceSet.hpp"
#include "URIConverter.hpp"

namespace ecorecpp {
namespace resource {

class Resource::ResourceContentEList : public ::ecorecpp::mapping::ContainingEList<::ecore::EObject_ptr> {
	using base_t = ::ecorecpp::mapping::EListImpl<::ecore::EObject_ptr>;

public:
    ResourceContentEList(Resource* rs)
	: _this(rs) {
	}

	virtual ~ResourceContentEList() = default;

	void push_back(::ecore::EObject_ptr _obj,
				   typename EList::ef* = nullptr) override {
		base_t::m_content.push_back(_obj);
		if ( auto other = _obj->_getDirectResource() ) {
			other->getContents()->remove(_obj);
		}
		_obj->_setEResource(_this);
		_this->_loaded = true;
	}

private:
	Resource* _this;
};

//Resource::Factory::Registry
const std::string Resource::Factory::Registry::DEFAULT_EXTENSION = "*";
const std::string Resource::Factory::Registry::DEFAULT_CONTENT_TYPE_IDENTIFIER = "*";

Resource::Factory::Registry::Registry()
	: _protocolToFactoryMap(),
	  _extensionToFactoryMap() {
}

Resource::Factory::Registry::~Registry() = default;

Resource::Factory::Registry& Resource::Factory::Registry::getInstance() {
	static Registry instance;

	return instance;
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
Resource::Factory::~Factory() = default;

Resource_ptr Resource::Factory::createResource(const QUrl& uri) {
	throw "Not implemented!";
}

//Resource
Resource::Resource(const QUrl& uri)
	: _refCount(0u),
	  _qurl(uri),
	  _contents(new ResourceContentEList(this)),
	  _resourceSet(nullptr),
	  _uriConverter(nullptr),
	  _loaded(false) {
}

Resource::~Resource() {
	if (_resourceSet) {
		/* boost::intrusive_ptr(p, false) creates a pointer, which does not
		 * increment the reference counter in the beginning, but does
		 * decrement it at the end. But as we are here in the destructor, and
		 * the object, including the reference counter, will be destroyed
		 * anyways, we do not care about leaving the reference counter with a
		 * value of -1. */
		_resourceSet->getResources().remove( Resource_ptr(this, /*add_ref*/false) );
	}
	for (auto obj : *_contents)
		obj->_setEResource(nullptr);
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

void Resource::load(const Resource::OptionMap& options) {
	if (_loaded)
		return;

	auto is = getURIConverter()->createInputStream(getURI());
	load(*is, options);

	_loaded = true;
}

void Resource::load ( std::istream&, const Resource::OptionMap& ) {
	throw std::logic_error("Resource::load() is not implemented.");
}

void Resource::save(const Resource::OptionMap& options) {
	auto os = getURIConverter()->createOutputStream(getURI());
	save(*os, options);
}

void Resource::save( std::ostream&, const OptionMap& ) {
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
	if (useIDAttributes()) {
		std::string id = ::ecorecpp::util::EcoreUtil::getId(obj);
		if (!id.empty())
			return id;
	}

	//2. Return xpath
	auto current = obj;
	std::string id;
	while ( auto container = current->eContainer() ) {
		if ( container->eResource() != this )
			break;
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

bool Resource::useIDAttributes() const {
	return true;
}

URIConverter* Resource::getURIConverter() {
	if (auto rs = getResourceSet())
		return rs->getURIConverter();

	if (!_uriConverter)
		_uriConverter.reset(new URIConverter());

	return _uriConverter.get();
}

} // resource
} // ecorecpp
