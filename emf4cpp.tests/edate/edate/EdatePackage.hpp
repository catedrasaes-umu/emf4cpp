// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/EdatePackage.hpp
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

#ifndef _EDATEPACKAGE_HPP
#define _EDATEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <edate_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <edate/dllEdate.hpp>

namespace edate
{

class EXPORT_EDATE_DLL EdatePackage : public virtual ::ecore::EPackage
{
public:

    static EdatePackage_ptr _instance();
    static EdatePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int APOLLO11 = 0;

    static const int PERSON = 1;

    static const int PERSON__BIRTHDAY = 0;

    static const int PERSON__NAME = 1;

    static const int APOLLO11__FIRSTMANONMOONDATE = 2;

    static const int APOLLO11__MEMBER = 3;

    // IDs for classifiers for class Apollo11 

    // IDs for classifiers for class Person 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getPerson();

    virtual ::ecore::EClass_ptr getApollo11();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getPerson__Birthday();

    virtual ::ecore::EAttribute_ptr getPerson__Name();

    virtual ::ecore::EAttribute_ptr getApollo11__FirstManOnMoonDate();

    virtual ::ecore::EReference_ptr getApollo11__Member();

protected:

    static ::ecore::Ptr< EdatePackage > s_instance;

    EdatePackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_PersonEClass;

    ::ecore::EClass_ptr m_Apollo11EClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Person__Birthday;

    ::ecore::EAttribute_ptr m_Person__Name;

    ::ecore::EAttribute_ptr m_Apollo11__FirstManOnMoonDate;

    ::ecore::EReference_ptr m_Apollo11__Member;

};

}
 // edate

#endif // _EDATEPACKAGE_HPP

