// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementFactory.hpp
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

#ifndef _XPAND3_STATEMENTFACTORY_HPP
#define _XPAND3_STATEMENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/statement.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace statement
    {

        class EXPORT_XPAND3_DLL StatementFactory : public virtual ::ecore::EFactory
        {
        public:

            static StatementFactory_ptr _instance();

            virtual AbstractStatement_ptr createAbstractStatement();
            virtual ExpandStatement_ptr createExpandStatement();
            virtual ExpressionStatement_ptr createExpressionStatement();
            virtual ErrorStatement_ptr createErrorStatement();
            virtual AbstractStatementWithBody_ptr createAbstractStatementWithBody();
            virtual FileStatement_ptr createFileStatement();
            virtual ForEachStatement_ptr createForEachStatement();
            virtual IfStatement_ptr createIfStatement();
            virtual LetStatement_ptr createLetStatement();
            virtual ProtectStatement_ptr createProtectStatement();
            virtual TextStatement_ptr createTextStatement();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static boost::intrusive_ptr< StatementFactory > s_holder;

            StatementFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline boost::intrusive_ptr< T > create()
        {
            return boost::intrusive_ptr< T >();
        }

        template< > inline AbstractStatement_ptr create< AbstractStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createAbstractStatement();
        }

        template< > inline ExpandStatement_ptr create< ExpandStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createExpandStatement();
        }

        template< > inline ExpressionStatement_ptr create< ExpressionStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createExpressionStatement();
        }

        template< > inline ErrorStatement_ptr create< ErrorStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createErrorStatement();
        }

        template< > inline AbstractStatementWithBody_ptr create<
                AbstractStatementWithBody >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createAbstractStatementWithBody();
        }

        template< > inline FileStatement_ptr create< FileStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createFileStatement();
        }

        template< > inline ForEachStatement_ptr create< ForEachStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createForEachStatement();
        }

        template< > inline IfStatement_ptr create< IfStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createIfStatement();
        }

        template< > inline LetStatement_ptr create< LetStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createLetStatement();
        }

        template< > inline ProtectStatement_ptr create< ProtectStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createProtectStatement();
        }

        template< > inline TextStatement_ptr create< TextStatement >()
        {
            auto eFactory =
                    StatementPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StatementFactory* >(eFactory.get());
            return packageFactory->createTextStatement();
        }

    } // statement
} // xpand3

#endif // _XPAND3_STATEMENTFACTORY_HPP

