// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementFactory.hpp
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

#ifndef _XPAND3_STATEMENTFACTORY_HPP
#define _XPAND3_STATEMENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/statement.hpp>

namespace xpand3
{
    namespace statement
    {

        class StatementFactory: public virtual ::ecore::EFactory
        {
        public:

            static StatementFactory_ptr _instance();

            virtual AbstractStatement_ptr createAbstractStatement();
            virtual ExpandStatement_ptr createExpandStatement();
            virtual ExpressionStatement_ptr createExpressionStatement();
            virtual ErrorStatement_ptr createErrorStatement();
            virtual AbstractStatementWithBody_ptr
                    createAbstractStatementWithBody();
            virtual FileStatement_ptr createFileStatement();
            virtual ForEachStatement_ptr createForEachStatement();
            virtual IfStatement_ptr createIfStatement();
            virtual LetStatement_ptr createLetStatement();
            virtual ProtectStatement_ptr createProtectStatement();
            virtual TextStatement_ptr createTextStatement();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< StatementFactory > s_instance;

            StatementFactory();

        };

    } // statement
} // xpand3


#endif // _XPAND3_STATEMENTFACTORY_HPP
