// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ResourceTestsPackage.hpp
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

#ifndef _RESOURCETESTSPACKAGE_HPP
#define _RESOURCETESTSPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <ResourceTests_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <ResourceTests/dllResourceTests.hpp>

namespace ResourceTests
{

class EXPORT_RESOURCETESTS_DLL ResourceTestsPackage : public virtual ::ecore::EPackage
{
public:

    static ResourceTestsPackage_ptr _instance();
    static ResourceTestsPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ETYPES = 0;

    static const int REFERENCETARGET = 1;

    static const int REFERRER = 2;

    static const int ROOT = 3;

    static const int ROOT__TARGET = 0;

    static const int ROOT__REFERRERS = 1;

    static const int REFERRER__REFERENCE = 2;

    static const int ETYPES__STRING = 3;

    static const int ETYPES__EMPTYSTRING = 4;

    static const int ETYPES__DATE = 5;

    static const int ETYPES__CHAR = 6;

    static const int ETYPES__BOOL = 7;

    static const int ETYPES__DOUBLE = 8;

    static const int ETYPES__INT = 9;

    // IDs for classifiers for class ETypes 

    // IDs for classifiers for class ReferenceTarget 

    // IDs for classifiers for class Referrer 

    // IDs for classifiers for class Root 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getRoot();

    virtual ::ecore::EClass_ptr getReferenceTarget();

    virtual ::ecore::EClass_ptr getReferrer();

    virtual ::ecore::EClass_ptr getETypes();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getRoot__target();

    virtual ::ecore::EReference_ptr getRoot__referrers();

    virtual ::ecore::EReference_ptr getReferrer__reference();

    virtual ::ecore::EAttribute_ptr getETypes__string();

    virtual ::ecore::EAttribute_ptr getETypes__emptyString();

    virtual ::ecore::EAttribute_ptr getETypes__date();

    virtual ::ecore::EAttribute_ptr getETypes__char();

    virtual ::ecore::EAttribute_ptr getETypes__bool();

    virtual ::ecore::EAttribute_ptr getETypes__double();

    virtual ::ecore::EAttribute_ptr getETypes__int();

protected:

    static ::ecore::Ptr< ResourceTestsPackage > s_instance;

    ResourceTestsPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_RootEClass;

    ::ecore::EClass_ptr m_ReferenceTargetEClass;

    ::ecore::EClass_ptr m_ReferrerEClass;

    ::ecore::EClass_ptr m_ETypesEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Root__target;

    ::ecore::EReference_ptr m_Root__referrers;

    ::ecore::EReference_ptr m_Referrer__reference;

    ::ecore::EAttribute_ptr m_ETypes__string;

    ::ecore::EAttribute_ptr m_ETypes__emptyString;

    ::ecore::EAttribute_ptr m_ETypes__date;

    ::ecore::EAttribute_ptr m_ETypes__char;

    ::ecore::EAttribute_ptr m_ETypes__bool;

    ::ecore::EAttribute_ptr m_ETypes__double;

    ::ecore::EAttribute_ptr m_ETypes__int;

};

}
 // ResourceTests

#endif // _RESOURCETESTSPACKAGE_HPP

