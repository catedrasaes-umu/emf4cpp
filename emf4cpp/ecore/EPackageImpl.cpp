// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackageImpl.cpp
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

#include "EPackage.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EPackageImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EPackage::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_eClassifiers->size(); i++)
    {
        (*m_eClassifiers)[i]->_initialize();
        (*m_eClassifiers)[i]->_setEContainer(this,
                ::ecore::EcorePackage::_instance()->getEPackage__eClassifiers());
    }
    for (size_t i = 0; i < m_eSubpackages->size(); i++)
    {
        (*m_eSubpackages)[i]->_initialize();
        (*m_eSubpackages)[i]->_setEContainer(this,
                ::ecore::EcorePackage::_instance()->getEPackage__eSubpackages());
    }

    /*PROTECTED REGION ID(EPackageImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EClassifier_ptr EPackage::getEClassifier(::ecore::EString const& _name)
{
    /*PROTECTED REGION ID(EPackageImpl_getEClassifier) ENABLED START*/
    if (m_eClassifiersMap.size() == 0)
    {
        // Fill eClassifiers map
        for (size_t i = 0; i < m_eClassifiers->size(); i++)
        {
            ::ecore::EClassifier_ptr c = (*m_eClassifiers)[i];
            m_eClassifiersMap[c->getName()] = c;
        }
    }

    EClassifierMapType::const_iterator it;
    if ((it = m_eClassifiersMap.find(_name)) != m_eClassifiersMap.end())
        return it->second;

    throw "EPackage: EClassifier not found!";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EPackage::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_nsURI);
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_nsPrefix);
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        _any = static_cast< ::ecore::EObject* > (m_eFactoryInstance);
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        _any = m_eClassifiers->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        _any = m_eSubpackages->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        _any = static_cast< ::ecore::EObject* > (m_eSuperPackage);
    }
        return _any;

    }
    throw "Error";
}

void EPackage::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_nsURI);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_nsPrefix);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EFactory_ptr _t1 = dynamic_cast< ::ecore::EFactory_ptr > (_t0);
        ::ecore::EPackage::setEFactoryInstance(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EPackage::getEClassifiers().clear();
        ::ecore::EPackage::getEClassifiers().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::ecore::EPackage::getESubpackages().clear();
        ::ecore::EPackage::getESubpackages().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::ecore::EPackage_ptr _t1 = dynamic_cast< ::ecore::EPackage_ptr > (_t0);
        ::ecore::EPackage::setESuperPackage(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EPackage::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_name);
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_nsURI);
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_nsPrefix);
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
        return m_eFactoryInstance;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
        return m_eClassifiers && m_eClassifiers->size();
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
        return m_eSubpackages && m_eSubpackages->size();
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
        return m_eSuperPackage;

    }
    throw "Error";
}

void EPackage::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EPackage::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::ecore::EcorePackage_ptr > (::ecore::EcorePackage::_instance())->getEPackage();
    return _eclass;
}

