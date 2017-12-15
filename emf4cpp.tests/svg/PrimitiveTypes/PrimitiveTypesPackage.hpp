// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * PrimitiveTypes/PrimitiveTypesPackage.hpp
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

#ifndef _PRIMITIVETYPESPACKAGE_HPP
#define _PRIMITIVETYPESPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <PrimitiveTypes_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <PrimitiveTypes/dllPrimitiveTypes.hpp>

namespace PrimitiveTypes
{

class EXPORT_PRIMITIVETYPES_DLL PrimitiveTypesPackage : public virtual ::ecore::EPackage
{
public:

    static PrimitiveTypesPackage_ptr _instance();
    static PrimitiveTypesPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int BOOLEAN = 0;

    static const int DOUBLE = 1;

    static const int INTEGER = 2;

    static const int STRING = 3;

    // EClassifiers methods

    virtual ::ecore::EDataType_ptr getBoolean();

    virtual ::ecore::EDataType_ptr getInteger();

    virtual ::ecore::EDataType_ptr getString();

    virtual ::ecore::EDataType_ptr getDouble();

    // EStructuralFeatures methods

protected:

    static boost::intrusive_ptr< PrimitiveTypesPackage > s_instance;

    PrimitiveTypesPackage();
    void _initPackage();

    // EClass instances 

    // EEnuminstances 

    // EDataType instances 

    ::ecore::EDataType_ptr m_BooleanEDataType;

    ::ecore::EDataType_ptr m_IntegerEDataType;

    ::ecore::EDataType_ptr m_StringEDataType;

    ::ecore::EDataType_ptr m_DoubleEDataType;

    // EStructuralFeatures instances

};

}
 // PrimitiveTypes

#endif // _PRIMITIVETYPESPACKAGE_HPP

