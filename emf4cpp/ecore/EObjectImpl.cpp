// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObjectImpl.cpp
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
#include <ecorecpp/resource/Resource.hpp>

/*PROTECTED REGION ID(EObjectImpl.cpp) ENABLED START*/

using namespace ::ecore;

void EObject::_setEContainer(::ecore::EObject_ptr _eContainer,
        ::ecore::EStructuralFeature_ptr _eContainingFeature)
{
	if (m_eContainer == _eContainer
		&& m_eContainingFeature == _eContainingFeature)
		return;

	if (m_eResource) {
		auto list = m_eResource->getContents();
		list->remove(_this());

		m_eResource = nullptr;
	}

    m_eContainer = _eContainer;
    m_eContainingFeature = _eContainingFeature;
}

void EObject::_setEResource(::ecorecpp::resource::Resource* res)
{
    if (m_eResource == res)
        return;

    if (m_eContainer)
    {
        if (m_eContainingFeature && m_eContainingFeature->getUpperBound() != 1)
        {
            // Gets the collection and remove the element
            ::ecore::EJavaObject any = m_eContainer->eGet(m_eContainingFeature);
            ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type list =
                    ::ecorecpp::mapping::any::any_cast
                            < ::ecorecpp::mapping::EList < ::ecore::EObject_ptr
                            > ::ptr_type > (any);

            list->remove(_this());
        }
        else
        {
            m_eContainer->eUnset(m_eContainingFeature);
        }

        m_eContainer = nullptr;
        m_eContainingFeature = nullptr;
    }

    m_eResource = res;
}

::ecorecpp::resource::Resource* EObject::_getDirectResource()
{
    return m_eResource;
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

using namespace ::ecore;

void EObject::_initialize()
{
    // Supertypes

    // References

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
    /*PROTECTED REGION ID(EObjectImpl_eResource) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (m_eResource || !eContainer())
        return m_eResource;

    EObject_ptr current = eContainer();
    size_t count = 0;
    while ( current && current->eContainer()
			&& current.get() != this // prevent cyclic containments
			&& count < 10000000) // last resort
    {
        count++;
        current = current->eContainer();
    }

    return current->_getDirectResource();
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

    return m_eContainingFeature->as< EReference >();

    /*PROTECTED REGION END*/
}

std::shared_ptr< ::ecorecpp::mapping::EList< ::ecore::EObject_ptr > > EObject::eContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eContents) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type retList =
            std::make_shared<
                    ::ecorecpp::mapping::EListImpl< ::ecore::EObject_ptr > >();

    ::ecore::EClass_ptr eclass = eClass();
    for (const auto& ref : eclass->getEAllReferences())
    {
        ::ecorecpp::mapping::any any = eGet(ref);

        if (!ref->isTransient() && ref->isContainment() && eIsSet(ref))
        {
            if (ref->getUpperBound() != 1)
            {
                auto children = ecorecpp::mapping::any::any_cast
                        < ::ecorecpp::mapping::EList < ::ecore::EObject_ptr
                        > ::ptr_type > (any);

                retList->insert_all(*children);
            }
            else
            {
                EObject_ptr child = ecorecpp::mapping::any::any_cast
                        < EObject_ptr > (any);
                retList->push_back(child);
            }
        }
    }

    return retList;
    /*PROTECTED REGION END*/
}

::ecorecpp::util::TreeIterator< ::ecore::EObject_ptr > EObject::eAllContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eAllContents) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    return ::ecorecpp::util::TreeIterator < ::ecore::EObject_ptr > (_this());

    /*PROTECTED REGION END*/
}

std::shared_ptr< ::ecorecpp::mapping::EList< ::ecore::EObject_ptr > > EObject::eCrossReferences()
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
        std::shared_ptr< ::ecorecpp::mapping::EList< ::ecorecpp::mapping::any > > const& _arguments)
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
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EObject::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EObject::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

