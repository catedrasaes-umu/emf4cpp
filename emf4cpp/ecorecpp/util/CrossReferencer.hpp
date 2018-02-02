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

#ifndef CrossReferencer_HPP
#define CrossReferencer_HPP

#include <map>
#include <boost/intrusive_ptr.hpp>

#include <ecorecpp/dllEcorecpp.hpp>
#include <ecorecpp/mapping/EListImpl.hpp>
#include <ecorecpp/mapping/FeatureEListImpl.hpp>
#include <ecorecpp/resource_forward.hpp>

namespace ecorecpp {
namespace util {

/** A CrossReferencer traverses a set of EObjects and collects all
 * cross-references.
 *
 * A cross-reference is any reference to an EObject, which is neither a
 * containment relation nor the opposite relation of a containment relation.
 *
 * Currently even cross-references to objects external to the containment tree
 * of the given object set are part of the result. If you want to filter them
 * out, you need to re-implement isCrossReference().
 *
 * Note: Unlike Java EMF, the CrossReferencer does not inherit from std::map,
 * because the C++ standard says, you shouldn't inherit from a STL
 * container. For reference, see https://stackoverflow.com/a/2034936 and
 * https://www.researchgate.net/post/I_really_want_to_understand_if_there_is_any_reason_why_one_should_not_inherit_from_the_stl_vector_class_in_c2
 */
class EXPORT_ECORECPP_DLL CrossReferencer {
public:
	using EList = mapping::EList<::ecore::EObject_ptr>;
	using FeatureEListImpl = mapping::FeatureEListImpl<::ecore::EObject_ptr>;

	/** A HolderMap answers "referencedObject -> (holder, feature)". */
	using HolderMap = std::map<::ecore::EObject_ptr, FeatureEListImpl::ptr_type>;

	static HolderMap find_references(::ecore::EObject_ptr emfObject);
	static HolderMap find_references(const EList::ptr_type& emfObjects);
	static HolderMap find_references(const resource::Resource_ptr& resource);
	static HolderMap find_references(const resource::ResourceSet_ptr& resources);

protected:
	CrossReferencer(::ecore::EObject_ptr);
	CrossReferencer(const EList::ptr_type&);
	~CrossReferencer() = default;

	void find();
	void add(
		const ::ecore::EObject_ptr& holder, ::ecore::EStructuralFeature*,
		const ::ecore::EObject_ptr& referencedObject);

	virtual bool isCrossReference(
		const ::ecore::EObject_ptr& holder, ::ecore::EStructuralFeature*,
		const ::ecore::EObject_ptr& referencedObject) const;

private:
	using EListImpl = mapping::EListImpl<::ecore::EObject_ptr>;
	EListImpl::ptr_type m_emfObjects;
	HolderMap m_result;
};


} // util
} // ecorecpp

#endif  /* CrossReferencer_HPP */
