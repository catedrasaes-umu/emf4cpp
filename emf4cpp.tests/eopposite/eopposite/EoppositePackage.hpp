// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositePackage.hpp
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

#ifndef _EOPPOSITEPACKAGE_HPP
#define _EOPPOSITEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <eopposite_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <eopposite/dllEopposite.hpp>

namespace eopposite
{

class EXPORT_EOPPOSITE_DLL EoppositePackage : public virtual ::ecore::EPackage
{
public:

    static EoppositePackage_ptr _instance();
    static EoppositePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int LEFTHAND = 0;

    static const int NAMEDOBJECT = 1;

    static const int RIGHTHAND = 2;

    static const int RIGHTMULTIPLE = 3;

    static const int TOPLEVEL = 4;

    static const int TOPLEVEL__LEFTEES = 0;

    static const int TOPLEVEL__RIGHTEES = 1;

    static const int TOPLEVEL__RIGHTMULTIPLES = 2;

    static const int NAMEDOBJECT__NAME = 3;

    static const int LEFTHAND__RIGHTEE = 4;

    static const int LEFTHAND__RIGHTMULTIPLE = 5;

    static const int RIGHTHAND__LEFTEE = 6;

    static const int RIGHTMULTIPLE__LEFTEES = 7;

    // IDs for classifiers for class LeftHand 

    static const int LEFTHAND__NAME = NAMEDOBJECT__NAME;

    // IDs for classifiers for class NamedObject 

    // IDs for classifiers for class RightHand 

    static const int RIGHTHAND__NAME = NAMEDOBJECT__NAME;

    // IDs for classifiers for class RightMultiple 

    static const int RIGHTMULTIPLE__NAME = NAMEDOBJECT__NAME;

    // IDs for classifiers for class TopLevel 

    static const int TOPLEVEL__NAME = NAMEDOBJECT__NAME;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getTopLevel();

    virtual ::ecore::EClass_ptr getNamedObject();

    virtual ::ecore::EClass_ptr getLeftHand();

    virtual ::ecore::EClass_ptr getRightHand();

    virtual ::ecore::EClass_ptr getRightMultiple();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getNamedObject__name();

    virtual ::ecore::EReference_ptr getTopLevel__leftees();

    virtual ::ecore::EReference_ptr getTopLevel__rightees();

    virtual ::ecore::EReference_ptr getTopLevel__rightMultiples();

    virtual ::ecore::EReference_ptr getLeftHand__rightee();

    virtual ::ecore::EReference_ptr getLeftHand__rightMultiple();

    virtual ::ecore::EReference_ptr getRightHand__leftee();

    virtual ::ecore::EReference_ptr getRightMultiple__leftees();

protected:

    static ::ecore::Ptr< EoppositePackage > s_instance;

    EoppositePackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_TopLevelEClass;

    ::ecore::EClass_ptr m_NamedObjectEClass;

    ::ecore::EClass_ptr m_LeftHandEClass;

    ::ecore::EClass_ptr m_RightHandEClass;

    ::ecore::EClass_ptr m_RightMultipleEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_NamedObject__name;

    ::ecore::EReference_ptr m_TopLevel__leftees;

    ::ecore::EReference_ptr m_TopLevel__rightees;

    ::ecore::EReference_ptr m_TopLevel__rightMultiples;

    ::ecore::EReference_ptr m_LeftHand__rightee;

    ::ecore::EReference_ptr m_LeftHand__rightMultiple;

    ::ecore::EReference_ptr m_RightHand__leftee;

    ::ecore::EReference_ptr m_RightMultiple__leftees;

};

}
 // eopposite

#endif // _EOPPOSITEPACKAGE_HPP

