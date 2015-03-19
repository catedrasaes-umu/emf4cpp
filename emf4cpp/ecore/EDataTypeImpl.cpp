// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EDataTypeImpl.cpp
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

#include "EDataType.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EDataTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EDataType::_initialize()
{
    // Supertypes
    ::ecore::EClassifier::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(EDataTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject EDataType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any, m_name);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_instanceClassName);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_instanceTypeName);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        _any = static_cast< ::ecore::EObject* > (m_ePackage);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        _any = m_eTypeParameters->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::toAny(_any,
                m_serializable);
    }
        return _any;

    }
    throw "Error";
}

void EDataType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EModelElement::getEAnnotations().clear();
        ::ecore::EModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_name);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_instanceClassName);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_instanceTypeName);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EPackage_ptr _t1 = dynamic_cast< ::ecore::EPackage_ptr > (_t0);
        ::ecore::EClassifier::setEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EClassifier::getETypeParameters().clear();
        ::ecore::EClassifier::getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::fromAny(
                _newValue, m_serializable);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EDataType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_name);
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_instanceClassName);
    case ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EJavaObject >::is_set(
                m_defaultValue);
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_instanceTypeName);
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
        return m_ePackage;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
        return m_eTypeParameters && m_eTypeParameters->size();
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
        return m_serializable != true;

    }
    throw "Error";
}

void EDataType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EDataType::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEDataType();
    return _eclass;
}

