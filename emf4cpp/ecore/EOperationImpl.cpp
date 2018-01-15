// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperationImpl.cpp
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

#include "EOperation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EOperationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EOperation::_initialize()
{
    // Supertypes
    ::ecore::ETypedElement::_initialize();

    // References
    for (size_t i = 0; i < m_eTypeParameters->size(); i++)
    {
        (*m_eTypeParameters)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eParameters->size(); i++)
    {
        (*m_eParameters)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eGenericExceptions->size(); i++)
    {
        (*m_eGenericExceptions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EOperationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EInt EOperation::getOperationID()
{
    /*PROTECTED REGION ID(EOperationImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean EOperation::isOverrideOf(
        ::ecore::EOperation_ptr _someOperation)
{
    /*PROTECTED REGION ID(EOperationImpl_isOverrideOf) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::isOverrideOf";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EOperation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_ordered);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_unique);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_lowerBound);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_upperBound);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        if (m_eType)
            _any = m_eType->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        if (m_eGenericType)
            _any = m_eGenericType->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        if (m_eContainingClass)
            _any = m_eContainingClass->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        _any = m_eTypeParameters->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        _any = m_eParameters->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        _any = m_eExceptions->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        _any = m_eGenericExceptions->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void EOperation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EModelElement::getEAnnotations().clear();
        ::ecore::EModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::ENamedElement::setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setOrdered(_t0);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setUnique(_t0);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setLowerBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setUpperBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClassifier >(_t0);*/
        ::ecore::ETypedElement::setEType(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EGenericType >(_t0);*/
        ::ecore::ETypedElement::setEGenericType(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClass >(_t0);*/
        ::ecore::EOperation::setEContainingClass(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getETypeParameters().clear();
        ::ecore::EOperation::getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEParameters().clear();
        ::ecore::EOperation::getEParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEExceptions().clear();
        ::ecore::EOperation::getEExceptions().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEGenericExceptions().clear();
        ::ecore::EOperation::getEGenericExceptions().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EOperation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
        return m_ordered != true;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
        return m_unique != true;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_lowerBound);
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
        return m_upperBound != 1;
    case ::ecore::EcorePackage::ETYPEDELEMENT__MANY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_many);
    case ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_required);
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
        return (bool) m_eType;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
        return (bool) m_eGenericType;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
        return (bool) m_eContainingClass;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
        return m_eTypeParameters && m_eTypeParameters->size();
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
        return m_eParameters && m_eParameters->size();
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
        return m_eExceptions && m_eExceptions->size();
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
        return m_eGenericExceptions && m_eGenericExceptions->size();

    }
    throw "Error";
}

void EOperation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EOperation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEOperation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        basicsetEContainingClass(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EParameter_ptr _t1 =
                dynamic_cast< ::ecore::EParameter* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        if (basicgetEContainingClass() == _t1)
            basicsetEContainingClass(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EParameter_ptr _t1 =
                dynamic_cast< ::ecore::EParameter* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

