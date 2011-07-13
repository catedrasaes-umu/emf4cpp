// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObjectImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "EObject.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EObjectImpl.cpp) ENABLED START*/

void EObject::_setEContainer(::ecore::EObject_ptr _eContainer,
        ::ecore::EStructuralFeature_ptr _eContainingFeature)
{
    m_eContainer = _eContainer;
    m_eContainingFeature = _eContainingFeature;
}

#ifdef ECORECPP_NOTIFICATION_API

#include <ecorecpp/notify.hpp>

// Notification API
std::vector< ::ecorecpp::notify::Adapter_ptr >& EObject::eAdapters()
{
    return m_eAdapters;
}

void EObject::eNotify( ::ecorecpp::notify::Notification_ptr _notification)
{
    for(size_t i = 0; i < m_eAdapters.size(); i++)
    m_eAdapters[i]->notifyChanged(_notification);
}

bool EObject::eNotificationRequired()
{
    return m_eDeliver && !m_eAdapters.empty();
}

void EObject::notifyChanged( ::ecorecpp::notify::Notification_ptr _notification)
{
    // TODO: _notifyChanged
}

#endif
/*PROTECTED REGION END*/

void EObject::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(EObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EClass_ptr EObject::eClass()
{
    /*PROTECTED REGION ID(EObjectImpl_eClass) ENABLED START*/

    return _eClass();

    /*PROTECTED REGION END*/
}

::ecore::EBoolean EObject::eIsProxy()
{
    /*PROTECTED REGION ID(EObjectImpl_eIsProxy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eIsProxy";
    /*PROTECTED REGION END*/
}

::ecore::EResource EObject::eResource()
{
    /*PROTECTED REGION ID(EObjectImpl_eResource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eResource";
    /*PROTECTED REGION END*/
}

::ecore::EObject_ptr EObject::eContainer()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainer) ENABLED START*/
    return m_eContainer;
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EObject::eContainingFeature()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainingFeature) ENABLED START*/

    return m_eContainingFeature;

    /*PROTECTED REGION END*/
}

::ecore::EReference_ptr EObject::eContainmentFeature()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainmentFeature) ENABLED START*/

    return m_eContainingFeature->as< EReference > ();

    /*PROTECTED REGION END*/
}

std::list< ::ecore::EObject_ptr > EObject::eContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eContents) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eContents";
    /*PROTECTED REGION END*/
}

int EObject::eAllContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eAllContents) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eAllContents";
    /*PROTECTED REGION END*/
}

std::list< ::ecore::EObject_ptr > EObject::eCrossReferences()
{
    /*PROTECTED REGION ID(EObjectImpl_eCrossReferences) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eCrossReferences";
    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eGet(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eGet_0) ENABLED START*/

    return eGet(_feature->getFeatureID(), false);

    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eGet(::ecore::EStructuralFeature_ptr _feature,
        ::ecore::EBoolean _resolve)
{
    /*PROTECTED REGION ID(EObjectImpl_eGet_1) ENABLED START*/

    return eGet(_feature->getFeatureID(), _resolve);

    /*PROTECTED REGION END*/
}

void EObject::eSet(::ecore::EStructuralFeature_ptr _feature,
        ::ecore::EJavaObject const& _newValue)
{
    /*PROTECTED REGION ID(EObjectImpl_eSet) ENABLED START*/
    eSet(_feature->getFeatureID(), _newValue);
    /*PROTECTED REGION END*/
}

::ecore::EBoolean EObject::eIsSet(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eIsSet) ENABLED START*/
    return eIsSet(_feature->getFeatureID());
    /*PROTECTED REGION END*/
}

void EObject::eUnset(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eUnset) ENABLED START*/
    return eUnset(_feature->getFeatureID());
    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eInvoke(::ecore::EOperation_ptr _operation,
        std::list< ::ecorecpp::mapping::any > const& _arguments)
{
    /*PROTECTED REGION ID(EObjectImpl_eInvoke) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eInvoke";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EObject::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {

    }
    throw "Error";
}

void EObject::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EBoolean EObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

void EObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EObject::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEObject();
    return _eclass;
}

