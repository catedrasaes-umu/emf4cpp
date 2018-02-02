// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * util/CrossReferencer.hpp
 * Copyright (C) INCHRON GmbH 2018 <matthias.doerfel@inchron.com>
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

#include "CrossReferencer.hpp"

#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecorecpp/resource/Resource.hpp>
#include <ecorecpp/resource/ResourceSet.hpp>

namespace ecorecpp {
namespace util {

using list_impl_t =  ::ecorecpp::mapping::EListImpl<::ecore::EObject_ptr>;

CrossReferencer::HolderMap
CrossReferencer::find_references(::ecore::EObject_ptr emfObject) {
	CrossReferencer cr(emfObject);
	cr.find();
	return cr.m_result;
}

CrossReferencer::HolderMap
CrossReferencer::find_references(const EList::ptr_type& emfObjects) {
	CrossReferencer cr(emfObjects);
	cr.find();
	return cr.m_result;
}

CrossReferencer::HolderMap
CrossReferencer::find_references(const resource::Resource_ptr& resource) {
	return find_references(resource->getContents());
}

CrossReferencer::HolderMap
CrossReferencer::find_references(const resource::ResourceSet_ptr& resources) {
	auto emfObjects = std::make_shared< EListImpl >();
	for ( auto resource : resources->getResources() )
	{
		emfObjects->insert_all( *resource->getContents() );
	}

	CrossReferencer cr(emfObjects);
	cr.find();
	return cr.m_result;
}


CrossReferencer::CrossReferencer(::ecore::EObject_ptr object)
	: m_emfObjects(std::make_shared< EListImpl >()) {
	m_emfObjects->push_back(object);
}

CrossReferencer::CrossReferencer(const EList::ptr_type& objects)
	: m_emfObjects(std::make_shared< EListImpl >()) {
	m_emfObjects->insert_all(*objects);
}


/** Add an entry to the map.
 *
 * Note: Usually a FeatureEListImpl as it is returned by
 * EObject::eCrossReferences() holds an object and the feature, in which this
 * object is stored in at the owner of the reference.  However, the lists in
 * this map are the other way round: The list holds the objects which owns the
 * feature, which contains the object that is used as an index into the map.
 *
 * TL;DR:
 * EObject::eCrossReferences() returns "holder -> (referencedObject, feature)"
 * while this map contains "referencedObject -> (holder, feature)".
 */
void CrossReferencer::add(const ::ecore::EObject_ptr& holder,
						  ::ecore::EStructuralFeature* ef,
						  const ::ecore::EObject_ptr& referencedObject) {
	auto it = m_result.find(referencedObject);
	if (it == m_result.end()) {
		bool ignore;
		std::tie(it, ignore) = m_result.insert(
			std::make_pair(referencedObject, std::make_shared< FeatureEListImpl >()));
	}

	it->second->push_back(holder, ef);
}

void CrossReferencer::find() {
	for (auto searchObject : *m_emfObjects)
	{
		auto it = searchObject->eAllContents();
		while (auto holder = *it++)
		{
			auto crossReferences = holder->eCrossReferences();
			for ( auto it = crossReferences->begin();
				  it != crossReferences->end(); ++it )
			{
				if ( isCrossReference(holder, it.eFeature(), *it) )
				{
					add(holder, it.eFeature(), *it);
				}
			}
		}
	}
}

bool CrossReferencer::isCrossReference(
		const ::ecore::EObject_ptr&, ::ecore::EStructuralFeature*,
		const ::ecore::EObject_ptr&) const {
	return true;
}

} // util
} // ecorecpp
