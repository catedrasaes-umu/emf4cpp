// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/CreateExtensionImpl.cpp
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

#include "CreateExtension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/Extension.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CreateExtensionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

void CreateExtension::_initialize()
{
    // Supertypes
    ::xpand3::declaration::Extension::_initialize();

    // References

    /*PROTECTED REGION ID(CreateExtensionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CreateExtension::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_line);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_start);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt > ::toAny(_any, m_end);
    }
        return _any;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_fileName);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER:
    {
        _any = static_cast< ::ecore::EObject* >(m_owner);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS:
    {
        _any = m_params->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__ISPRIVATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_isPrivate);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD:
    {
        _any = static_cast< ::ecore::EObject* >(m_guard);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME:
    {
        _any = static_cast< ::ecore::EObject* >(m_name);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__CACHED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_cached);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY:
    {
        _any = static_cast< ::ecore::EObject* >(m_body);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_returnType);
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
        _any = static_cast< ::ecore::EObject* >(m_toBeCreated);
    }
        return _any;

    }
    throw "Error";
}

void CreateExtension::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_line);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_start);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_end);
    }
        return;
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_fileName);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::File_ptr _t1 = dynamic_cast< ::xpand3::File_ptr >(_t0);
        ::xpand3::declaration::AbstractDeclaration::setOwner(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::xpand3::declaration::AbstractDeclaration::getParams().clear();
        ::xpand3::declaration::AbstractDeclaration::getParams().insert_all(
                *_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__ISPRIVATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_isPrivate);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::declaration::AbstractDeclaration::setGuard(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr >(_t0);
        ::xpand3::declaration::AbstractNamedDeclaration::setName(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__CACHED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_cached);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression_ptr >(_t0);
        ::xpand3::declaration::Extension::setBody(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier_ptr >(_t0);
        ::xpand3::declaration::Extension::setReturnType(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::DeclaredParameter_ptr _t1 =
                dynamic_cast< ::xpand3::DeclaredParameter_ptr >(_t0);
        ::xpand3::declaration::CreateExtension::setToBeCreated(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CreateExtension::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_line);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_start);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt > ::is_set(m_end);
    case ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_fileName);
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER:
        return m_owner;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS:
        return m_params && m_params->size();
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__ISPRIVATE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_isPrivate);
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD:
        return m_guard;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME:
        return m_name;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__CACHED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_cached);
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY:
        return m_body;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE:
        return m_returnType;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
        return m_toBeCreated;

    }
    throw "Error";
}

void CreateExtension::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CreateExtension::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::declaration::DeclarationPackage_ptr >(::xpand3::declaration::DeclarationPackage::_instance())->getCreateExtension();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CreateExtension::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CreateExtension::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

