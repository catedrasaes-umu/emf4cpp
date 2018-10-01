// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualModel.cpp
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

#include "ConceptualModel.hpp"
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/conceptual/ConceptualPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConceptualModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::conceptual;

// Default constructor
ConceptualModel::ConceptualModel()
{

    m_conceptualElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::conceptual::AbstractConceptualElement_ptr, -1, true,
                    false >(this,
                    ::kdm::conceptual::ConceptualPackage::_instance()->getConceptualModel__conceptualElement()));

    /*PROTECTED REGION ID(ConceptualModelImpl__ConceptualModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ConceptualModel::~ConceptualModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList<
        ::kdm::conceptual::AbstractConceptualElement_ptr >& ConceptualModel::getConceptualElement() const
{
    return *m_conceptualElement;
}

::ecorecpp::mapping::EList< ::kdm::conceptual::AbstractConceptualElement_ptr >& ConceptualModel::getConceptualElement()
{
    return *m_conceptualElement;
}

