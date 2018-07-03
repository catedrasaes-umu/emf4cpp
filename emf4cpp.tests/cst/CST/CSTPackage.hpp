// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTPackage.hpp
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

#ifndef _CSTPACKAGE_HPP
#define _CSTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <CST_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

namespace CST
{

    class CSTPackage: public virtual ::ecore::EPackage
    {
    public:

        static CSTPackage_ptr _instance();
        static CSTPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ELEMENT = 0;

        static const int LEAF = 1;

        static const int NODE = 2;

        static const int TREE = 3;

        static const int ELEMENT__KIND = 0;

        static const int NODE__CHILDREN = 1;

        static const int LEAF__VALUE = 2;

        static const int LEAF__POS = 3;

        static const int LEAF__LINE = 4;

        // IDs for classifiers for class Element 

        // IDs for classifiers for class Leaf 

        static const int LEAF__KIND = ELEMENT__KIND;

        // IDs for classifiers for class Node 

        static const int NODE__KIND = ELEMENT__KIND;

        // IDs for classifiers for class Tree 

        static const int TREE__KIND = ELEMENT__KIND;

        static const int TREE__CHILDREN = NODE__CHILDREN;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getTree();

        virtual ::ecore::EClass_ptr getElement();

        virtual ::ecore::EClass_ptr getNode();

        virtual ::ecore::EClass_ptr getLeaf();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getElement__kind();

        virtual ::ecore::EReference_ptr getNode__children();

        virtual ::ecore::EAttribute_ptr getLeaf__value();

        virtual ::ecore::EAttribute_ptr getLeaf__pos();

        virtual ::ecore::EAttribute_ptr getLeaf__line();

    protected:

        static std::unique_ptr< CSTPackage,
                ::ecorecpp::PackageDeleter< CSTPackage > > s_instance;

        CSTPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_TreeEClass;

        ::ecore::EClass_ptr m_ElementEClass;

        ::ecore::EClass_ptr m_NodeEClass;

        ::ecore::EClass_ptr m_LeafEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Element__kind;

        ::ecore::EReference_ptr m_Node__children;

        ::ecore::EAttribute_ptr m_Leaf__value;

        ::ecore::EAttribute_ptr m_Leaf__pos;

        ::ecore::EAttribute_ptr m_Leaf__line;

    };

} // CST

#endif // _CSTPACKAGE_HPP

