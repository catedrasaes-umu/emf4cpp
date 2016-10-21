// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/ModelImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include "Model.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Import.hpp>
#include <myDsl/Type.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::myDsl;

/*PROTECTED REGION ID(ModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Model::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }
    for (size_t i = 0; i < m_elements->size(); i++)
    {
        (*m_elements)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Model::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::MODEL__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::myDsl::MyDslPackage::MODEL__ELEMENTS:
    {
        _any = m_elements->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Model::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::MODEL__IMPORTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::myDsl::Model::getImports().clear();
        ::myDsl::Model::getImports().insert_all(*_t0);
    }
        return;
    case ::myDsl::MyDslPackage::MODEL__ELEMENTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::myDsl::Model::getElements().clear();
        ::myDsl::Model::getElements().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Model::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::MODEL__IMPORTS:
        return m_imports && m_imports->size();
    case ::myDsl::MyDslPackage::MODEL__ELEMENTS:
        return m_elements && m_elements->size();

    }
    throw "Error";
}

void Model::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Model::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::myDsl::MyDslPackage_ptr >(::myDsl::MyDslPackage::_instance())->getModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Model::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::MODEL__IMPORTS:
    {
    }
        return;
    case ::myDsl::MyDslPackage::MODEL__ELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Model::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::myDsl::MyDslPackage::MODEL__IMPORTS:
    {
    }
        return;
    case ::myDsl::MyDslPackage::MODEL__ELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

