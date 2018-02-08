// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceOptions/ResourceOptionsPackage.hpp
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

#ifndef _RESOURCEOPTIONSPACKAGE_HPP
#define _RESOURCEOPTIONSPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <ResourceOptions_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <ResourceOptions/dllResourceOptions.hpp>

namespace ResourceOptions
{

class EXPORT_RESOURCEOPTIONS_DLL ResourceOptionsPackage : public virtual ::ecore::EPackage
{
public:

    static ResourceOptionsPackage_ptr _instance();
    static ResourceOptionsPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ETYPES = 0;

    static const int ETYPES__STRING = 0;

    static const int ETYPES__EMPTYSTRING = 1;

    static const int ETYPES__DATE = 2;

    static const int ETYPES__CHAR = 3;

    static const int ETYPES__BOOL = 4;

    static const int ETYPES__DOUBLE = 5;

    static const int ETYPES__INT = 6;

    // IDs for classifiers for class ETypes 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getETypes();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getETypes__string();

    virtual ::ecore::EAttribute_ptr getETypes__emptyString();

    virtual ::ecore::EAttribute_ptr getETypes__date();

    virtual ::ecore::EAttribute_ptr getETypes__char();

    virtual ::ecore::EAttribute_ptr getETypes__bool();

    virtual ::ecore::EAttribute_ptr getETypes__double();

    virtual ::ecore::EAttribute_ptr getETypes__int();

protected:

    static boost::intrusive_ptr< ResourceOptionsPackage > s_instance;

    ResourceOptionsPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ETypesEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_ETypes__string;

    ::ecore::EAttribute_ptr m_ETypes__emptyString;

    ::ecore::EAttribute_ptr m_ETypes__date;

    ::ecore::EAttribute_ptr m_ETypes__char;

    ::ecore::EAttribute_ptr m_ETypes__bool;

    ::ecore::EAttribute_ptr m_ETypes__double;

    ::ecore::EAttribute_ptr m_ETypes__int;

};

}
 // ResourceOptions

#endif // _RESOURCEOPTIONSPACKAGE_HPP

