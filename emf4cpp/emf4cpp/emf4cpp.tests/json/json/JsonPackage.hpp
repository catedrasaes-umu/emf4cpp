// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonPackage.hpp
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

#ifndef _JSONPACKAGE_HPP
#define _JSONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <json_forward.hpp>

namespace json
{

    class JsonPackage: public virtual ::ecore::EPackage
    {
    public:

        static JsonPackage_ptr _instance();

        // IDs for classifiers

        static const int ARRAYVALUE = 0;

        static const int BOOLEANVALUE = 1;

        static const int NULLVALUE = 2;

        static const int NUMBERVALUE = 3;

        static const int NVPAIR = 4;

        static const int OBJECTVALUE = 5;

        static const int STRINGVALUE = 6;

        static const int VALUE = 7;

        static const int OBJECTVALUE__MEMBERS = 0;

        static const int NVPAIR__NAME = 1;

        static const int NVPAIR__VALUE = 2;

        static const int STRINGVALUE__VALUE = 3;

        static const int NUMBERVALUE__VALUE = 4;

        static const int BOOLEANVALUE__VALUE = 5;

        static const int ARRAYVALUE__VALUES = 6;

        // IDs for classifiers for class ArrayValue 


        // IDs for classifiers for class BooleanValue 


        // IDs for classifiers for class NullValue 


        // IDs for classifiers for class NumberValue 


        // IDs for classifiers for class NVPair 


        // IDs for classifiers for class ObjectValue 


        // IDs for classifiers for class StringValue 


        // IDs for classifiers for class Value 


        // EClassifiers methods

        virtual ::ecore::EClass_ptr getObjectValue();

        virtual ::ecore::EClass_ptr getNVPair();

        virtual ::ecore::EClass_ptr getValue();

        virtual ::ecore::EClass_ptr getStringValue();

        virtual ::ecore::EClass_ptr getNumberValue();

        virtual ::ecore::EClass_ptr getBooleanValue();

        virtual ::ecore::EClass_ptr getArrayValue();

        virtual ::ecore::EClass_ptr getNullValue();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getObjectValue__members();

        virtual ::ecore::EAttribute_ptr getNVPair__name();

        virtual ::ecore::EReference_ptr getNVPair__value();

        virtual ::ecore::EAttribute_ptr getStringValue__value();

        virtual ::ecore::EAttribute_ptr getNumberValue__value();

        virtual ::ecore::EAttribute_ptr getBooleanValue__value();

        virtual ::ecore::EReference_ptr getArrayValue__values();

    protected:

        static std::auto_ptr< JsonPackage > s_instance;

        JsonPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ObjectValueEClass;

        ::ecore::EClass_ptr m_NVPairEClass;

        ::ecore::EClass_ptr m_ValueEClass;

        ::ecore::EClass_ptr m_StringValueEClass;

        ::ecore::EClass_ptr m_NumberValueEClass;

        ::ecore::EClass_ptr m_BooleanValueEClass;

        ::ecore::EClass_ptr m_ArrayValueEClass;

        ::ecore::EClass_ptr m_NullValueEClass;

        // EEnuminstances 


        // EDataType instances 


        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_ObjectValue__members;

        ::ecore::EAttribute_ptr m_NVPair__name;

        ::ecore::EReference_ptr m_NVPair__value;

        ::ecore::EAttribute_ptr m_StringValue__value;

        ::ecore::EAttribute_ptr m_NumberValue__value;

        ::ecore::EAttribute_ptr m_BooleanValue__value;

        ::ecore::EReference_ptr m_ArrayValue__values;

    };

} // json


#endif // _JSONPACKAGE_HPP
