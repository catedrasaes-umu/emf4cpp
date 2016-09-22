// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionFactory.hpp
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

#ifndef _XPAND3_EXPRESSIONFACTORY_HPP
#define _XPAND3_EXPRESSIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/expression.hpp>

namespace xpand3
{
    namespace expression
    {

        class ExpressionFactory: public virtual ::ecore::EFactory
        {
        public:

            static ExpressionFactory_ptr _instance();

            virtual AbstractExpression_ptr createAbstractExpression();
            virtual BooleanOperation_ptr createBooleanOperation();
            virtual Cast_ptr createCast();
            virtual ChainExpression_ptr createChainExpression();
            virtual ConstructorCallExpression_ptr createConstructorCallExpression();
            virtual FeatureCall_ptr createFeatureCall();
            virtual CollectionExpression_ptr createCollectionExpression();
            virtual OperationCall_ptr createOperationCall();
            virtual TypeSelectExpression_ptr createTypeSelectExpression();
            virtual GlobalVarExpression_ptr createGlobalVarExpression();
            virtual IfExpression_ptr createIfExpression();
            virtual LetExpression_ptr createLetExpression();
            virtual ListLiteral_ptr createListLiteral();
            virtual Literal_ptr createLiteral();
            virtual BooleanLiteral_ptr createBooleanLiteral();
            virtual IntegerLiteral_ptr createIntegerLiteral();
            virtual NullLiteral_ptr createNullLiteral();
            virtual RealLiteral_ptr createRealLiteral();
            virtual StringLiteral_ptr createStringLiteral();
            virtual SwitchExpression_ptr createSwitchExpression();
            virtual Case_ptr createCase();
            virtual BinaryOperation_ptr createBinaryOperation();
            virtual UnaryOperation_ptr createUnaryOperation();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< ExpressionFactory > s_instance;

            ExpressionFactory();

        };

    } // expression
} // xpand3

#endif // _XPAND3_EXPRESSIONFACTORY_HPP

