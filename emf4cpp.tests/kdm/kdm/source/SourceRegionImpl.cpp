// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRegionImpl.cpp
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

#include "SourceRegion.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/source/SourceFile.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SourceRegionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void SourceRegion::_initialize()
{
    // Supertypes
    ::kdm::core::Element::_initialize();

    // References

    /*PROTECTED REGION ID(SourceRegionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SourceRegion::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
        _any = static_cast< ::ecore::EObject* >(m_file);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, m_startLine);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, m_startPosition);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, m_endLine);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, m_endPosition);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_language);
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_path);
    }
        return _any;

    }
    throw "Error";
}

void SourceRegion::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::kdm::source::SourceFile_ptr _t1 =
                dynamic_cast< ::kdm::source::SourceFile_ptr >(_t0);
        ::kdm::source::SourceRegion::setFile(_t1);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, m_startLine);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, m_startPosition);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, m_endLine);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, m_endPosition);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_language);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_path);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SourceRegion::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
        return m_file;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(m_startLine);
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(m_startPosition);
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(m_endLine);
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(m_endPosition);
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_language);
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_path);

    }
    throw "Error";
}

void SourceRegion::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SourceRegion::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::source::SourcePackage_ptr >(::kdm::source::SourcePackage::_instance())->getSourceRegion();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SourceRegion::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SourceRegion::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

