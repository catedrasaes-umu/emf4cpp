// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/XMLHandler.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "XMLHandler.hpp"
#include "../MetaModelRepository.hpp"
#include "../util/debug.hpp"
#include "../util/escape_html.hpp"
#include "../mapping.hpp"
#include "../resource/ResourceSet.hpp"
#include <iostream>
#include <vector>
#include <map> // for pair
#include <ecore.hpp>

using namespace ::ecorecpp;
using namespace ::ecorecpp::parser;
using namespace ::ecore;

XMLHandler::XMLHandler()
	: m_level(0),
	  m_expected_literal(false),
	  m_expected_literal_name(),
	  m_objects(),
	  m_current_metamodel(nullptr),
	  m_current_namespace(),
	  m_unresolved_references(),
	  m_unresolved_cross_references() {
}

void XMLHandler::characters(xml_parser::match_pair const& chars) {
	if (!m_expected_literal)
		return;

	try {
		assert( m_level);

		::ecorecpp::mapping::type_definitions::string_t literal(chars.first, chars.second);

		util::unescape_html(literal);

		EObject_ptr const& eobj = m_objects.back();
		EClass_ptr const eclass = eobj->eClass();

		::ecorecpp::mapping::type_definitions::string_t const& name =
				m_expected_literal_name;

		DEBUG_MSG(cout, name);

		EStructuralFeature_ptr const esf =
				eclass->getEStructuralFeature(name);

		EDataType_ptr const edt = esf->getEType()->as<EDataType>();

		EFactory_ptr const efac = edt->getEPackage()->getEFactoryInstance();
		assert(efac);

		any anyObj = efac->createFromString(edt, literal);
		eobj->eSet(esf, anyObj);
	} catch (const char * e) {
		ERROR_MSG("ERROR: " << e);
	}
}

void XMLHandler::processing_tag(xml_parser::match_pair const& tag,
		xml_parser::attr_list_t const& attr_list) {
}


void XMLHandler::start_tag(xml_parser::match_pair const& nameP,
		xml_parser::attr_list_t const& attributes) {
	::ecorecpp::mapping::type_definitions::string_t * type = nullptr;
	::ecorecpp::mapping::type_definitions::string_t * href = nullptr;
	::ecorecpp::mapping::type_definitions::string_t * xmiId = nullptr;
	::ecorecpp::mapping::type_definitions::string_t name(nameP.first, nameP.second);
	static MetaModelRepository_ptr _mmr = MetaModelRepository::_instance();

	// Data
	EPackage_ptr epkg = nullptr;
	EFactory_ptr efac;
	EClassifier_ptr eclassifier = nullptr;
	EClass_ptr eclass = nullptr;
	EObject_ptr eobj = nullptr;
	const size_t length = attributes.size();
	std::vector< std::pair<
			::ecorecpp::mapping::type_definitions::string_t,
			::ecorecpp::mapping::type_definitions::string_t > > attr_list(length);

	if (!m_level)
		type = &name;

	for (size_t i = 0; i < length; i++) {
		// xsi:type may not be the first attribute using our serializer
		attr_list[i] = std::make_pair(
				::ecorecpp::mapping::type_definitions::string_t( attributes[i].first.first,
						attributes[i].first.second ),
				::ecorecpp::mapping::type_definitions::string_t( attributes[i].second.first,
						attributes[i].second.second));

		util::unescape_html(attr_list[i].second);

		if (!type && (attr_list[i].first == "xsi:type"))
			type = &attr_list[i].second;

		if (attr_list[i].first == "xmi:id") {
			xmiId = &attr_list[i].second;
		}

		if (attr_list[i].first == "href") {
			href = &attr_list[i].second;
		}
	}

	if (href) {
		DEBUG_MSG(cout, "    --- Unresolved cross document reference: "
				<< *href);

		Reference cr;
		cr._obj = m_objects.back();
		cr._featureName = name;
		cr._refType = (type) ? *type : "";
		cr._href = *href;
		m_unresolved_cross_references.push_back(cr);

		m_expected_literal = true;
		m_expected_literal_name = name;
		++m_level;

		return;
	}

	if (type) {
		size_t const double_dot = type->find(':');
		::ecorecpp::mapping::type_definitions::string_t type_ns = type->substr(0, double_dot);
		::ecorecpp::mapping::type_definitions::string_t type_name = type->substr(double_dot+1);

		epkg = _mmr->getByName(type_ns);
		if (!epkg)
			throw std::logic_error(std::string("missing package: ") + type_ns);

		if (!m_level) {
			m_current_metamodel = epkg;
			m_current_namespace = type_ns;
		}

		eclassifier = epkg->getEClassifier(type_name);
	} else {
		assert( m_level);
		eclassifier
				= m_objects.back()->eClass()->getEStructuralFeature(name)->getEType();
		epkg = eclassifier->getEPackage();
	}

	assert(eclassifier);
	assert(epkg);
	eclass = instanceOf<EClass>(eclassifier);

	if (eclass) {
		efac = epkg->getEFactoryInstance();
		assert(efac);
		eobj = efac->create(eclass);
		assert(eobj);

		if (xmiId && !xmiId->empty())
			_xmiIds.insert( std::make_pair(*xmiId, eobj.get()) );

		DEBUG_MSG(cout, "--- START: " << (m_level + 1));

		// Attributes
		for (size_t i = 0; i < length; i++) {
			try {
				::ecorecpp::mapping::type_definitions::string_t const& aname =
						attr_list[i].first;

				if (!isAtCurrentNamespace(aname))
				continue;

				::ecorecpp::mapping::type_definitions::string_t const& avalue =
						attr_list[i].second;

				DEBUG_MSG(cout, "    --- Attributes: (" << (i + 1) << "/"
						<< length << ") " << aname << " " << avalue);

				EStructuralFeature_ptr const esf =
						eclass->getEStructuralFeature(aname);
				assert(esf);

				EClassifier_ptr const aeclassifier =
						esf->getEType();
				assert(aeclassifier);

				EDataType_ptr const aedt =
						instanceOf<EDataType>(aeclassifier);

				if (!aedt) {
					Reference ref;
					ref._obj = eobj;
					ref._featureName = aname;
					ref._href = avalue;
					m_unresolved_references.push_back(ref);

					DEBUG_MSG(cout, "    --- Unresolved reference: "
							<< avalue);
				} else {
					// Convert from string
					EPackage_ptr const pkg = aedt->getEPackage();
					EFactory_ptr const fac = pkg->getEFactoryInstance();

					any anyVal = fac->createFromString(aedt, avalue);
					eobj->eSet(esf, anyVal);
				}
			} catch (const char* e) {
				ERROR_MSG("ERROR: " << e);
			} catch (const any::bad_any_cast& e) {
				ERROR_MSG("ERROR: " << e.what());
			}
		}

		if (m_level) {
			EObject_ptr const& peobj = m_objects.back();
			EClass_ptr const peclass = peobj->eClass();
			EStructuralFeature_ptr const esf =
					peclass->getEStructuralFeature(name);

			any anyRef;

			EReference_ptr const eref = instanceOf< EReference > (esf);

			if (eref && eref->getUpperBound() != 1) {
				// Gets the collection and adds the new element
				anyRef = peobj->eGet(esf);
				mapping::EList<::ecore::EObject_ptr>::ptr_type list =
						ecorecpp::mapping::any::any_cast<
						mapping::EList<::ecore::EObject_ptr>::ptr_type>(anyRef);

				list->push_back(eobj);
			} else {
				anyRef = eobj;
				peobj->eSet(esf, anyRef);
			}

			// Is a reference and has opposite
			// TODO: remove when Notification implemented
			EReference_ptr eopref;
			if (eref && (eopref = eref->getEOpposite())) {
				if (eopref->getUpperBound() != 1) {
					// Gets the collection and adds the new element
					anyRef = eobj->eGet(eopref);
					mapping::EList<::ecore::EObject_ptr>::ptr_type list =
							ecorecpp::mapping::any::any_cast<
							mapping::EList<::ecore::EObject_ptr>::ptr_type>(anyRef);

					list->push_back(peobj);
				} else {
					anyRef = peobj;
					eobj->eSet(eopref, anyRef);
				}
			}
		}

		m_objects.push_back(eobj);
	} else {
		m_expected_literal = true;
		m_expected_literal_name = name;
	}

	++m_level;
}

void XMLHandler::end_tag(xml_parser::match_pair const& name) {
	DEBUG_MSG(cout, "--- END: " << m_level);

	if (--m_level && !m_expected_literal)
		m_objects.pop_back();

	m_expected_literal = false;
}

EObject_ptr XMLHandler::getRootElement() {
	if (!m_objects.empty())
		return m_objects.front();
	return EObject_ptr(); // TODO: throw exception?
}

XMLHandler::XmiIdMap& XMLHandler::getXmiIds() {
	return _xmiIds;
}

void XMLHandler::resolveReferences() {
	auto model_root = m_objects.front();
	::ecorecpp::resource::Resource* resource = model_root->eResource();
	if (!resource)
		throw std::logic_error("Cannot resolve references. Model has no resource.");

	for ( const auto& refs : m_unresolved_references ) {
		std::istringstream input(refs._href);
		std::string ref;
		EObject_ptr resolvedObj = nullptr;

		while (std::getline(input, ref, ' ')) {
			resolvedObj = resource->getEObject(ref);

			if (!resolvedObj) {
				std::cerr << "Cannot resolve reference: " << ref << '\n';
				continue;
			}

			auto const eobj = refs._obj;
			assert(eobj);

			auto const eclass = eobj->eClass();
			assert(eclass);

			auto const esf = eclass->getEStructuralFeature(refs._featureName);
			assert(esf);

			DEBUG_MSG(cout, "--- Resolving reference: " << ref << " from "
					<< eclass->getName() << ":" << refs._featureName);

			EJavaObject owner = eobj->eGet(esf);

			if ( ::ecorecpp::mapping::any::is_a<
					mapping::EList<::ecore::EObject_ptr>::ptr_type>(owner) ) {
				ecorecpp::mapping::any::any_cast<
						mapping::EList<::ecore::EObject_ptr>::ptr_type >(owner)->push_back(resolvedObj);
			} else {
				eobj->eSet(esf, resolvedObj);
			}
		}
	}
}

void XMLHandler::resolveCrossDocumentReferences() {
	if ( m_objects.empty() )
		return;

	auto model_root = m_objects.front();
	::ecorecpp::resource::Resource* resource = model_root->eResource();
	if (!resource)
		throw std::logic_error("Cannot resolve cross references. Model has no resource.");

	::ecorecpp::resource::ResourceSet* resourceSet = resource->getResourceSet();
	if (!resourceSet)
		throw std::logic_error("Cannot resolve cross references. No resource set for model found.");

	for ( const auto& ref : m_unresolved_cross_references ) {
#ifdef ECORECPP_USE_WSTRING
		QUrl refUri( QString::fromStdWString(ref._href) );
#else
		QUrl refUri( QString::fromStdString(ref._href) );
#endif

		EObject_ptr resolvedObj = resourceSet->getEObject(refUri, /*loadOnDemand*/true);

		if (!resolvedObj) {
			std::cerr << "Cannot resolve cross reference: " << ref._href
					  << std::endl;
			continue;
		}

		auto const eobj = ref._obj;
		assert(eobj);

		auto const eclass = eobj->eClass();
		assert(eclass);

		auto const esf = eclass->getEStructuralFeature(ref._featureName);
		assert(esf);

		DEBUG_MSG(cout, "--- Resolving cross reference: " << ref._href << " from "
					<< eclass->getName() << ":" << ref._featureName);

		EJavaObject owner = eobj->eGet(esf);

		if ( ::ecorecpp::mapping::any::is_a<
				mapping::EList<::ecore::EObject_ptr>::ptr_type>(owner) ) {
			ecorecpp::mapping::any::any_cast<
					mapping::EList<::ecore::EObject_ptr>::ptr_type >(owner)->push_back(resolvedObj);
		} else {
			eobj->eSet(esf, resolvedObj);
		}
	}
}
