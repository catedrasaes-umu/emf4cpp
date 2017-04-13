// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLResource.cpp
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

#include "XMLResource.hpp"

#include <ecorecpp/parser/XMLHandler.hpp>
#include <ecorecpp/serializer/XMLSerializer.hpp>

using namespace ::ecorecpp::resource;

Resource* XMLResourceFactory::createResource(const QUrl& uri) {
	return new XMLResource(uri);
}

XMLResource::XMLResource(const QUrl& uri)
	: Resource(uri) {
}

void XMLResource::setID(::ecore::EObject* eobj, const std::string& id) {
	_eObjectToIDMap[eobj] = id;
	_idToEObjectMap[id] = eobj;
}

std::string XMLResource::getID(::ecore::EObject* eobj) {
	if ( _eObjectToIDMap.count(eobj) )
		return _eObjectToIDMap[eobj];

	return "";
}

void XMLResource::load(std::istream& is) {
	if (!is)
		throw std::logic_error("Input stream not readable!");

	// get length of file:
	is.seekg (0, is.end);
	std::streamsize length = is.tellg();
	is.seekg (0, is.beg);

	// allocate memory:
	std::vector<::ecorecpp::mapping::type_definitions::char_t> buffer(length);

    // read data as a block:
	is.read(buffer.data(), length);

	// The file is read in text mode. If it contains \r\n line
	// endings, the number of bytes read can be smaller than the
	// file size calculated by seekg().
	length = is.gcount();
	buffer.resize(length);

	doLoad(buffer);
}

void XMLResource::save(std::ostream& os) {
	if (!os)
		throw std::logic_error("Output stream not writeable!");

	::ecorecpp::serializer::XMLSerializer ser(os,
			::ecorecpp::serializer::XMLSerializer::XmiIndentMode::Indentation);
	ser.serialize(getContents()->get(0));
}

void XMLResource::doLoad(
		const std::vector<::ecorecpp::mapping::type_definitions::char_t>& buffer ) {
	/*
	 * Create our SAX handler object and install it on the parser, as the
	 * document and error handler.
	 */
	XMLHandler handler;

	xml_parser::SemanticState<XMLHandler> ss(handler);

	State<xml_parser::SemanticState<XMLHandler>>
			st(ss, buffer.data(), buffer.size());

	/*
	 * Get the starting time and kick off the parse of the indicated
	 * file. Catch any exceptions that might propogate out of it.
	 */
	xml_parser::grammar::the_xml::match(st);

	/* This only resolves non-containment references, that are not
	 * cross-document !
	 */
	::ecore::EObject_ptr root = handler.getRootElement();
	root->_initialize();

	getContents()->push_back(root);

	/* Now the model knows it's resource and we can try to resolve
	 * The (cross-document) references, too.
	 */
	handler.resolveReferences();
	handler.resolveCrossDocumentReferences();
}

bool XMLResource::useIDAttributes() const {
	return true;
}

bool XMLResource::useIDs() const {
	return false;
}

bool XMLResource::useUUIDs() const {
	return false;
}
