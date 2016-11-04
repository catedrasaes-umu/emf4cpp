// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorFactory.hpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
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

        static std::unique_ptr< TreeiteratorFactory > s_instance;

        TreeiteratorFactory();

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

    template< > inline TreeNode_ptr create< TreeNode >()
    {
        auto eFactory = TreeiteratorPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TreeiteratorFactory* >(eFactory);
        return packageFactory->createTreeNode();
    }
    template< > inline Leaf_ptr create< Leaf >()
    {
        auto eFactory = TreeiteratorPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TreeiteratorFactory* >(eFactory);
        return packageFactory->createLeaf();
    }

} // treeiterator

#endif // _TREEITERATORFACTORY_HPP

