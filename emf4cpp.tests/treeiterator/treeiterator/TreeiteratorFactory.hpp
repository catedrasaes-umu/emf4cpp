// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorFactory.hpp
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

#ifndef _TREEITERATORFACTORY_HPP
#define _TREEITERATORFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <treeiterator.hpp>

#include <treeiterator/dllTreeiterator.hpp>

namespace treeiterator
{

    class EXPORT_TREEITERATOR_DLL TreeiteratorFactory : public virtual ::ecore::EFactory
    {
    public:

        static TreeiteratorFactory_ptr _instance();

        virtual TreeNode_ptr createTreeNode();
        virtual Leaf_ptr createLeaf();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< TreeiteratorFactory > s_holder;

        TreeiteratorFactory();

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

    template< > inline TreeNode_ptr create< TreeNode >()
    {
        auto eFactory = TreeiteratorPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< TreeiteratorFactory* >(eFactory.get());
        return packageFactory->createTreeNode();
    }

    template< > inline Leaf_ptr create< Leaf >()
    {
        auto eFactory = TreeiteratorPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< TreeiteratorFactory* >(eFactory.get());
        return packageFactory->createLeaf();
    }

} // treeiterator

#endif // _TREEITERATORFACTORY_HPP

