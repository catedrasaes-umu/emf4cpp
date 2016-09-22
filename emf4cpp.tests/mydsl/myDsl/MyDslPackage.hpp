// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslPackage.hpp
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

#ifndef _MYDSLPACKAGE_HPP
#define _MYDSLPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <myDsl_forward.hpp>

namespace myDsl
{

    class MyDslPackage: public virtual ::ecore::EPackage
    {
    public:

        static MyDslPackage_ptr _instance();

        // IDs for classifiers

        static const int ENTITY = 0;

        static const int IMPORT = 1;

        static const int MODEL = 2;

        static const int PROPERTY = 3;

        static const int SIMPLETYPE = 4;

        static const int TYPE = 5;

        static const int MODEL__IMPORTS = 0;

        static const int MODEL__ELEMENTS = 1;

        static const int IMPORT__IMPORTURI = 2;

        static const int TYPE__NAME = 3;

        static const int ENTITY__EXTENDS = 4;

        static const int ENTITY__PROPERTIES = 5;

        static const int PROPERTY__NAME = 6;

        static const int PROPERTY__TYPE = 7;

        static const int PROPERTY__MANY = 8;

        // IDs for classifiers for class Entity 

        static const int ENTITY__NAME = TYPE__NAME;

        // IDs for classifiers for class Import 

        // IDs for classifiers for class Model 

        // IDs for classifiers for class Property 

        // IDs for classifiers for class SimpleType 

        static const int SIMPLETYPE__NAME = TYPE__NAME;

        // IDs for classifiers for class Type 

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getModel();

        virtual ::ecore::EClass_ptr getImport();

        virtual ::ecore::EClass_ptr getType();

        virtual ::ecore::EClass_ptr getSimpleType();

        virtual ::ecore::EClass_ptr getEntity();

        virtual ::ecore::EClass_ptr getProperty();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getModel__imports();

        virtual ::ecore::EReference_ptr getModel__elements();

        virtual ::ecore::EAttribute_ptr getImport__importURI();

        virtual ::ecore::EAttribute_ptr getType__name();

        virtual ::ecore::EReference_ptr getEntity__extends();

        virtual ::ecore::EReference_ptr getEntity__properties();

        virtual ::ecore::EAttribute_ptr getProperty__name();

        virtual ::ecore::EReference_ptr getProperty__type();

        virtual ::ecore::EAttribute_ptr getProperty__many();

    protected:

        static std::auto_ptr< MyDslPackage > s_instance;

        MyDslPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ModelEClass;

        ::ecore::EClass_ptr m_ImportEClass;

        ::ecore::EClass_ptr m_TypeEClass;

        ::ecore::EClass_ptr m_SimpleTypeEClass;

        ::ecore::EClass_ptr m_EntityEClass;

        ::ecore::EClass_ptr m_PropertyEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Model__imports;

        ::ecore::EReference_ptr m_Model__elements;

        ::ecore::EAttribute_ptr m_Import__importURI;

        ::ecore::EAttribute_ptr m_Type__name;

        ::ecore::EReference_ptr m_Entity__extends;

        ::ecore::EReference_ptr m_Entity__properties;

        ::ecore::EAttribute_ptr m_Property__name;

        ::ecore::EReference_ptr m_Property__type;

        ::ecore::EAttribute_ptr m_Property__many;

    };

} // myDsl

#endif // _MYDSLPACKAGE_HPP

