// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionPackageImpl.cpp
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

#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/ExpressionFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Identifier.hpp>

using namespace ::xpand3::expression;

ExpressionPackage::ExpressionPackage()
{

    // Feature definitions of AbstractExpression

    // Feature definitions of BooleanOperation

    // Feature definitions of Cast
    m_Cast__type = new ::ecore::EReference();
    m_Cast__target = new ::ecore::EReference();

    // Feature definitions of ChainExpression
    m_ChainExpression__first = new ::ecore::EReference();
    m_ChainExpression__next = new ::ecore::EReference();

    // Feature definitions of ConstructorCallExpression
    m_ConstructorCallExpression__type = new ::ecore::EReference();

    // Feature definitions of FeatureCall
    m_FeatureCall__target = new ::ecore::EReference();
    m_FeatureCall__name = new ::ecore::EReference();

    // Feature definitions of CollectionExpression
    m_CollectionExpression__closure = new ::ecore::EReference();
    m_CollectionExpression__eleName = new ::ecore::EReference();

    // Feature definitions of OperationCall
    m_OperationCall__params = new ::ecore::EReference();

    // Feature definitions of TypeSelectExpression
    m_TypeSelectExpression__typeLiteral = new ::ecore::EReference();

    // Feature definitions of GlobalVarExpression
    m_GlobalVarExpression__globalVarName = new ::ecore::EReference();

    // Feature definitions of IfExpression
    m_IfExpression__condition = new ::ecore::EReference();
    m_IfExpression__thenPart = new ::ecore::EReference();
    m_IfExpression__elsePart = new ::ecore::EReference();

    // Feature definitions of LetExpression
    m_LetExpression__varExpression = new ::ecore::EReference();
    m_LetExpression__targetExpression = new ::ecore::EReference();
    m_LetExpression__varName = new ::ecore::EReference();

    // Feature definitions of ListLiteral
    m_ListLiteral__elements = new ::ecore::EReference();

    // Feature definitions of Literal
    m_Literal__literalValue = new ::ecore::EReference();

    // Feature definitions of BooleanLiteral

    // Feature definitions of IntegerLiteral

    // Feature definitions of NullLiteral

    // Feature definitions of RealLiteral

    // Feature definitions of StringLiteral

    // Feature definitions of SwitchExpression
    m_SwitchExpression__switchExpr = new ::ecore::EReference();
    m_SwitchExpression__defaultExpr = new ::ecore::EReference();
    m_SwitchExpression__cases = new ::ecore::EReference();

    // Feature definitions of Case
    m_Case__condition = new ::ecore::EReference();
    m_Case__thenPart = new ::ecore::EReference();

    // Feature definitions of BinaryOperation
    m_BinaryOperation__left = new ::ecore::EReference();
    m_BinaryOperation__right = new ::ecore::EReference();
    m_BinaryOperation__operator = new ::ecore::EReference();

    // Feature definitions of UnaryOperation
    m_UnaryOperation__operator = new ::ecore::EReference();
    m_UnaryOperation__operand = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = ExpressionFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // AbstractExpression
    m_AbstractExpressionEClass = new ::ecore::EClass();
    m_AbstractExpressionEClass->setClassifierID(ABSTRACTEXPRESSION);
    m_AbstractExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_AbstractExpressionEClass);

    // BooleanOperation
    m_BooleanOperationEClass = new ::ecore::EClass();
    m_BooleanOperationEClass->setClassifierID(BOOLEANOPERATION);
    m_BooleanOperationEClass->setEPackage(this);
    getEClassifiers().push_back(m_BooleanOperationEClass);

    // Cast
    m_CastEClass = new ::ecore::EClass();
    m_CastEClass->setClassifierID(CAST);
    m_CastEClass->setEPackage(this);
    getEClassifiers().push_back(m_CastEClass);
    // m_Cast__type has already been allocated above
    m_Cast__type->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CAST__TYPE);
    m_CastEClass->getEStructuralFeatures().push_back(m_Cast__type);
    // m_Cast__target has already been allocated above
    m_Cast__target->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CAST__TARGET);
    m_CastEClass->getEStructuralFeatures().push_back(m_Cast__target);

    // ChainExpression
    m_ChainExpressionEClass = new ::ecore::EClass();
    m_ChainExpressionEClass->setClassifierID(CHAINEXPRESSION);
    m_ChainExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_ChainExpressionEClass);
    // m_ChainExpression__first has already been allocated above
    m_ChainExpression__first->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CHAINEXPRESSION__FIRST);
    m_ChainExpressionEClass->getEStructuralFeatures().push_back(
            m_ChainExpression__first);
    // m_ChainExpression__next has already been allocated above
    m_ChainExpression__next->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CHAINEXPRESSION__NEXT);
    m_ChainExpressionEClass->getEStructuralFeatures().push_back(
            m_ChainExpression__next);

    // ConstructorCallExpression
    m_ConstructorCallExpressionEClass = new ::ecore::EClass();
    m_ConstructorCallExpressionEClass->setClassifierID(
            CONSTRUCTORCALLEXPRESSION);
    m_ConstructorCallExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_ConstructorCallExpressionEClass);
    // m_ConstructorCallExpression__type has already been allocated above
    m_ConstructorCallExpression__type->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CONSTRUCTORCALLEXPRESSION__TYPE);
    m_ConstructorCallExpressionEClass->getEStructuralFeatures().push_back(
            m_ConstructorCallExpression__type);

    // FeatureCall
    m_FeatureCallEClass = new ::ecore::EClass();
    m_FeatureCallEClass->setClassifierID(FEATURECALL);
    m_FeatureCallEClass->setEPackage(this);
    getEClassifiers().push_back(m_FeatureCallEClass);
    // m_FeatureCall__target has already been allocated above
    m_FeatureCall__target->setFeatureID(
            ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET);
    m_FeatureCallEClass->getEStructuralFeatures().push_back(
            m_FeatureCall__target);
    // m_FeatureCall__name has already been allocated above
    m_FeatureCall__name->setFeatureID(
            ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME);
    m_FeatureCallEClass->getEStructuralFeatures().push_back(
            m_FeatureCall__name);

    // CollectionExpression
    m_CollectionExpressionEClass = new ::ecore::EClass();
    m_CollectionExpressionEClass->setClassifierID(COLLECTIONEXPRESSION);
    m_CollectionExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_CollectionExpressionEClass);
    // m_CollectionExpression__closure has already been allocated above
    m_CollectionExpression__closure->setFeatureID(
            ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE);
    m_CollectionExpressionEClass->getEStructuralFeatures().push_back(
            m_CollectionExpression__closure);
    // m_CollectionExpression__eleName has already been allocated above
    m_CollectionExpression__eleName->setFeatureID(
            ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME);
    m_CollectionExpressionEClass->getEStructuralFeatures().push_back(
            m_CollectionExpression__eleName);

    // OperationCall
    m_OperationCallEClass = new ::ecore::EClass();
    m_OperationCallEClass->setClassifierID(OPERATIONCALL);
    m_OperationCallEClass->setEPackage(this);
    getEClassifiers().push_back(m_OperationCallEClass);
    // m_OperationCall__params has already been allocated above
    m_OperationCall__params->setFeatureID(
            ::xpand3::expression::ExpressionPackage::OPERATIONCALL__PARAMS);
    m_OperationCallEClass->getEStructuralFeatures().push_back(
            m_OperationCall__params);

    // TypeSelectExpression
    m_TypeSelectExpressionEClass = new ::ecore::EClass();
    m_TypeSelectExpressionEClass->setClassifierID(TYPESELECTEXPRESSION);
    m_TypeSelectExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_TypeSelectExpressionEClass);
    // m_TypeSelectExpression__typeLiteral has already been allocated above
    m_TypeSelectExpression__typeLiteral->setFeatureID(
            ::xpand3::expression::ExpressionPackage::TYPESELECTEXPRESSION__TYPELITERAL);
    m_TypeSelectExpressionEClass->getEStructuralFeatures().push_back(
            m_TypeSelectExpression__typeLiteral);

    // GlobalVarExpression
    m_GlobalVarExpressionEClass = new ::ecore::EClass();
    m_GlobalVarExpressionEClass->setClassifierID(GLOBALVAREXPRESSION);
    m_GlobalVarExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_GlobalVarExpressionEClass);
    // m_GlobalVarExpression__globalVarName has already been allocated above
    m_GlobalVarExpression__globalVarName->setFeatureID(
            ::xpand3::expression::ExpressionPackage::GLOBALVAREXPRESSION__GLOBALVARNAME);
    m_GlobalVarExpressionEClass->getEStructuralFeatures().push_back(
            m_GlobalVarExpression__globalVarName);

    // IfExpression
    m_IfExpressionEClass = new ::ecore::EClass();
    m_IfExpressionEClass->setClassifierID(IFEXPRESSION);
    m_IfExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_IfExpressionEClass);
    // m_IfExpression__condition has already been allocated above
    m_IfExpression__condition->setFeatureID(
            ::xpand3::expression::ExpressionPackage::IFEXPRESSION__CONDITION);
    m_IfExpressionEClass->getEStructuralFeatures().push_back(
            m_IfExpression__condition);
    // m_IfExpression__thenPart has already been allocated above
    m_IfExpression__thenPart->setFeatureID(
            ::xpand3::expression::ExpressionPackage::IFEXPRESSION__THENPART);
    m_IfExpressionEClass->getEStructuralFeatures().push_back(
            m_IfExpression__thenPart);
    // m_IfExpression__elsePart has already been allocated above
    m_IfExpression__elsePart->setFeatureID(
            ::xpand3::expression::ExpressionPackage::IFEXPRESSION__ELSEPART);
    m_IfExpressionEClass->getEStructuralFeatures().push_back(
            m_IfExpression__elsePart);

    // LetExpression
    m_LetExpressionEClass = new ::ecore::EClass();
    m_LetExpressionEClass->setClassifierID(LETEXPRESSION);
    m_LetExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_LetExpressionEClass);
    // m_LetExpression__varExpression has already been allocated above
    m_LetExpression__varExpression->setFeatureID(
            ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VAREXPRESSION);
    m_LetExpressionEClass->getEStructuralFeatures().push_back(
            m_LetExpression__varExpression);
    // m_LetExpression__targetExpression has already been allocated above
    m_LetExpression__targetExpression->setFeatureID(
            ::xpand3::expression::ExpressionPackage::LETEXPRESSION__TARGETEXPRESSION);
    m_LetExpressionEClass->getEStructuralFeatures().push_back(
            m_LetExpression__targetExpression);
    // m_LetExpression__varName has already been allocated above
    m_LetExpression__varName->setFeatureID(
            ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VARNAME);
    m_LetExpressionEClass->getEStructuralFeatures().push_back(
            m_LetExpression__varName);

    // ListLiteral
    m_ListLiteralEClass = new ::ecore::EClass();
    m_ListLiteralEClass->setClassifierID(LISTLITERAL);
    m_ListLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_ListLiteralEClass);
    // m_ListLiteral__elements has already been allocated above
    m_ListLiteral__elements->setFeatureID(
            ::xpand3::expression::ExpressionPackage::LISTLITERAL__ELEMENTS);
    m_ListLiteralEClass->getEStructuralFeatures().push_back(
            m_ListLiteral__elements);

    // Literal
    m_LiteralEClass = new ::ecore::EClass();
    m_LiteralEClass->setClassifierID(LITERAL);
    m_LiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_LiteralEClass);
    // m_Literal__literalValue has already been allocated above
    m_Literal__literalValue->setFeatureID(
            ::xpand3::expression::ExpressionPackage::LITERAL__LITERALVALUE);
    m_LiteralEClass->getEStructuralFeatures().push_back(
            m_Literal__literalValue);

    // BooleanLiteral
    m_BooleanLiteralEClass = new ::ecore::EClass();
    m_BooleanLiteralEClass->setClassifierID(BOOLEANLITERAL);
    m_BooleanLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_BooleanLiteralEClass);

    // IntegerLiteral
    m_IntegerLiteralEClass = new ::ecore::EClass();
    m_IntegerLiteralEClass->setClassifierID(INTEGERLITERAL);
    m_IntegerLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_IntegerLiteralEClass);

    // NullLiteral
    m_NullLiteralEClass = new ::ecore::EClass();
    m_NullLiteralEClass->setClassifierID(NULLLITERAL);
    m_NullLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_NullLiteralEClass);

    // RealLiteral
    m_RealLiteralEClass = new ::ecore::EClass();
    m_RealLiteralEClass->setClassifierID(REALLITERAL);
    m_RealLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_RealLiteralEClass);

    // StringLiteral
    m_StringLiteralEClass = new ::ecore::EClass();
    m_StringLiteralEClass->setClassifierID(STRINGLITERAL);
    m_StringLiteralEClass->setEPackage(this);
    getEClassifiers().push_back(m_StringLiteralEClass);

    // SwitchExpression
    m_SwitchExpressionEClass = new ::ecore::EClass();
    m_SwitchExpressionEClass->setClassifierID(SWITCHEXPRESSION);
    m_SwitchExpressionEClass->setEPackage(this);
    getEClassifiers().push_back(m_SwitchExpressionEClass);
    // m_SwitchExpression__switchExpr has already been allocated above
    m_SwitchExpression__switchExpr->setFeatureID(
            ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__SWITCHEXPR);
    m_SwitchExpressionEClass->getEStructuralFeatures().push_back(
            m_SwitchExpression__switchExpr);
    // m_SwitchExpression__defaultExpr has already been allocated above
    m_SwitchExpression__defaultExpr->setFeatureID(
            ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__DEFAULTEXPR);
    m_SwitchExpressionEClass->getEStructuralFeatures().push_back(
            m_SwitchExpression__defaultExpr);
    // m_SwitchExpression__cases has already been allocated above
    m_SwitchExpression__cases->setFeatureID(
            ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__CASES);
    m_SwitchExpressionEClass->getEStructuralFeatures().push_back(
            m_SwitchExpression__cases);

    // Case
    m_CaseEClass = new ::ecore::EClass();
    m_CaseEClass->setClassifierID(CASE);
    m_CaseEClass->setEPackage(this);
    getEClassifiers().push_back(m_CaseEClass);
    // m_Case__condition has already been allocated above
    m_Case__condition->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CASE__CONDITION);
    m_CaseEClass->getEStructuralFeatures().push_back(m_Case__condition);
    // m_Case__thenPart has already been allocated above
    m_Case__thenPart->setFeatureID(
            ::xpand3::expression::ExpressionPackage::CASE__THENPART);
    m_CaseEClass->getEStructuralFeatures().push_back(m_Case__thenPart);

    // BinaryOperation
    m_BinaryOperationEClass = new ::ecore::EClass();
    m_BinaryOperationEClass->setClassifierID(BINARYOPERATION);
    m_BinaryOperationEClass->setEPackage(this);
    getEClassifiers().push_back(m_BinaryOperationEClass);
    // m_BinaryOperation__left has already been allocated above
    m_BinaryOperation__left->setFeatureID(
            ::xpand3::expression::ExpressionPackage::BINARYOPERATION__LEFT);
    m_BinaryOperationEClass->getEStructuralFeatures().push_back(
            m_BinaryOperation__left);
    // m_BinaryOperation__right has already been allocated above
    m_BinaryOperation__right->setFeatureID(
            ::xpand3::expression::ExpressionPackage::BINARYOPERATION__RIGHT);
    m_BinaryOperationEClass->getEStructuralFeatures().push_back(
            m_BinaryOperation__right);
    // m_BinaryOperation__operator has already been allocated above
    m_BinaryOperation__operator->setFeatureID(
            ::xpand3::expression::ExpressionPackage::BINARYOPERATION__OPERATOR);
    m_BinaryOperationEClass->getEStructuralFeatures().push_back(
            m_BinaryOperation__operator);

    // UnaryOperation
    m_UnaryOperationEClass = new ::ecore::EClass();
    m_UnaryOperationEClass->setClassifierID(UNARYOPERATION);
    m_UnaryOperationEClass->setEPackage(this);
    getEClassifiers().push_back(m_UnaryOperationEClass);
    // m_UnaryOperation__operator has already been allocated above
    m_UnaryOperation__operator->setFeatureID(
            ::xpand3::expression::ExpressionPackage::UNARYOPERATION__OPERATOR);
    m_UnaryOperationEClass->getEStructuralFeatures().push_back(
            m_UnaryOperation__operator);
    // m_UnaryOperation__operand has already been allocated above
    m_UnaryOperation__operand->setFeatureID(
            ::xpand3::expression::ExpressionPackage::UNARYOPERATION__OPERAND);
    m_UnaryOperationEClass->getEStructuralFeatures().push_back(
            m_UnaryOperation__operand);

    // Create enums

    // Create data types

    // Initialize package
    setName("expression");
    setNsPrefix("expression");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/expression");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractExpressionEClass->getESuperTypes().push_back(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getSyntaxElement());
    m_BooleanOperationEClass->getESuperTypes().push_back(
            m_BinaryOperationEClass);
    m_CastEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
    m_ChainExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_ConstructorCallExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_FeatureCallEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
    m_CollectionExpressionEClass->getESuperTypes().push_back(
            m_FeatureCallEClass);
    m_OperationCallEClass->getESuperTypes().push_back(m_FeatureCallEClass);
    m_TypeSelectExpressionEClass->getESuperTypes().push_back(
            m_FeatureCallEClass);
    m_GlobalVarExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_IfExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_LetExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_ListLiteralEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
    m_LiteralEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
    m_BooleanLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
    m_IntegerLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
    m_NullLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
    m_RealLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
    m_StringLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
    m_SwitchExpressionEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_CaseEClass->getESuperTypes().push_back(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getSyntaxElement());
    m_BinaryOperationEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);
    m_UnaryOperationEClass->getESuperTypes().push_back(
            m_AbstractExpressionEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractExpression
    m_AbstractExpressionEClass->setName("AbstractExpression");
    m_AbstractExpressionEClass->setAbstract(true);
    m_AbstractExpressionEClass->setInterface(false);
    // BooleanOperation
    m_BooleanOperationEClass->setName("BooleanOperation");
    m_BooleanOperationEClass->setAbstract(false);
    m_BooleanOperationEClass->setInterface(false);
    // Cast
    m_CastEClass->setName("Cast");
    m_CastEClass->setAbstract(false);
    m_CastEClass->setInterface(false);
    m_Cast__type->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_Cast__type->setName("type");
    m_Cast__type->setDefaultValueLiteral("");
    m_Cast__type->setLowerBound(0);
    m_Cast__type->setUpperBound(1);
    m_Cast__type->setTransient(false);
    m_Cast__type->setVolatile(false);
    m_Cast__type->setChangeable(true);
    m_Cast__type->setContainment(true);
    m_Cast__type->setResolveProxies(true);
    m_Cast__type->setUnique(true);
    m_Cast__type->setDerived(false);
    m_Cast__type->setOrdered(true);
    m_Cast__target->setEType(m_AbstractExpressionEClass);
    m_Cast__target->setName("target");
    m_Cast__target->setDefaultValueLiteral("");
    m_Cast__target->setLowerBound(0);
    m_Cast__target->setUpperBound(1);
    m_Cast__target->setTransient(false);
    m_Cast__target->setVolatile(false);
    m_Cast__target->setChangeable(true);
    m_Cast__target->setContainment(true);
    m_Cast__target->setResolveProxies(true);
    m_Cast__target->setUnique(true);
    m_Cast__target->setDerived(false);
    m_Cast__target->setOrdered(true);
    // ChainExpression
    m_ChainExpressionEClass->setName("ChainExpression");
    m_ChainExpressionEClass->setAbstract(false);
    m_ChainExpressionEClass->setInterface(false);
    m_ChainExpression__first->setEType(m_AbstractExpressionEClass);
    m_ChainExpression__first->setName("first");
    m_ChainExpression__first->setDefaultValueLiteral("");
    m_ChainExpression__first->setLowerBound(0);
    m_ChainExpression__first->setUpperBound(1);
    m_ChainExpression__first->setTransient(false);
    m_ChainExpression__first->setVolatile(false);
    m_ChainExpression__first->setChangeable(true);
    m_ChainExpression__first->setContainment(true);
    m_ChainExpression__first->setResolveProxies(true);
    m_ChainExpression__first->setUnique(true);
    m_ChainExpression__first->setDerived(false);
    m_ChainExpression__first->setOrdered(true);
    m_ChainExpression__next->setEType(m_AbstractExpressionEClass);
    m_ChainExpression__next->setName("next");
    m_ChainExpression__next->setDefaultValueLiteral("");
    m_ChainExpression__next->setLowerBound(0);
    m_ChainExpression__next->setUpperBound(1);
    m_ChainExpression__next->setTransient(false);
    m_ChainExpression__next->setVolatile(false);
    m_ChainExpression__next->setChangeable(true);
    m_ChainExpression__next->setContainment(true);
    m_ChainExpression__next->setResolveProxies(true);
    m_ChainExpression__next->setUnique(true);
    m_ChainExpression__next->setDerived(false);
    m_ChainExpression__next->setOrdered(true);
    // ConstructorCallExpression
    m_ConstructorCallExpressionEClass->setName("ConstructorCallExpression");
    m_ConstructorCallExpressionEClass->setAbstract(false);
    m_ConstructorCallExpressionEClass->setInterface(false);
    m_ConstructorCallExpression__type->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_ConstructorCallExpression__type->setName("type");
    m_ConstructorCallExpression__type->setDefaultValueLiteral("");
    m_ConstructorCallExpression__type->setLowerBound(0);
    m_ConstructorCallExpression__type->setUpperBound(1);
    m_ConstructorCallExpression__type->setTransient(false);
    m_ConstructorCallExpression__type->setVolatile(false);
    m_ConstructorCallExpression__type->setChangeable(true);
    m_ConstructorCallExpression__type->setContainment(true);
    m_ConstructorCallExpression__type->setResolveProxies(true);
    m_ConstructorCallExpression__type->setUnique(true);
    m_ConstructorCallExpression__type->setDerived(false);
    m_ConstructorCallExpression__type->setOrdered(true);
    // FeatureCall
    m_FeatureCallEClass->setName("FeatureCall");
    m_FeatureCallEClass->setAbstract(false);
    m_FeatureCallEClass->setInterface(false);
    m_FeatureCall__target->setEType(m_AbstractExpressionEClass);
    m_FeatureCall__target->setName("target");
    m_FeatureCall__target->setDefaultValueLiteral("");
    m_FeatureCall__target->setLowerBound(0);
    m_FeatureCall__target->setUpperBound(1);
    m_FeatureCall__target->setTransient(false);
    m_FeatureCall__target->setVolatile(false);
    m_FeatureCall__target->setChangeable(true);
    m_FeatureCall__target->setContainment(true);
    m_FeatureCall__target->setResolveProxies(true);
    m_FeatureCall__target->setUnique(true);
    m_FeatureCall__target->setDerived(false);
    m_FeatureCall__target->setOrdered(true);
    m_FeatureCall__name->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_FeatureCall__name->setName("name");
    m_FeatureCall__name->setDefaultValueLiteral("");
    m_FeatureCall__name->setLowerBound(0);
    m_FeatureCall__name->setUpperBound(1);
    m_FeatureCall__name->setTransient(false);
    m_FeatureCall__name->setVolatile(false);
    m_FeatureCall__name->setChangeable(true);
    m_FeatureCall__name->setContainment(true);
    m_FeatureCall__name->setResolveProxies(true);
    m_FeatureCall__name->setUnique(true);
    m_FeatureCall__name->setDerived(false);
    m_FeatureCall__name->setOrdered(true);
    // CollectionExpression
    m_CollectionExpressionEClass->setName("CollectionExpression");
    m_CollectionExpressionEClass->setAbstract(false);
    m_CollectionExpressionEClass->setInterface(false);
    m_CollectionExpression__closure->setEType(m_AbstractExpressionEClass);
    m_CollectionExpression__closure->setName("closure");
    m_CollectionExpression__closure->setDefaultValueLiteral("");
    m_CollectionExpression__closure->setLowerBound(0);
    m_CollectionExpression__closure->setUpperBound(1);
    m_CollectionExpression__closure->setTransient(false);
    m_CollectionExpression__closure->setVolatile(false);
    m_CollectionExpression__closure->setChangeable(true);
    m_CollectionExpression__closure->setContainment(true);
    m_CollectionExpression__closure->setResolveProxies(true);
    m_CollectionExpression__closure->setUnique(true);
    m_CollectionExpression__closure->setDerived(false);
    m_CollectionExpression__closure->setOrdered(true);
    m_CollectionExpression__eleName->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_CollectionExpression__eleName->setName("eleName");
    m_CollectionExpression__eleName->setDefaultValueLiteral("");
    m_CollectionExpression__eleName->setLowerBound(0);
    m_CollectionExpression__eleName->setUpperBound(1);
    m_CollectionExpression__eleName->setTransient(false);
    m_CollectionExpression__eleName->setVolatile(false);
    m_CollectionExpression__eleName->setChangeable(true);
    m_CollectionExpression__eleName->setContainment(true);
    m_CollectionExpression__eleName->setResolveProxies(true);
    m_CollectionExpression__eleName->setUnique(true);
    m_CollectionExpression__eleName->setDerived(false);
    m_CollectionExpression__eleName->setOrdered(true);
    // OperationCall
    m_OperationCallEClass->setName("OperationCall");
    m_OperationCallEClass->setAbstract(false);
    m_OperationCallEClass->setInterface(false);
    m_OperationCall__params->setEType(m_AbstractExpressionEClass);
    m_OperationCall__params->setName("params");
    m_OperationCall__params->setDefaultValueLiteral("");
    m_OperationCall__params->setLowerBound(0);
    m_OperationCall__params->setUpperBound(-1);
    m_OperationCall__params->setTransient(false);
    m_OperationCall__params->setVolatile(false);
    m_OperationCall__params->setChangeable(true);
    m_OperationCall__params->setContainment(true);
    m_OperationCall__params->setResolveProxies(true);
    m_OperationCall__params->setUnique(true);
    m_OperationCall__params->setDerived(false);
    m_OperationCall__params->setOrdered(true);
    // TypeSelectExpression
    m_TypeSelectExpressionEClass->setName("TypeSelectExpression");
    m_TypeSelectExpressionEClass->setAbstract(false);
    m_TypeSelectExpressionEClass->setInterface(false);
    m_TypeSelectExpression__typeLiteral->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_TypeSelectExpression__typeLiteral->setName("typeLiteral");
    m_TypeSelectExpression__typeLiteral->setDefaultValueLiteral("");
    m_TypeSelectExpression__typeLiteral->setLowerBound(0);
    m_TypeSelectExpression__typeLiteral->setUpperBound(1);
    m_TypeSelectExpression__typeLiteral->setTransient(false);
    m_TypeSelectExpression__typeLiteral->setVolatile(false);
    m_TypeSelectExpression__typeLiteral->setChangeable(true);
    m_TypeSelectExpression__typeLiteral->setContainment(true);
    m_TypeSelectExpression__typeLiteral->setResolveProxies(true);
    m_TypeSelectExpression__typeLiteral->setUnique(true);
    m_TypeSelectExpression__typeLiteral->setDerived(false);
    m_TypeSelectExpression__typeLiteral->setOrdered(true);
    // GlobalVarExpression
    m_GlobalVarExpressionEClass->setName("GlobalVarExpression");
    m_GlobalVarExpressionEClass->setAbstract(false);
    m_GlobalVarExpressionEClass->setInterface(false);
    m_GlobalVarExpression__globalVarName->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_GlobalVarExpression__globalVarName->setName("globalVarName");
    m_GlobalVarExpression__globalVarName->setDefaultValueLiteral("");
    m_GlobalVarExpression__globalVarName->setLowerBound(0);
    m_GlobalVarExpression__globalVarName->setUpperBound(1);
    m_GlobalVarExpression__globalVarName->setTransient(false);
    m_GlobalVarExpression__globalVarName->setVolatile(false);
    m_GlobalVarExpression__globalVarName->setChangeable(true);
    m_GlobalVarExpression__globalVarName->setContainment(true);
    m_GlobalVarExpression__globalVarName->setResolveProxies(true);
    m_GlobalVarExpression__globalVarName->setUnique(true);
    m_GlobalVarExpression__globalVarName->setDerived(false);
    m_GlobalVarExpression__globalVarName->setOrdered(true);
    // IfExpression
    m_IfExpressionEClass->setName("IfExpression");
    m_IfExpressionEClass->setAbstract(false);
    m_IfExpressionEClass->setInterface(false);
    m_IfExpression__condition->setEType(m_AbstractExpressionEClass);
    m_IfExpression__condition->setName("condition");
    m_IfExpression__condition->setDefaultValueLiteral("");
    m_IfExpression__condition->setLowerBound(0);
    m_IfExpression__condition->setUpperBound(1);
    m_IfExpression__condition->setTransient(false);
    m_IfExpression__condition->setVolatile(false);
    m_IfExpression__condition->setChangeable(true);
    m_IfExpression__condition->setContainment(true);
    m_IfExpression__condition->setResolveProxies(true);
    m_IfExpression__condition->setUnique(true);
    m_IfExpression__condition->setDerived(false);
    m_IfExpression__condition->setOrdered(true);
    m_IfExpression__thenPart->setEType(m_AbstractExpressionEClass);
    m_IfExpression__thenPart->setName("thenPart");
    m_IfExpression__thenPart->setDefaultValueLiteral("");
    m_IfExpression__thenPart->setLowerBound(0);
    m_IfExpression__thenPart->setUpperBound(1);
    m_IfExpression__thenPart->setTransient(false);
    m_IfExpression__thenPart->setVolatile(false);
    m_IfExpression__thenPart->setChangeable(true);
    m_IfExpression__thenPart->setContainment(true);
    m_IfExpression__thenPart->setResolveProxies(true);
    m_IfExpression__thenPart->setUnique(true);
    m_IfExpression__thenPart->setDerived(false);
    m_IfExpression__thenPart->setOrdered(true);
    m_IfExpression__elsePart->setEType(m_AbstractExpressionEClass);
    m_IfExpression__elsePart->setName("elsePart");
    m_IfExpression__elsePart->setDefaultValueLiteral("");
    m_IfExpression__elsePart->setLowerBound(0);
    m_IfExpression__elsePart->setUpperBound(1);
    m_IfExpression__elsePart->setTransient(false);
    m_IfExpression__elsePart->setVolatile(false);
    m_IfExpression__elsePart->setChangeable(true);
    m_IfExpression__elsePart->setContainment(true);
    m_IfExpression__elsePart->setResolveProxies(true);
    m_IfExpression__elsePart->setUnique(true);
    m_IfExpression__elsePart->setDerived(false);
    m_IfExpression__elsePart->setOrdered(true);
    // LetExpression
    m_LetExpressionEClass->setName("LetExpression");
    m_LetExpressionEClass->setAbstract(false);
    m_LetExpressionEClass->setInterface(false);
    m_LetExpression__varExpression->setEType(m_AbstractExpressionEClass);
    m_LetExpression__varExpression->setName("varExpression");
    m_LetExpression__varExpression->setDefaultValueLiteral("");
    m_LetExpression__varExpression->setLowerBound(0);
    m_LetExpression__varExpression->setUpperBound(1);
    m_LetExpression__varExpression->setTransient(false);
    m_LetExpression__varExpression->setVolatile(false);
    m_LetExpression__varExpression->setChangeable(true);
    m_LetExpression__varExpression->setContainment(true);
    m_LetExpression__varExpression->setResolveProxies(true);
    m_LetExpression__varExpression->setUnique(true);
    m_LetExpression__varExpression->setDerived(false);
    m_LetExpression__varExpression->setOrdered(true);
    m_LetExpression__targetExpression->setEType(m_AbstractExpressionEClass);
    m_LetExpression__targetExpression->setName("targetExpression");
    m_LetExpression__targetExpression->setDefaultValueLiteral("");
    m_LetExpression__targetExpression->setLowerBound(0);
    m_LetExpression__targetExpression->setUpperBound(1);
    m_LetExpression__targetExpression->setTransient(false);
    m_LetExpression__targetExpression->setVolatile(false);
    m_LetExpression__targetExpression->setChangeable(true);
    m_LetExpression__targetExpression->setContainment(true);
    m_LetExpression__targetExpression->setResolveProxies(true);
    m_LetExpression__targetExpression->setUnique(true);
    m_LetExpression__targetExpression->setDerived(false);
    m_LetExpression__targetExpression->setOrdered(true);
    m_LetExpression__varName->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_LetExpression__varName->setName("varName");
    m_LetExpression__varName->setDefaultValueLiteral("");
    m_LetExpression__varName->setLowerBound(0);
    m_LetExpression__varName->setUpperBound(1);
    m_LetExpression__varName->setTransient(false);
    m_LetExpression__varName->setVolatile(false);
    m_LetExpression__varName->setChangeable(true);
    m_LetExpression__varName->setContainment(true);
    m_LetExpression__varName->setResolveProxies(true);
    m_LetExpression__varName->setUnique(true);
    m_LetExpression__varName->setDerived(false);
    m_LetExpression__varName->setOrdered(true);
    // ListLiteral
    m_ListLiteralEClass->setName("ListLiteral");
    m_ListLiteralEClass->setAbstract(false);
    m_ListLiteralEClass->setInterface(false);
    m_ListLiteral__elements->setEType(m_AbstractExpressionEClass);
    m_ListLiteral__elements->setName("elements");
    m_ListLiteral__elements->setDefaultValueLiteral("");
    m_ListLiteral__elements->setLowerBound(0);
    m_ListLiteral__elements->setUpperBound(-1);
    m_ListLiteral__elements->setTransient(false);
    m_ListLiteral__elements->setVolatile(false);
    m_ListLiteral__elements->setChangeable(true);
    m_ListLiteral__elements->setContainment(true);
    m_ListLiteral__elements->setResolveProxies(true);
    m_ListLiteral__elements->setUnique(true);
    m_ListLiteral__elements->setDerived(false);
    m_ListLiteral__elements->setOrdered(true);
    // Literal
    m_LiteralEClass->setName("Literal");
    m_LiteralEClass->setAbstract(true);
    m_LiteralEClass->setInterface(false);
    m_Literal__literalValue->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_Literal__literalValue->setName("literalValue");
    m_Literal__literalValue->setDefaultValueLiteral("");
    m_Literal__literalValue->setLowerBound(0);
    m_Literal__literalValue->setUpperBound(1);
    m_Literal__literalValue->setTransient(false);
    m_Literal__literalValue->setVolatile(false);
    m_Literal__literalValue->setChangeable(true);
    m_Literal__literalValue->setContainment(true);
    m_Literal__literalValue->setResolveProxies(true);
    m_Literal__literalValue->setUnique(true);
    m_Literal__literalValue->setDerived(false);
    m_Literal__literalValue->setOrdered(true);
    // BooleanLiteral
    m_BooleanLiteralEClass->setName("BooleanLiteral");
    m_BooleanLiteralEClass->setAbstract(false);
    m_BooleanLiteralEClass->setInterface(false);
    // IntegerLiteral
    m_IntegerLiteralEClass->setName("IntegerLiteral");
    m_IntegerLiteralEClass->setAbstract(false);
    m_IntegerLiteralEClass->setInterface(false);
    // NullLiteral
    m_NullLiteralEClass->setName("NullLiteral");
    m_NullLiteralEClass->setAbstract(false);
    m_NullLiteralEClass->setInterface(false);
    // RealLiteral
    m_RealLiteralEClass->setName("RealLiteral");
    m_RealLiteralEClass->setAbstract(false);
    m_RealLiteralEClass->setInterface(false);
    // StringLiteral
    m_StringLiteralEClass->setName("StringLiteral");
    m_StringLiteralEClass->setAbstract(false);
    m_StringLiteralEClass->setInterface(false);
    // SwitchExpression
    m_SwitchExpressionEClass->setName("SwitchExpression");
    m_SwitchExpressionEClass->setAbstract(false);
    m_SwitchExpressionEClass->setInterface(false);
    m_SwitchExpression__switchExpr->setEType(m_AbstractExpressionEClass);
    m_SwitchExpression__switchExpr->setName("switchExpr");
    m_SwitchExpression__switchExpr->setDefaultValueLiteral("");
    m_SwitchExpression__switchExpr->setLowerBound(0);
    m_SwitchExpression__switchExpr->setUpperBound(1);
    m_SwitchExpression__switchExpr->setTransient(false);
    m_SwitchExpression__switchExpr->setVolatile(false);
    m_SwitchExpression__switchExpr->setChangeable(true);
    m_SwitchExpression__switchExpr->setContainment(true);
    m_SwitchExpression__switchExpr->setResolveProxies(true);
    m_SwitchExpression__switchExpr->setUnique(true);
    m_SwitchExpression__switchExpr->setDerived(false);
    m_SwitchExpression__switchExpr->setOrdered(true);
    m_SwitchExpression__defaultExpr->setEType(m_AbstractExpressionEClass);
    m_SwitchExpression__defaultExpr->setName("defaultExpr");
    m_SwitchExpression__defaultExpr->setDefaultValueLiteral("");
    m_SwitchExpression__defaultExpr->setLowerBound(0);
    m_SwitchExpression__defaultExpr->setUpperBound(1);
    m_SwitchExpression__defaultExpr->setTransient(false);
    m_SwitchExpression__defaultExpr->setVolatile(false);
    m_SwitchExpression__defaultExpr->setChangeable(true);
    m_SwitchExpression__defaultExpr->setContainment(true);
    m_SwitchExpression__defaultExpr->setResolveProxies(true);
    m_SwitchExpression__defaultExpr->setUnique(true);
    m_SwitchExpression__defaultExpr->setDerived(false);
    m_SwitchExpression__defaultExpr->setOrdered(true);
    m_SwitchExpression__cases->setEType(m_CaseEClass);
    m_SwitchExpression__cases->setName("cases");
    m_SwitchExpression__cases->setDefaultValueLiteral("");
    m_SwitchExpression__cases->setLowerBound(0);
    m_SwitchExpression__cases->setUpperBound(-1);
    m_SwitchExpression__cases->setTransient(false);
    m_SwitchExpression__cases->setVolatile(false);
    m_SwitchExpression__cases->setChangeable(true);
    m_SwitchExpression__cases->setContainment(true);
    m_SwitchExpression__cases->setResolveProxies(true);
    m_SwitchExpression__cases->setUnique(true);
    m_SwitchExpression__cases->setDerived(false);
    m_SwitchExpression__cases->setOrdered(true);
    // Case
    m_CaseEClass->setName("Case");
    m_CaseEClass->setAbstract(false);
    m_CaseEClass->setInterface(false);
    m_Case__condition->setEType(m_AbstractExpressionEClass);
    m_Case__condition->setName("condition");
    m_Case__condition->setDefaultValueLiteral("");
    m_Case__condition->setLowerBound(0);
    m_Case__condition->setUpperBound(1);
    m_Case__condition->setTransient(false);
    m_Case__condition->setVolatile(false);
    m_Case__condition->setChangeable(true);
    m_Case__condition->setContainment(true);
    m_Case__condition->setResolveProxies(true);
    m_Case__condition->setUnique(true);
    m_Case__condition->setDerived(false);
    m_Case__condition->setOrdered(true);
    m_Case__thenPart->setEType(m_AbstractExpressionEClass);
    m_Case__thenPart->setName("thenPart");
    m_Case__thenPart->setDefaultValueLiteral("");
    m_Case__thenPart->setLowerBound(0);
    m_Case__thenPart->setUpperBound(1);
    m_Case__thenPart->setTransient(false);
    m_Case__thenPart->setVolatile(false);
    m_Case__thenPart->setChangeable(true);
    m_Case__thenPart->setContainment(true);
    m_Case__thenPart->setResolveProxies(true);
    m_Case__thenPart->setUnique(true);
    m_Case__thenPart->setDerived(false);
    m_Case__thenPart->setOrdered(true);
    // BinaryOperation
    m_BinaryOperationEClass->setName("BinaryOperation");
    m_BinaryOperationEClass->setAbstract(false);
    m_BinaryOperationEClass->setInterface(false);
    m_BinaryOperation__left->setEType(m_AbstractExpressionEClass);
    m_BinaryOperation__left->setName("left");
    m_BinaryOperation__left->setDefaultValueLiteral("");
    m_BinaryOperation__left->setLowerBound(0);
    m_BinaryOperation__left->setUpperBound(1);
    m_BinaryOperation__left->setTransient(false);
    m_BinaryOperation__left->setVolatile(false);
    m_BinaryOperation__left->setChangeable(true);
    m_BinaryOperation__left->setContainment(true);
    m_BinaryOperation__left->setResolveProxies(true);
    m_BinaryOperation__left->setUnique(true);
    m_BinaryOperation__left->setDerived(false);
    m_BinaryOperation__left->setOrdered(true);
    m_BinaryOperation__right->setEType(m_AbstractExpressionEClass);
    m_BinaryOperation__right->setName("right");
    m_BinaryOperation__right->setDefaultValueLiteral("");
    m_BinaryOperation__right->setLowerBound(0);
    m_BinaryOperation__right->setUpperBound(1);
    m_BinaryOperation__right->setTransient(false);
    m_BinaryOperation__right->setVolatile(false);
    m_BinaryOperation__right->setChangeable(true);
    m_BinaryOperation__right->setContainment(true);
    m_BinaryOperation__right->setResolveProxies(true);
    m_BinaryOperation__right->setUnique(true);
    m_BinaryOperation__right->setDerived(false);
    m_BinaryOperation__right->setOrdered(true);
    m_BinaryOperation__operator->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_BinaryOperation__operator->setName("operator");
    m_BinaryOperation__operator->setDefaultValueLiteral("");
    m_BinaryOperation__operator->setLowerBound(0);
    m_BinaryOperation__operator->setUpperBound(1);
    m_BinaryOperation__operator->setTransient(false);
    m_BinaryOperation__operator->setVolatile(false);
    m_BinaryOperation__operator->setChangeable(true);
    m_BinaryOperation__operator->setContainment(true);
    m_BinaryOperation__operator->setResolveProxies(true);
    m_BinaryOperation__operator->setUnique(true);
    m_BinaryOperation__operator->setDerived(false);
    m_BinaryOperation__operator->setOrdered(true);
    // UnaryOperation
    m_UnaryOperationEClass->setName("UnaryOperation");
    m_UnaryOperationEClass->setAbstract(false);
    m_UnaryOperationEClass->setInterface(false);
    m_UnaryOperation__operator->setEType(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance())->getIdentifier());
    m_UnaryOperation__operator->setName("operator");
    m_UnaryOperation__operator->setDefaultValueLiteral("");
    m_UnaryOperation__operator->setLowerBound(0);
    m_UnaryOperation__operator->setUpperBound(1);
    m_UnaryOperation__operator->setTransient(false);
    m_UnaryOperation__operator->setVolatile(false);
    m_UnaryOperation__operator->setChangeable(true);
    m_UnaryOperation__operator->setContainment(true);
    m_UnaryOperation__operator->setResolveProxies(true);
    m_UnaryOperation__operator->setUnique(true);
    m_UnaryOperation__operator->setDerived(false);
    m_UnaryOperation__operator->setOrdered(true);
    m_UnaryOperation__operand->setEType(m_AbstractExpressionEClass);
    m_UnaryOperation__operand->setName("operand");
    m_UnaryOperation__operand->setDefaultValueLiteral("");
    m_UnaryOperation__operand->setLowerBound(0);
    m_UnaryOperation__operand->setUpperBound(1);
    m_UnaryOperation__operand->setTransient(false);
    m_UnaryOperation__operand->setVolatile(false);
    m_UnaryOperation__operand->setChangeable(true);
    m_UnaryOperation__operand->setContainment(false);
    m_UnaryOperation__operand->setResolveProxies(true);
    m_UnaryOperation__operand->setUnique(true);
    m_UnaryOperation__operand->setDerived(false);
    m_UnaryOperation__operand->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ExpressionPackage::getAbstractExpression()
{
    return m_AbstractExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBooleanOperation()
{
    return m_BooleanOperationEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCast()
{
    return m_CastEClass;
}
::ecore::EClass_ptr ExpressionPackage::getChainExpression()
{
    return m_ChainExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getConstructorCallExpression()
{
    return m_ConstructorCallExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getFeatureCall()
{
    return m_FeatureCallEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCollectionExpression()
{
    return m_CollectionExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getOperationCall()
{
    return m_OperationCallEClass;
}
::ecore::EClass_ptr ExpressionPackage::getTypeSelectExpression()
{
    return m_TypeSelectExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getGlobalVarExpression()
{
    return m_GlobalVarExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getIfExpression()
{
    return m_IfExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getLetExpression()
{
    return m_LetExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getListLiteral()
{
    return m_ListLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getLiteral()
{
    return m_LiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBooleanLiteral()
{
    return m_BooleanLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getIntegerLiteral()
{
    return m_IntegerLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getNullLiteral()
{
    return m_NullLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getRealLiteral()
{
    return m_RealLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getStringLiteral()
{
    return m_StringLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getSwitchExpression()
{
    return m_SwitchExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCase()
{
    return m_CaseEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBinaryOperation()
{
    return m_BinaryOperationEClass;
}
::ecore::EClass_ptr ExpressionPackage::getUnaryOperation()
{
    return m_UnaryOperationEClass;
}

::ecore::EAttribute_ptr ExpressionPackage::getSyntaxElement__line()
{
    return m_SyntaxElement__line;
}
::ecore::EAttribute_ptr ExpressionPackage::getSyntaxElement__start()
{
    return m_SyntaxElement__start;
}
::ecore::EAttribute_ptr ExpressionPackage::getSyntaxElement__end()
{
    return m_SyntaxElement__end;
}
::ecore::EAttribute_ptr ExpressionPackage::getSyntaxElement__fileName()
{
    return m_SyntaxElement__fileName;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__left()
{
    return m_BinaryOperation__left;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__right()
{
    return m_BinaryOperation__right;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__operator()
{
    return m_BinaryOperation__operator;
}
::ecore::EReference_ptr ExpressionPackage::getCast__type()
{
    return m_Cast__type;
}
::ecore::EReference_ptr ExpressionPackage::getCast__target()
{
    return m_Cast__target;
}
::ecore::EReference_ptr ExpressionPackage::getChainExpression__first()
{
    return m_ChainExpression__first;
}
::ecore::EReference_ptr ExpressionPackage::getChainExpression__next()
{
    return m_ChainExpression__next;
}
::ecore::EReference_ptr ExpressionPackage::getConstructorCallExpression__type()
{
    return m_ConstructorCallExpression__type;
}
::ecore::EReference_ptr ExpressionPackage::getFeatureCall__target()
{
    return m_FeatureCall__target;
}
::ecore::EReference_ptr ExpressionPackage::getFeatureCall__name()
{
    return m_FeatureCall__name;
}
::ecore::EReference_ptr ExpressionPackage::getCollectionExpression__closure()
{
    return m_CollectionExpression__closure;
}
::ecore::EReference_ptr ExpressionPackage::getCollectionExpression__eleName()
{
    return m_CollectionExpression__eleName;
}
::ecore::EReference_ptr ExpressionPackage::getOperationCall__params()
{
    return m_OperationCall__params;
}
::ecore::EReference_ptr ExpressionPackage::getTypeSelectExpression__typeLiteral()
{
    return m_TypeSelectExpression__typeLiteral;
}
::ecore::EReference_ptr ExpressionPackage::getGlobalVarExpression__globalVarName()
{
    return m_GlobalVarExpression__globalVarName;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__condition()
{
    return m_IfExpression__condition;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__thenPart()
{
    return m_IfExpression__thenPart;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__elsePart()
{
    return m_IfExpression__elsePart;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__varExpression()
{
    return m_LetExpression__varExpression;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__targetExpression()
{
    return m_LetExpression__targetExpression;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__varName()
{
    return m_LetExpression__varName;
}
::ecore::EReference_ptr ExpressionPackage::getListLiteral__elements()
{
    return m_ListLiteral__elements;
}
::ecore::EReference_ptr ExpressionPackage::getLiteral__literalValue()
{
    return m_Literal__literalValue;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__switchExpr()
{
    return m_SwitchExpression__switchExpr;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__defaultExpr()
{
    return m_SwitchExpression__defaultExpr;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__cases()
{
    return m_SwitchExpression__cases;
}
::ecore::EReference_ptr ExpressionPackage::getCase__condition()
{
    return m_Case__condition;
}
::ecore::EReference_ptr ExpressionPackage::getCase__thenPart()
{
    return m_Case__thenPart;
}
::ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operator()
{
    return m_UnaryOperation__operator;
}
::ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operand()
{
    return m_UnaryOperation__operand;
}

