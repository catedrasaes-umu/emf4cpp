// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/FileImpl.cpp
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

#include "File.hpp"
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/ImportStatement.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3;

/*PROTECTED REGION ID(FileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void File::_initialize()
{
    // Supertypes
    ::xpand3::SyntaxElement::_initialize();

    // References
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }
    for (size_t i = 0; i < m_declarations->size(); i++)
    {
        (*m_declarations)[i]->_initialize();
    }

    /*PROTECTED REGION ID(FileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject File::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
        _any = m_declarations->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void File::eSet(::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue)
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
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::xpand3::File::getImports().clear();
        ::xpand3::File::getImports().insert_all(*_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::xpand3::File::getDeclarations().clear();
        ::xpand3::File::getDeclarations().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean File::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
        return m_imports && m_imports->size();
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
        return m_declarations && m_declarations->size();

    }
    throw "Error";
}

void File::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr File::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::Xpand3Package_ptr >(::xpand3::Xpand3Package::_instance())->getFile();
    return _eclass;
}

