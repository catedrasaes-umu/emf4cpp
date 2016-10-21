// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionPackage.hpp
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

#ifndef _XPAND3_EXPRESSIONPACKAGE_HPP
#define _XPAND3_EXPRESSIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3/expression_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/Xpand3Package.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL ExpressionPackage : public virtual ::ecore::EPackage
    {
    public:

        static ExpressionPackage_ptr _instance();
        static ExpressionPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTEXPRESSION = 0;

        static const int BINARYOPERATION = 1;

        static const int BOOLEANLITERAL = 2;

        static const int BOOLEANOPERATION = 3;

        static const int CASE = 4;

        static const int CAST = 5;

        static const int CHAINEXPRESSION = 6;

        static const int COLLECTIONEXPRESSION = 7;

        static const int CONSTRUCTORCALLEXPRESSION = 8;

        static const int FEATURECALL = 9;

        static const int GLOBALVAREXPRESSION = 10;

        static const int IFEXPRESSION = 11;

        static const int INTEGERLITERAL = 12;

        static const int LETEXPRESSION = 13;

        static const int LISTLITERAL = 14;

        static const int LITERAL = 15;

        static const int NULLLITERAL = 16;

        static const int OPERATIONCALL = 17;

        static const int REALLITERAL = 18;

        static const int STRINGLITERAL = 19;

        static const int SWITCHEXPRESSION = 20;

        static const int TYPESELECTEXPRESSION = 21;

        static const int UNARYOPERATION = 22;

        static const int CAST__TYPE = 11;

        static const int CAST__TARGET = 12;

        static const int CHAINEXPRESSION__FIRST = 13;

        static const int CHAINEXPRESSION__NEXT = 14;

        static const int CONSTRUCTORCALLEXPRESSION__TYPE = 15;

        static const int FEATURECALL__TARGET = 16;

        static const int FEATURECALL__NAME = 17;

        static const int COLLECTIONEXPRESSION__CLOSURE = 18;

        static const int COLLECTIONEXPRESSION__ELENAME = 19;

        static const int OPERATIONCALL__PARAMS = 20;

        static const int TYPESELECTEXPRESSION__TYPELITERAL = 21;

        static const int GLOBALVAREXPRESSION__GLOBALVARNAME = 22;

        static const int IFEXPRESSION__CONDITION = 23;

        static const int IFEXPRESSION__THENPART = 24;

        static const int IFEXPRESSION__ELSEPART = 25;

        static const int LETEXPRESSION__VAREXPRESSION = 26;

        static const int LETEXPRESSION__TARGETEXPRESSION = 27;

        static const int LETEXPRESSION__VARNAME = 28;

        static const int LISTLITERAL__ELEMENTS = 29;

        static const int LITERAL__LITERALVALUE = 30;

        static const int SWITCHEXPRESSION__SWITCHEXPR = 31;

        static const int SWITCHEXPRESSION__DEFAULTEXPR = 32;

        static const int SWITCHEXPRESSION__CASES = 33;

        static const int CASE__CONDITION = 34;

        static const int CASE__THENPART = 35;

        static const int BINARYOPERATION__LEFT = 36;

        static const int BINARYOPERATION__RIGHT = 37;

        static const int BINARYOPERATION__OPERATOR = 38;

        static const int UNARYOPERATION__OPERATOR = 39;

        static const int UNARYOPERATION__OPERAND = 40;

        // IDs for classifiers for class AbstractExpression 

        static const int ABSTRACTEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int ABSTRACTEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int ABSTRACTEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int ABSTRACTEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class BinaryOperation 

        static const int BINARYOPERATION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int BINARYOPERATION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int BINARYOPERATION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int BINARYOPERATION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class BooleanLiteral 

        static const int BOOLEANLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int BOOLEANLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int BOOLEANLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int BOOLEANLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int BOOLEANLITERAL__LITERALVALUE = LITERAL__LITERALVALUE;

        // IDs for classifiers for class BooleanOperation 

        static const int BOOLEANOPERATION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int BOOLEANOPERATION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int BOOLEANOPERATION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int BOOLEANOPERATION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int BOOLEANOPERATION__LEFT = BINARYOPERATION__LEFT;

        static const int BOOLEANOPERATION__RIGHT = BINARYOPERATION__RIGHT;

        static const int BOOLEANOPERATION__OPERATOR = BINARYOPERATION__OPERATOR;

        // IDs for classifiers for class Case 

        static const int CASE__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CASE__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CASE__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CASE__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class Cast 

        static const int CAST__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CAST__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CAST__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CAST__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class ChainExpression 

        static const int CHAINEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CHAINEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CHAINEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CHAINEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class CollectionExpression 

        static const int COLLECTIONEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int COLLECTIONEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int COLLECTIONEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int COLLECTIONEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int COLLECTIONEXPRESSION__TARGET = FEATURECALL__TARGET;

        static const int COLLECTIONEXPRESSION__NAME = FEATURECALL__NAME;

        // IDs for classifiers for class ConstructorCallExpression 

        static const int CONSTRUCTORCALLEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CONSTRUCTORCALLEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CONSTRUCTORCALLEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CONSTRUCTORCALLEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class FeatureCall 

        static const int FEATURECALL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int FEATURECALL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int FEATURECALL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int FEATURECALL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class GlobalVarExpression 

        static const int GLOBALVAREXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int GLOBALVAREXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int GLOBALVAREXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int GLOBALVAREXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class IfExpression 

        static const int IFEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int IFEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int IFEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int IFEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class IntegerLiteral 

        static const int INTEGERLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int INTEGERLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int INTEGERLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int INTEGERLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int INTEGERLITERAL__LITERALVALUE = LITERAL__LITERALVALUE;

        // IDs for classifiers for class LetExpression 

        static const int LETEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int LETEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int LETEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int LETEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class ListLiteral 

        static const int LISTLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int LISTLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int LISTLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int LISTLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class Literal 

        static const int LITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int LITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int LITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int LITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class NullLiteral 

        static const int NULLLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int NULLLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int NULLLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int NULLLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int NULLLITERAL__LITERALVALUE = LITERAL__LITERALVALUE;

        // IDs for classifiers for class OperationCall 

        static const int OPERATIONCALL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int OPERATIONCALL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int OPERATIONCALL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int OPERATIONCALL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int OPERATIONCALL__TARGET = FEATURECALL__TARGET;

        static const int OPERATIONCALL__NAME = FEATURECALL__NAME;

        // IDs for classifiers for class RealLiteral 

        static const int REALLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int REALLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int REALLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int REALLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int REALLITERAL__LITERALVALUE = LITERAL__LITERALVALUE;

        // IDs for classifiers for class StringLiteral 

        static const int STRINGLITERAL__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int STRINGLITERAL__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int STRINGLITERAL__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int STRINGLITERAL__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int STRINGLITERAL__LITERALVALUE = LITERAL__LITERALVALUE;

        // IDs for classifiers for class SwitchExpression 

        static const int SWITCHEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int SWITCHEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int SWITCHEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int SWITCHEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class TypeSelectExpression 

        static const int TYPESELECTEXPRESSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int TYPESELECTEXPRESSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int TYPESELECTEXPRESSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int TYPESELECTEXPRESSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int TYPESELECTEXPRESSION__TARGET = FEATURECALL__TARGET;

        static const int TYPESELECTEXPRESSION__NAME = FEATURECALL__NAME;

        // IDs for classifiers for class UnaryOperation 

        static const int UNARYOPERATION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int UNARYOPERATION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int UNARYOPERATION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int UNARYOPERATION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractExpression();

        virtual ::ecore::EClass_ptr getBooleanOperation();

        virtual ::ecore::EClass_ptr getCast();

        virtual ::ecore::EClass_ptr getChainExpression();

        virtual ::ecore::EClass_ptr getConstructorCallExpression();

        virtual ::ecore::EClass_ptr getFeatureCall();

        virtual ::ecore::EClass_ptr getCollectionExpression();

        virtual ::ecore::EClass_ptr getOperationCall();

        virtual ::ecore::EClass_ptr getTypeSelectExpression();

        virtual ::ecore::EClass_ptr getGlobalVarExpression();

        virtual ::ecore::EClass_ptr getIfExpression();

        virtual ::ecore::EClass_ptr getLetExpression();

        virtual ::ecore::EClass_ptr getListLiteral();

        virtual ::ecore::EClass_ptr getLiteral();

        virtual ::ecore::EClass_ptr getBooleanLiteral();

        virtual ::ecore::EClass_ptr getIntegerLiteral();

        virtual ::ecore::EClass_ptr getNullLiteral();

        virtual ::ecore::EClass_ptr getRealLiteral();

        virtual ::ecore::EClass_ptr getStringLiteral();

        virtual ::ecore::EClass_ptr getSwitchExpression();

        virtual ::ecore::EClass_ptr getCase();

        virtual ::ecore::EClass_ptr getBinaryOperation();

        virtual ::ecore::EClass_ptr getUnaryOperation();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getSyntaxElement__line();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__start();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__end();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__fileName();

        virtual ::ecore::EReference_ptr getBinaryOperation__left();

        virtual ::ecore::EReference_ptr getBinaryOperation__right();

        virtual ::ecore::EReference_ptr getBinaryOperation__operator();

        virtual ::ecore::EReference_ptr getCast__type();

        virtual ::ecore::EReference_ptr getCast__target();

        virtual ::ecore::EReference_ptr getChainExpression__first();

        virtual ::ecore::EReference_ptr getChainExpression__next();

        virtual ::ecore::EReference_ptr getConstructorCallExpression__type();

        virtual ::ecore::EReference_ptr getFeatureCall__target();

        virtual ::ecore::EReference_ptr getFeatureCall__name();

        virtual ::ecore::EReference_ptr getCollectionExpression__closure();

        virtual ::ecore::EReference_ptr getCollectionExpression__eleName();

        virtual ::ecore::EReference_ptr getOperationCall__params();

        virtual ::ecore::EReference_ptr getTypeSelectExpression__typeLiteral();

        virtual ::ecore::EReference_ptr getGlobalVarExpression__globalVarName();

        virtual ::ecore::EReference_ptr getIfExpression__condition();

        virtual ::ecore::EReference_ptr getIfExpression__thenPart();

        virtual ::ecore::EReference_ptr getIfExpression__elsePart();

        virtual ::ecore::EReference_ptr getLetExpression__varExpression();

        virtual ::ecore::EReference_ptr getLetExpression__targetExpression();

        virtual ::ecore::EReference_ptr getLetExpression__varName();

        virtual ::ecore::EReference_ptr getListLiteral__elements();

        virtual ::ecore::EReference_ptr getLiteral__literalValue();

        virtual ::ecore::EReference_ptr getSwitchExpression__switchExpr();

        virtual ::ecore::EReference_ptr getSwitchExpression__defaultExpr();

        virtual ::ecore::EReference_ptr getSwitchExpression__cases();

        virtual ::ecore::EReference_ptr getCase__condition();

        virtual ::ecore::EReference_ptr getCase__thenPart();

        virtual ::ecore::EReference_ptr getUnaryOperation__operator();

        virtual ::ecore::EReference_ptr getUnaryOperation__operand();

    protected:

        static std::unique_ptr< ExpressionPackage, ::ecorecpp::PackageDeleter<ExpressionPackage> > s_instance;

        ExpressionPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AbstractExpressionEClass;

        ::ecore::EClass_ptr m_BooleanOperationEClass;

        ::ecore::EClass_ptr m_CastEClass;

        ::ecore::EClass_ptr m_ChainExpressionEClass;

        ::ecore::EClass_ptr m_ConstructorCallExpressionEClass;

        ::ecore::EClass_ptr m_FeatureCallEClass;

        ::ecore::EClass_ptr m_CollectionExpressionEClass;

        ::ecore::EClass_ptr m_OperationCallEClass;

        ::ecore::EClass_ptr m_TypeSelectExpressionEClass;

        ::ecore::EClass_ptr m_GlobalVarExpressionEClass;

        ::ecore::EClass_ptr m_IfExpressionEClass;

        ::ecore::EClass_ptr m_LetExpressionEClass;

        ::ecore::EClass_ptr m_ListLiteralEClass;

        ::ecore::EClass_ptr m_LiteralEClass;

        ::ecore::EClass_ptr m_BooleanLiteralEClass;

        ::ecore::EClass_ptr m_IntegerLiteralEClass;

        ::ecore::EClass_ptr m_NullLiteralEClass;

        ::ecore::EClass_ptr m_RealLiteralEClass;

        ::ecore::EClass_ptr m_StringLiteralEClass;

        ::ecore::EClass_ptr m_SwitchExpressionEClass;

        ::ecore::EClass_ptr m_CaseEClass;

        ::ecore::EClass_ptr m_BinaryOperationEClass;

        ::ecore::EClass_ptr m_UnaryOperationEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_SyntaxElement__line;

        ::ecore::EAttribute_ptr m_SyntaxElement__start;

        ::ecore::EAttribute_ptr m_SyntaxElement__end;

        ::ecore::EAttribute_ptr m_SyntaxElement__fileName;

        ::ecore::EReference_ptr m_BinaryOperation__left;

        ::ecore::EReference_ptr m_BinaryOperation__right;

        ::ecore::EReference_ptr m_BinaryOperation__operator;

        ::ecore::EReference_ptr m_Cast__type;

        ::ecore::EReference_ptr m_Cast__target;

        ::ecore::EReference_ptr m_ChainExpression__first;

        ::ecore::EReference_ptr m_ChainExpression__next;

        ::ecore::EReference_ptr m_ConstructorCallExpression__type;

        ::ecore::EReference_ptr m_FeatureCall__target;

        ::ecore::EReference_ptr m_FeatureCall__name;

        ::ecore::EReference_ptr m_CollectionExpression__closure;

        ::ecore::EReference_ptr m_CollectionExpression__eleName;

        ::ecore::EReference_ptr m_OperationCall__params;

        ::ecore::EReference_ptr m_TypeSelectExpression__typeLiteral;

        ::ecore::EReference_ptr m_GlobalVarExpression__globalVarName;

        ::ecore::EReference_ptr m_IfExpression__condition;

        ::ecore::EReference_ptr m_IfExpression__thenPart;

        ::ecore::EReference_ptr m_IfExpression__elsePart;

        ::ecore::EReference_ptr m_LetExpression__varExpression;

        ::ecore::EReference_ptr m_LetExpression__targetExpression;

        ::ecore::EReference_ptr m_LetExpression__varName;

        ::ecore::EReference_ptr m_ListLiteral__elements;

        ::ecore::EReference_ptr m_Literal__literalValue;

        ::ecore::EReference_ptr m_SwitchExpression__switchExpr;

        ::ecore::EReference_ptr m_SwitchExpression__defaultExpr;

        ::ecore::EReference_ptr m_SwitchExpression__cases;

        ::ecore::EReference_ptr m_Case__condition;

        ::ecore::EReference_ptr m_Case__thenPart;

        ::ecore::EReference_ptr m_UnaryOperation__operator;

        ::ecore::EReference_ptr m_UnaryOperation__operand;

    };

}
 // expression
}// xpand3

#endif // _XPAND3_EXPRESSIONPACKAGE_HPP

