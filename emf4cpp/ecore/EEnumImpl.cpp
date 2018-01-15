// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumImpl.cpp
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

#include "EEnum.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EEnumImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EEnum::_initialize()
{
    // Supertypes
    ::ecore::EDataType::_initialize();

    // References
    for (size_t i = 0; i < m_eLiterals->size(); i++)
    {
        (*m_eLiterals)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EEnumImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(::ecore::EString const& _name)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteral_1) ENABLED START*/
    for (const auto& literal : *m_eLiterals)
    {
        if (literal->getName() == _name)
            return literal;
    }

    throw "InvalidNameLiteral";
    /*PROTECTED REGION END*/
}

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(::ecore::EInt _value)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteral_0) ENABLED START*/
    for (const auto& literal : *m_eLiterals)
    {
        if (literal->getValue() == _value)
            return literal;
    }

    throw "InvalidValue";
    /*PROTECTED REGION END*/
}

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralByLiteral(
        ::ecore::EString const& _literal)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteralByLiteral) ENABLED START*/
    for (const auto& literal : *m_eLiterals)
    {
        if (literal->getLiteral() == _literal)
            return literal;
    }

    throw std::logic_error(std::string("InvalidLiteral: ") + _literal);
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EEnum::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_instanceClassName);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_instanceTypeName);
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        if (m_ePackage)
            _any = m_ePackage->as< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        _any = m_eTypeParameters->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_serializable);
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        _any = m_eLiterals->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void EEnum::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EClassifier::setInstanceClassName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EClassifier::setInstanceTypeName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EPackage >(_t0);*/
        ::ecore::EClassifier::setEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EClassifier::getETypeParameters().clear();
        ::ecore::EClassifier::getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EDataType::setSerializable(_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EEnum::getELiterals().clear();
        ::ecore::EEnum::getELiterals().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EEnum::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_instanceClassName);
    case ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(m_defaultValue);
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_instanceTypeName);
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
        return (bool) m_ePackage;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
        return m_eTypeParameters && m_eTypeParameters->size();
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
        return m_serializable != true;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
        return m_eLiterals && m_eLiterals->size();

    }
    throw "Error";
}

void EEnum::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EEnum::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEEnum();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EEnum::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        basicsetEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EEnumLiteral_ptr _t1 =
                dynamic_cast< ::ecore::EEnumLiteral* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EEnumLiteral_ptr, -1, true, true >&) ::ecore::EEnum::getELiterals();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EEnum::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        if (basicgetEPackage() == _t1)
            basicsetEPackage(nullptr);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EEnumLiteral_ptr _t1 =
                dynamic_cast< ::ecore::EEnumLiteral* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EEnumLiteral_ptr, -1, true, true >&) ::ecore::EEnum::getELiterals();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

