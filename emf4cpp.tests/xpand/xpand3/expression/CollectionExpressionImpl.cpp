// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/CollectionExpressionImpl.cpp
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

#include "CollectionExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/FeatureCall.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CollectionExpressionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

void CollectionExpression::_initialize()
{
    // Supertypes
    ::xpand3::expression::FeatureCall::_initialize();

    // References
    if (m_closure)
    {
        m_closure->_initialize();
    }
    if (m_eleName)
    {
        m_eleName->_initialize();
    }

    /*PROTECTED REGION ID(CollectionExpressionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CollectionExpression::eGet(::ecore::EInt _featureID,
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
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
        if (m_target)
            _any = m_target->as< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
        if (m_name)
            _any = m_name->as< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
        if (m_closure)
            _any = m_closure->as< ::ecore::EObject >();
    }
        return _any;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
        if (m_eleName)
            _any = m_eleName->as< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void CollectionExpression::eSet(::ecore::EInt _featureID,
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
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::expression::AbstractExpression >(_t0);*/
        ::xpand3::expression::FeatureCall::setTarget(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::Identifier >(_t0);*/
        ::xpand3::expression::FeatureCall::setName(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::expression::AbstractExpression_ptr _t1 =
                dynamic_cast< ::xpand3::expression::AbstractExpression* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::expression::AbstractExpression >(_t0);*/
        ::xpand3::expression::CollectionExpression::setClosure(_t1);
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::xpand3::Identifier_ptr _t1 =
                dynamic_cast< ::xpand3::Identifier* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::xpand3::Identifier >(_t0);*/
        ::xpand3::expression::CollectionExpression::setEleName(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CollectionExpression::eIsSet(::ecore::EInt _featureID)
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
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
        return (bool) m_target;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
        return (bool) m_name;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
        return (bool) m_closure;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
        return (bool) m_eleName;

    }
    throw "Error";
}

void CollectionExpression::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CollectionExpression::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getCollectionExpression();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CollectionExpression::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CollectionExpression::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE:
    {
    }
        return;
    case ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

