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

#include <algorithm>

#include <QString>
#include <QUuid>
#include <ecorecpp/parser/XMLHandler.hpp>
#include <ecorecpp/serializer/XMLSerializer.hpp>

namespace ecorecpp {
namespace resource {

using ::ecorecpp::serializer::XMLSerializer;

XMLResourceFactory::~XMLResourceFactory() = default;

Resource_ptr XMLResourceFactory::createResource(const QUrl& uri) {
	return Resource_ptr(new XMLResource(uri));
}

const std::string XMLResource::OPTION_KEEP_DEFAULT_CONTENT = "KEEP_DEFAULT_CONTENT";
const std::string XMLResource::OPTION_FORMATTED = "FORMATTED";

XMLResource::XMLResource(const QUrl& uri)
	: Resource(uri) {
}

XMLResource::~XMLResource() = default;

void XMLResource::setID(::ecore::EObject_ptr eobj, const std::string& id) {
	_eObjectToIDMap[eobj.get()] = id;
	_idToEObjectMap[id] = eobj.get();
}

std::string XMLResource::getID(::ecore::EObject_ptr eobj) {
	auto it = _eObjectToIDMap.find(eobj.get());
	if (it != _eObjectToIDMap.end())
		return it->second;

	if (!useUUIDs())
		return std::string();

	return createID(eobj);
}

::ecore::EObject_ptr XMLResource::getEObject(const std::string& uriFragment) {
	auto it = _idToEObjectMap.find(uriFragment);
	if (it != _idToEObjectMap.end())
		return it->second;

	return Resource::getEObject(uriFragment);
}

std::string XMLResource::getURIFragment(::ecore::EObject_ptr obj) {
	if (useIDs() || useUUIDs()) {
		std::string id = getID(obj);
		if (!id.empty())
			return id;
	}

	return Resource::getURIFragment(obj);
}

void XMLResource::load(std::istream& is, const Resource::OptionMap&) {
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

void XMLResource::save(std::ostream& os, const Resource::OptionMap& options) {
	if (!os)
		throw std::logic_error("Output stream not writeable!");

	XMLSerializer ser(os);

	XMLSerializer::XmiIndentMode mode =
		XMLSerializer::XmiIndentMode::Indentation;
	if ( options.count(OPTION_FORMATTED) ) {
		std::string modeStr = options.at(OPTION_FORMATTED);
		std::transform(modeStr.begin(), modeStr.end(), modeStr.begin(),
				[](unsigned char c){ return std::tolower(c); } );
		mode = (modeStr == "true")
			? XMLSerializer::XmiIndentMode::Indentation
			: XMLSerializer::XmiIndentMode::NoIndentation;

	}
	ser.setIndentMode(mode);

	bool keepDefault = false;
	if ( options.count(OPTION_KEEP_DEFAULT_CONTENT) ) {
		std::string keepStr = options.at(OPTION_KEEP_DEFAULT_CONTENT);
		std::transform(keepStr.begin(), keepStr.end(), keepStr.begin(),
				[](unsigned char c){ return std::tolower(c); } );
		keepDefault = (keepStr == "true");

	}
	ser.setKeepDefault(keepDefault);


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

	_idToEObjectMap = handler.getXmiIds();
	for (auto& entry : _idToEObjectMap)
		_eObjectToIDMap.insert(std::make_pair(entry.second, entry.first));

	/* Now the model knows it's resource and we can try to resolve
	 * the (cross-document) references, too.
	 */
	handler.resolveReferences();
	handler.resolveCrossDocumentReferences();
}

bool XMLResource::useIDs() const {
	return false;
}

bool XMLResource::useUUIDs() const {
	return false;
}

/** By default, this implementation creates UUIDs.
 *
 * http://download.eclipse.org/modeling/emf/emf/javadoc/2.5.0/org/eclipse/emf/ecore/util/EcoreUtil.html#generateUUID()
 * contradicts itself: On one side it references
 * http://www.ietf.org/rfc/rfc2045.txt as "base 64", but on the other side the
 * result must be a valid "NCName" according to
 * http://www.w3.org/TR/1999/REC-xml-names-19990114/#NT-NCName - which it
 * can't be as base 64 contains a '+' and a '/', which a NCName must not
 * contain. */
std::string XMLResource::createID(::ecore::EObject_ptr obj) {
	QString uuid(
		QUuid::createUuid().toRfc4122().toBase64(
			QByteArray::Base64Encoding | QByteArray::OmitTrailingEquals));
	uuid.prepend('_');

	setID(obj, uuid.toStdString());
	return uuid.toStdString();
}

} // resource
} // ecorecpp
