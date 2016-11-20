// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTFactory.hpp
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

#ifndef _CSTFACTORY_HPP
#define _CSTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <CST.hpp>

#include <CST/dllCST.hpp>

namespace CST
{

    class EXPORT_CST_DLL CSTFactory : public virtual ::ecore::EFactory
    {
    public:

        static CSTFactory_ptr _instance();

        virtual Tree_ptr createTree();
        virtual Element_ptr createElement();
        virtual Node_ptr createNode();
        virtual Leaf_ptr createLeaf();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< CSTFactory > s_instance;

        CSTFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline T* create()
    {
        return (T*) nullptr;
    }

    template< > inline Tree_ptr create< Tree >()
    {
        auto eFactory = CSTPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CSTFactory* >(eFactory);
        return packageFactory->createTree();
    }
    template< > inline Element_ptr create< Element >()
    {
        auto eFactory = CSTPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CSTFactory* >(eFactory);
        return packageFactory->createElement();
    }
    template< > inline Node_ptr create< Node >()
    {
        auto eFactory = CSTPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CSTFactory* >(eFactory);
        return packageFactory->createNode();
    }
    template< > inline Leaf_ptr create< Leaf >()
    {
        auto eFactory = CSTPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CSTFactory* >(eFactory);
        return packageFactory->createLeaf();
    }

} // CST

#endif // _CSTFACTORY_HPP

