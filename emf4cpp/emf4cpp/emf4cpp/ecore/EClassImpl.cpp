// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassImpl.cpp
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

#include "EClass.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EClassImpl.cpp) ENABLED START*/
#include <iostream>

void EClass::_init_collections()
{
    // Derived references

    /**
     * Nota: Temporal, ya que los métodos initialize desaparecerán
     */

    // eAttributes and eRefereces
    m_eAttributes->clear();
    m_eReferences->clear();
    m_eAllAttributes->clear();
    m_eAllReferences->clear();
    m_eAllStructuralFeatures->clear();
    m_eAllStructuralFeaturesMap.clear();
    for (size_t i = 0; i < m_eStructuralFeatures->size(); i++)
    {
        ::ecore::EStructuralFeature_ptr _esf = (*m_eStructuralFeatures)[i];
        ::ecore::EAttribute_ptr _at =
                ::ecore::instanceOf< ::ecore::EAttribute >(_esf);
        ::ecore::EReference_ptr _ref =
                ::ecore::instanceOf< ::ecore::EReference >(_esf);

        if (_at)
        {
            m_eAttributes->push_back(_at);
            m_eAllAttributes->push_back(_at);
        }
        else if (_ref)
        {
            m_eReferences->push_back(_ref);
            m_eAllReferences->push_back(_ref);
        }

        m_eAllStructuralFeatures->push_back(_esf);
        m_eAllStructuralFeaturesMap[_esf->getName()] = _esf;
    }

    // eAllSuperTypes
    m_eAllSuperTypes->clear();
    m_eAllSuperTypes->insert_all(*m_eSuperTypes);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList < ::ecore::EClass > &_s
                = _st->getESuperTypes();

        // TODO: check duplicates
        m_eAllSuperTypes->insert_all(_s);
    }

    // eAllAttributes, eAllReferences and eAllStructuralFeatures
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature > const& _s =
                _st->getEStructuralFeatures();

        for (size_t j = 0; j < _s.size(); j++)
        {
            ::ecore::EAttribute_ptr _at = ::ecore::instanceOf<
                    ::ecore::EAttribute >(_s[j]);
            ::ecore::EReference_ptr _ref = ::ecore::instanceOf<
                    ::ecore::EReference >(_s[j]);

            if (_at)
                m_eAllAttributes->push_back(_at);
            else if (_ref)
                m_eAllReferences->push_back(_ref);

            m_eAllStructuralFeatures->push_back(_s[j]);
            m_eAllStructuralFeaturesMap[_s[j]->getName()] = _s[j];
        }
    }

    // eAllContainments
    m_eAllContainments->clear();
    for (size_t i = 0; i < m_eAllReferences->size(); i++)
    {
        ::ecore::EReference_ptr _ref = (*m_eAllReferences)[i];

        if (_ref->isContainment())
            m_eAllContainments->push_back(_ref);
    }

    // eAllOperations
    m_eAllOperations->clear();
    for (size_t i = 0; i < m_eOperations->size(); i++)
        m_eAllOperations->push_back((*m_eOperations)[i]);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EOperation > const& _s =
                _st->getEOperations();

        for (size_t j = 0; j < _s.size(); j++)
            m_eAllOperations->push_back(_s[j]);
    }

    // eAllGenericSuperTypes
    m_eAllGenericSuperTypes->clear();
    for (size_t i = 0; i < m_eGenericSuperTypes->size(); i++)
        m_eAllGenericSuperTypes->push_back((*m_eGenericSuperTypes)[i]);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EGenericType > const& _s =
                _st->getEGenericSuperTypes();

        for (size_t j = 0; j < _s.size(); j++)
            m_eAllGenericSuperTypes->push_back(_s[j]);
    }
}
/*PROTECTED REGION END*/

void EClass::_initialize()
{
    // Supertypes
    ::ecore::EClassifier::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_eOperations->size(); i++)
    {
        (*m_eOperations)[i]->_initialize();
        (*m_eOperations)[i]->_setEContainer(this,
                ::ecore::EcorePackage::_instance()->getEClass__eOperations());
    }
    for (size_t i = 0; i < m_eStructuralFeatures->size(); i++)
    {
        (*m_eStructuralFeatures)[i]->_initialize();
        (*m_eStructuralFeatures)[i]->_setEContainer(
                this,
                ::ecore::EcorePackage::_instance()->getEClass__eStructuralFeatures());
    }
    for (size_t i = 0; i < m_eGenericSuperTypes->size(); i++)
    {
        (*m_eGenericSuperTypes)[i]->_initialize();
        (*m_eGenericSuperTypes)[i]->_setEContainer(
                this,
                ::ecore::EcorePackage::_instance()->getEClass__eGenericSuperTypes());
    }

    /*PROTECTED REGION ID(EClassImpl__initialize) ENABLED START*/
    _init_collections();
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean EClass::isSuperTypeOf(::ecore::EClass_ptr _someClass)
{
    /*PROTECTED REGION ID(EClassImpl_isSuperTypeOf) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::isSuperTypeOf";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureCount()
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureCount) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getFeatureCount";
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        ::ecore::EInt _featureID)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_0) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getEStructuralFeature";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureID(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureID) ENABLED START*/
    return _feature->getFeatureID();
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        ::ecore::EString const& _featureName)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_1) ENABLED START*/

    if (m_eAllStructuralFeaturesMap.size() == 0)
        _init_collections();

    EStructuralFeatureMap::const_iterator it;
    if ((it = m_eAllStructuralFeaturesMap.find(_featureName))
            != m_eAllStructuralFeaturesMap.end())
        return it->second;

    throw "EClassImpl: EStructuralFeature not found";

    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getOperationCount()
{
    /*PROTECTED REGION ID(EClassImpl_getOperationCount) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOperationCount";
    /*PROTECTED REGION END*/
}

::ecore::EOperation_ptr EClass::getEOperation(::ecore::EInt _operationID)
{
    /*PROTECTED REGION ID(EClassImpl_getEOperation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getEOperation";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getOperationID(::ecore::EOperation_ptr _operation)
{
    /*PROTECTED REGION ID(EClassImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EOperation_ptr EClass::getOverride(::ecore::EOperation_ptr _operation)
{
    /*PROTECTED REGION ID(EClassImpl_getOverride) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOverride";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EClass::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::toAny(_any,
                m_abstract);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::toAny(_any,
                m_interface);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
        _any = m_eSuperTypes->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        _any = m_eOperations->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        _any = m_eStructuralFeatures->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
        _any = m_eGenericSuperTypes->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void EClass::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::fromAny(
                _newValue, m_abstract);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EBoolean >::fromAny(
                _newValue, m_interface);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EClass::getESuperTypes().clear();
        ::ecore::EClass::getESuperTypes().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EClass::getEOperations().clear();
        ::ecore::EClass::getEOperations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EClass::getEStructuralFeatures().clear();
        ::ecore::EClass::getEStructuralFeatures().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EClass::getEGenericSuperTypes().clear();
        ::ecore::EClass::getEGenericSuperTypes().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EClass::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
        return ::ecorecpp::mapping::set_traits< ::ecore::EBoolean >::is_set(
                m_abstract);
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EBoolean >::is_set(
                m_interface);
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
        return m_eSuperTypes && m_eSuperTypes->size();
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
        return m_eOperations && m_eOperations->size();
    case ::ecore::EcorePackage::ECLASS__EALLATTRIBUTES:
        return m_eAllAttributes && m_eAllAttributes->size();
    case ::ecore::EcorePackage::ECLASS__EALLREFERENCES:
        return m_eAllReferences && m_eAllReferences->size();
    case ::ecore::EcorePackage::ECLASS__EREFERENCES:
        return m_eReferences && m_eReferences->size();
    case ::ecore::EcorePackage::ECLASS__EATTRIBUTES:
        return m_eAttributes && m_eAttributes->size();
    case ::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS:
        return m_eAllContainments && m_eAllContainments->size();
    case ::ecore::EcorePackage::ECLASS__EALLOPERATIONS:
        return m_eAllOperations && m_eAllOperations->size();
    case ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES:
        return m_eAllStructuralFeatures && m_eAllStructuralFeatures->size();
    case ::ecore::EcorePackage::ECLASS__EALLSUPERTYPES:
        return m_eAllSuperTypes && m_eAllSuperTypes->size();
    case ::ecore::EcorePackage::ECLASS__EIDATTRIBUTE:
        return m_eIDAttribute;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
        return m_eStructuralFeatures && m_eStructuralFeatures->size();
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
        return m_eGenericSuperTypes && m_eGenericSuperTypes->size();
    case ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES:
        return m_eAllGenericSuperTypes && m_eAllGenericSuperTypes->size();

    }
    throw "Error";
}

void EClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EClass::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEClass();
    return _eclass;
}

