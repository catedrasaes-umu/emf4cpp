// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EGenericTypeImpl.cpp
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

/*PROTECTED REGION ID(EGenericTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EGenericType::_initialize()
{
    // Supertypes

    // References
    if (m_eUpperBound)
    {
        m_eUpperBound->_initialize();
    }
    for (size_t i = 0; i < m_eTypeArguments->size(); i++)
    {
        (*m_eTypeArguments)[i]->_initialize();
    }
    if (m_eLowerBound)
    {
        m_eLowerBound->_initialize();
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
        if (m_eUpperBound)
            _any = m_eUpperBound->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        _any = m_eTypeArguments->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        if (m_eLowerBound)
            _any = m_eLowerBound->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        if (m_eTypeParameter)
            _any = m_eTypeParameter->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        if (m_eClassifier)
            _any = m_eClassifier->as< ::ecore::EObject >();
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
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EGenericType >(_t0);*/
        ::ecore::EGenericType::setEUpperBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EGenericType::getETypeArguments().clear();
        ::ecore::EGenericType::getETypeArguments().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EGenericType >(_t0);*/
        ::ecore::EGenericType::setELowerBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::ETypeParameter_ptr _t1 =
                dynamic_cast< ::ecore::ETypeParameter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::ETypeParameter >(_t0);*/
        ::ecore::EGenericType::setETypeParameter(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClassifier >(_t0);*/
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
        return (bool) m_eUpperBound;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
        return m_eTypeArguments && m_eTypeArguments->size();
    case ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE:
        return (bool) m_eRawType;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
        return (bool) m_eLowerBound;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
        return (bool) m_eTypeParameter;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
        return (bool) m_eClassifier;

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
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEGenericType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EGenericType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EGenericType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

