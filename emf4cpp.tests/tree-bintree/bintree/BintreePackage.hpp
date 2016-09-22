// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BintreePackage.hpp
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

#ifndef _BINTREEPACKAGE_HPP
#define _BINTREEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <bintree_forward.hpp>

namespace bintree
{

    class BintreePackage: public virtual ::ecore::EPackage
    {
    public:

        static BintreePackage_ptr _instance();

        // IDs for classifiers

        static const int BINTREENODE = 0;

        static const int BINTREENODE__PARENT = 0;

        static const int BINTREENODE__LEFT = 1;

        static const int BINTREENODE__RIGHT = 2;

        static const int BINTREENODE__DATA = 3;

        // IDs for classifiers for class BinTreeNode 

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getBinTreeNode();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getBinTreeNode__parent();

        virtual ::ecore::EReference_ptr getBinTreeNode__left();

        virtual ::ecore::EReference_ptr getBinTreeNode__right();

        virtual ::ecore::EAttribute_ptr getBinTreeNode__data();

    protected:

        static std::auto_ptr< BintreePackage > s_instance;

        BintreePackage();

        // EClass instances 

        ::ecore::EClass_ptr m_BinTreeNodeEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_BinTreeNode__parent;

        ::ecore::EReference_ptr m_BinTreeNode__left;

        ::ecore::EReference_ptr m_BinTreeNode__right;

        ::ecore::EAttribute_ptr m_BinTreeNode__data;

    };

} // bintree

#endif // _BINTREEPACKAGE_HPP

