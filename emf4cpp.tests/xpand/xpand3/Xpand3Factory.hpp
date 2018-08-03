// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/Xpand3Factory.hpp
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

#ifndef _XPAND3FACTORY_HPP
#define _XPAND3FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{

    class EXPORT_XPAND3_DLL Xpand3Factory : public virtual ::ecore::EFactory
    {
    public:

        static Xpand3Factory_ptr _instance();

        virtual SyntaxElement_ptr createSyntaxElement();
        virtual File_ptr createFile();
        virtual ImportStatement_ptr createImportStatement();
        virtual Identifier_ptr createIdentifier();
        virtual DeclaredParameter_ptr createDeclaredParameter();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< Xpand3Factory > s_holder;

        Xpand3Factory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline SyntaxElement_ptr create< SyntaxElement >()
    {
        auto eFactory = Xpand3Package::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< Xpand3Factory* >(eFactory.get());
        return packageFactory->createSyntaxElement();
    }

    template< > inline File_ptr create< File >()
    {
        auto eFactory = Xpand3Package::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< Xpand3Factory* >(eFactory.get());
        return packageFactory->createFile();
    }

    template< > inline ImportStatement_ptr create< ImportStatement >()
    {
        auto eFactory = Xpand3Package::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< Xpand3Factory* >(eFactory.get());
        return packageFactory->createImportStatement();
    }

    template< > inline Identifier_ptr create< Identifier >()
    {
        auto eFactory = Xpand3Package::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< Xpand3Factory* >(eFactory.get());
        return packageFactory->createIdentifier();
    }

    template< > inline DeclaredParameter_ptr create< DeclaredParameter >()
    {
        auto eFactory = Xpand3Package::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< Xpand3Factory* >(eFactory.get());
        return packageFactory->createDeclaredParameter();
    }

} // xpand3

#endif // _XPAND3FACTORY_HPP

