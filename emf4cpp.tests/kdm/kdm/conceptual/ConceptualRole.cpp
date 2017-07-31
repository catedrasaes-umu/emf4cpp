// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualRole.cpp
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

#include "ConceptualRole.hpp"
#include <kdm/conceptual/AbstractConceptualElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/conceptual/ConceptualPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConceptualRole.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::conceptual;

// Default constructor
ConceptualRole::ConceptualRole() :
        m_conceptualElement(0)
{

    /*PROTECTED REGION ID(ConceptualRoleImpl__ConceptualRoleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ConceptualRole::~ConceptualRole()
{
}

// Attributes

// References

::kdm::conceptual::AbstractConceptualElement_ptr ConceptualRole::getConceptualElement() const
{
    return m_conceptualElement;
}

void ConceptualRole::setConceptualElement(
        ::kdm::conceptual::AbstractConceptualElement_ptr _conceptualElement)
{
    ::kdm::conceptual::AbstractConceptualElement_ptr _old_conceptualElement =
            m_conceptualElement;

    m_conceptualElement = _conceptualElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::conceptual::ConceptualPackage::_instance()->getConceptualRole__conceptualElement(),
                _old_conceptualElement,
                m_conceptualElement
        );
        eNotify(&notification);
    }
#endif

}

