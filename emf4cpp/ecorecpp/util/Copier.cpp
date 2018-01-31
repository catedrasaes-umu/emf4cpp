// -*- mode: c++; c-basic-offset: 4; -*-
/*
 * Copier/Copier.cpp
 * Copyright (C) INCHRON GmbH 2018 <stefan.quandt@inchron.com>
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

#include "Copier.hpp"
#include <list>
#include <ecore.hpp>
#include "../mapping.hpp"
#include "../serializer/serializer.hpp"
#include "debug.hpp"

namespace ecorecpp {
namespace util {

using namespace ::ecore;
using EList_ptr = ::ecorecpp::mapping::EList<EObject_ptr>::ptr_type;

Copier::Copier( bool keepExternalReferences )
: _keepExternalRefs( keepExternalReferences ) { }
	
Copier::~Copier() { }

/**
 * \return A deep copy of given EObject.
 * \note If the object is a a subtree of an EMF model then the resolution
 * of references to elements outside the tree cannot be resolved.
 * Unless the same Copier instance has been used before to clone the
 * whole model (i.e. the Copier instance is not stateless but instead keeps
 * track of objects from the source model).
 */
EObject_ptr Copier::clone( EObject_ptr obj ) {
	EObject_ptr clone = copy( obj );
	for ( auto& kv : m_objectsMap )
		copy_references( kv.first, kv.second );
	return clone;
}

/**
 * This does a deep copy of attributes and containments of the given object
 * without adjusting non-containment references.
 * \sa copy_references()
 */
EObject_ptr Copier::copy( EObject_ptr src ) {
	EClass_ptr cls = src->eClass();
	auto dst = cls->getEPackage()->getEFactoryInstance()->create( cls );
	assert( dst );
	assert( ! dst->eResource() );
	m_objectsMap[ src ] = dst;
	//DEBUG_MSG( cout, src << " is cloned as " << dst );

	/* 1)  Copy attributes
	 */
	const auto& attributes = cls->getEAllAttributes();
	for ( size_t i = 0; i < attributes.size(); i++ ) {
		EAttribute_ptr const& attr = attributes[ i ];
		if ( attr->isTransient() || ! src->eIsSet( attr ) || attr->isID() )
			continue;
		if ( attr->getUpperBound() == 1)
			dst->eSet( attr, src->eGet( attr ) );
		else {
			/* The generated eSet() is inconsistent with eGet(): While eGet()
			 * returns a std::vector of anys, eSet() expects a single any
			 * parameter, which is appended to the current content.
			 *
			 * As the object is new, we do not need to the clear the attribute
			 * container. */
			auto any = src->eGet( attr );
			std::vector< ecorecpp::mapping::any > anys =
				ecorecpp::mapping::any::any_cast<
					std::vector<ecorecpp::mapping::any> >(any);
			for (auto const& currAny : anys) {
				src->eSet( attr, currAny );
			}
		}
	}

	/* 2)  Recursively traverse references, deep copying all containments.
	 */
	const auto& ereferences = cls->getEAllReferences();
	for ( size_t i = 0; i < ereferences.size(); i++ ) {
		EReference_ptr eref = ereferences[ i ];
		if ( ! eref->isContainment() || eref->isTransient() || !  src->eIsSet( eref ) )
			continue;

		mapping::any src_refs = src->eGet( eref );
		if ( eref->getUpperBound() != 1 ) {
			mapping::any dst_refs = dst->eGet( eref );
			const auto& srcs = *mapping::any::any_cast<EList_ptr>( src_refs );
			auto dsts = mapping::any::any_cast<EList_ptr>( dst_refs );
			assert( dsts->size() == 0 );
			DEBUG_MSG(cout, eref->basicgetEContainingClass()->getName()
				<< "::" << eref->getName() << ": " << srcs.size() << " objects" );
			for ( size_t j = 0; j < srcs.size(); j++ ) {
				auto child = mapping::any::any_cast<EObject_ptr>( srcs[ j ] );
				dsts->push_back( copy( child ) );
			}
#if 0
			if ( eref->getName() == "cpus" ) {
				::ecorecpp::serializer::serializer( std::cout,
					serializer::serializer::XmiIndentMode::Indentation ).serialize( dst );
				DEBUG_MSG(cout, eref->getName()  << "<<<<<<<<<<<<<<<<<<<< "
						<< eref->getName() << " of " << dst->eClass()->getName() );
			}
#endif
		} else if ( auto child = mapping::any::any_cast<EObject_ptr>( src_refs ) )
			dst->eSet( eref, copy( child ) );
	}

	return dst;
}

/**  Migrate all non-containment references of object 'src' to corresponding
 *object 'dst), re-targeting them to cloned object instances.
 *\sa m_objectsMap
 */
	void Copier::copy_references( ::ecore::EObject_ptr src, ::ecore::EObject_ptr dst ) {
	const auto& ereferences = src->eClass()->getEAllReferences();
	for ( size_t i = 0; i < ereferences.size(); i++ ) {
		EReference_ptr eref = ereferences[ i ];
		if ( eref->isContainment() || eref->isTransient() || ! src->eIsSet( eref ) )
			continue;

		mapping::any src_refs = src->eGet( eref );
		if ( eref->getUpperBound() != 1 ) {
			mapping::any dst_refs = dst->eGet( eref );
			const auto& srcs = *mapping::any::any_cast<EList_ptr>( src_refs );
			auto dsts = mapping::any::any_cast<EList_ptr>( dst_refs );
			DEBUG_MSG(cout, eref->basicgetEContainingClass()->getName()
					  << "::" << eref->getName() << ": " << srcs.size() << " refs" );					  
			//assert( dsts->size() == 0 );
			for ( size_t j = 0; j < srcs.size(); j++ ) {
				auto refObj = mapping::any::any_cast<EObject_ptr>( srcs[ j ] );
				/* This is false in case of a reference into another resource or
				 * outside the subject given to the Copier to be cloned.	*/
				const bool isKnownRef = m_objectsMap.count( refObj );
				//DEBUG_MSG( cout, "ref #" <<j <<" " <<refObj << ' ' <<isKnownRef <<_keepExternalRefs );
				if ( isKnownRef || _keepExternalRefs ) {
					if ( isKnownRef )
						refObj = m_objectsMap.at( refObj );
					dsts->push_back( refObj );
				}
			}
		} else if ( auto refObj = mapping::any::any_cast<EObject_ptr>( src_refs ) ) {
			const bool isKnownRef = m_objectsMap.count( refObj );
			//DEBUG_MSG( cout, "ref " <<refObj <<' ' <<isKnownRef <<_keepExternalRefs );
			if ( isKnownRef || _keepExternalRefs ) {
				if ( isKnownRef )
					refObj = m_objectsMap.at( refObj );
				dst->eSet( eref, refObj );
			}
		}
	}
}
	
} // util
} // ecorecpp
