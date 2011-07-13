// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EGenericTypeImpl.cpp
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

#include "EGenericType.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EGenericTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EGenericType::_initialize()
{
    // Supertypes

    // Rerefences
    if (m_eUpperBound)
    {
        m_eUpperBound->_initialize();
        m_eUpperBound->_setEContainer(
                this,
                ::ecore::EcorePackage::_instance()->getEGenericType__eUpperBound());
    }
    for (size_t i = 0; i < m_eTypeArguments->size(); i++)
    {
        (*m_eTypeArguments)[i]->_initialize();
        (*m_eTypeArguments)[i]->_setEContainer(
                this,
                ::ecore::EcorePackage::_instance()->getEGenericType__eTypeArguments());
    }
    if (m_eLowerBound)
    {
        m_eLowerBound->_initialize();
        m_eLowerBound->_setEContainer(
                this,
                ::ecore::EcorePackage::_instance()->getEGenericType__eLowerBound());
    }

    /*PROTECTED REGION ID(EGenericTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject EGenericType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
        _any = static_cast< ::ecore::EObject* > (m_eUpperBound);
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        _any = m_eTypeArguments->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        _any = static_cast< ::ecore::EObject* > (m_eLowerBound);
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        _any = static_cast< ::ecore::EObject* > (m_eTypeParameter);
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        _any = static_cast< ::ecore::EObject* > (m_eClassifier);
    }
        return _any;

    }
    throw "Error";
}

void EGenericType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType_ptr > (_t0);
        ::ecore::EGenericType::setEUpperBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EGenericType::getETypeArguments().clear();
        ::ecore::EGenericType::getETypeArguments().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType_ptr > (_t0);
        ::ecore::EGenericType::setELowerBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::ETypeParameter_ptr _t1 =
                dynamic_cast< ::ecore::ETypeParameter_ptr > (_t0);
        ::ecore::EGenericType::setETypeParameter(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier_ptr > (_t0);
        ::ecore::EGenericType::setEClassifier(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EGenericType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
        return m_eUpperBound;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
        return m_eTypeArguments && m_eTypeArguments->size();
    case ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE:
        return m_eRawType;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
        return m_eLowerBound;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
        return m_eTypeParameter;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
        return m_eClassifier;

    }
    throw "Error";
}

void EGenericType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EGenericType::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEGenericType();
    return _eclass;
}

