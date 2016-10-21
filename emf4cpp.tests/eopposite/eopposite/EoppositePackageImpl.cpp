// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositePackageImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include <eopposite/EoppositePackage.hpp>
#include <eopposite/EoppositeFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::eopposite;

EoppositePackage::EoppositePackage()
{

    // Feature definitions of TopLevel
    m_TopLevel__leftees = new ::ecore::EReference();
    m_TopLevel__rightees = new ::ecore::EReference();
    m_TopLevel__rightMultiples = new ::ecore::EReference();

    // Feature definitions of NamedObject
    m_NamedObject__name = new ::ecore::EAttribute();

    // Feature definitions of LeftHand
    m_LeftHand__rightee = new ::ecore::EReference();
    m_LeftHand__rightMultiple = new ::ecore::EReference();

    // Feature definitions of RightHand
    m_RightHand__leftee = new ::ecore::EReference();

    // Feature definitions of RightMultiple
    m_RightMultiple__leftees = new ::ecore::EReference();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = EoppositeFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // TopLevel
    m_TopLevelEClass = new ::ecore::EClass();
    m_TopLevelEClass->setClassifierID(TOPLEVEL);
    m_TopLevelEClass->setEPackage(this);
    getEClassifiers().push_back(m_TopLevelEClass);
    // m_TopLevel__leftees has already been allocated above
    m_TopLevel__leftees->setFeatureID(
            ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES);
    m_TopLevelEClass->getEStructuralFeatures().push_back(m_TopLevel__leftees);
    // m_TopLevel__rightees has already been allocated above
    m_TopLevel__rightees->setFeatureID(
            ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES);
    m_TopLevelEClass->getEStructuralFeatures().push_back(m_TopLevel__rightees);
    // m_TopLevel__rightMultiples has already been allocated above
    m_TopLevel__rightMultiples->setFeatureID(
            ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES);
    m_TopLevelEClass->getEStructuralFeatures().push_back(
            m_TopLevel__rightMultiples);

    // NamedObject
    m_NamedObjectEClass = new ::ecore::EClass();
    m_NamedObjectEClass->setClassifierID(NAMEDOBJECT);
    m_NamedObjectEClass->setEPackage(this);
    getEClassifiers().push_back(m_NamedObjectEClass);
    // m_NamedObject__name has already been allocated above
    m_NamedObject__name->setFeatureID(
            ::eopposite::EoppositePackage::NAMEDOBJECT__NAME);
    m_NamedObjectEClass->getEStructuralFeatures().push_back(
            m_NamedObject__name);

    // LeftHand
    m_LeftHandEClass = new ::ecore::EClass();
    m_LeftHandEClass->setClassifierID(LEFTHAND);
    m_LeftHandEClass->setEPackage(this);
    getEClassifiers().push_back(m_LeftHandEClass);
    // m_LeftHand__rightee has already been allocated above
    m_LeftHand__rightee->setFeatureID(
            ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE);
    m_LeftHandEClass->getEStructuralFeatures().push_back(m_LeftHand__rightee);
    // m_LeftHand__rightMultiple has already been allocated above
    m_LeftHand__rightMultiple->setFeatureID(
            ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE);
    m_LeftHandEClass->getEStructuralFeatures().push_back(
            m_LeftHand__rightMultiple);

    // RightHand
    m_RightHandEClass = new ::ecore::EClass();
    m_RightHandEClass->setClassifierID(RIGHTHAND);
    m_RightHandEClass->setEPackage(this);
    getEClassifiers().push_back(m_RightHandEClass);
    // m_RightHand__leftee has already been allocated above
    m_RightHand__leftee->setFeatureID(
            ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE);
    m_RightHandEClass->getEStructuralFeatures().push_back(m_RightHand__leftee);

    // RightMultiple
    m_RightMultipleEClass = new ::ecore::EClass();
    m_RightMultipleEClass->setClassifierID(RIGHTMULTIPLE);
    m_RightMultipleEClass->setEPackage(this);
    getEClassifiers().push_back(m_RightMultipleEClass);
    // m_RightMultiple__leftees has already been allocated above
    m_RightMultiple__leftees->setFeatureID(
            ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES);
    m_RightMultipleEClass->getEStructuralFeatures().push_back(
            m_RightMultiple__leftees);

    // Create enums

    // Create data types

    // Initialize package
    setName("eopposite");
    setNsPrefix("eopposite");
    setNsURI("http:///com.example.eopposite.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_TopLevelEClass->getESuperTypes().push_back(m_NamedObjectEClass);
    m_LeftHandEClass->getESuperTypes().push_back(m_NamedObjectEClass);
    m_RightHandEClass->getESuperTypes().push_back(m_NamedObjectEClass);
    m_RightMultipleEClass->getESuperTypes().push_back(m_NamedObjectEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // TopLevel
    m_TopLevelEClass->setName("TopLevel");
    m_TopLevelEClass->setAbstract(false);
    m_TopLevelEClass->setInterface(false);
    m_TopLevel__leftees->setEType(m_LeftHandEClass);
    m_TopLevel__leftees->setName("leftees");
    m_TopLevel__leftees->setDefaultValueLiteral("");
    m_TopLevel__leftees->setLowerBound(0);
    m_TopLevel__leftees->setUpperBound(-1);
    m_TopLevel__leftees->setTransient(false);
    m_TopLevel__leftees->setVolatile(false);
    m_TopLevel__leftees->setChangeable(true);
    m_TopLevel__leftees->setContainment(true);
    m_TopLevel__leftees->setResolveProxies(true);
    m_TopLevel__leftees->setUnique(true);
    m_TopLevel__leftees->setDerived(false);
    m_TopLevel__leftees->setOrdered(true);
    m_TopLevel__rightees->setEType(m_RightHandEClass);
    m_TopLevel__rightees->setName("rightees");
    m_TopLevel__rightees->setDefaultValueLiteral("");
    m_TopLevel__rightees->setLowerBound(0);
    m_TopLevel__rightees->setUpperBound(-1);
    m_TopLevel__rightees->setTransient(false);
    m_TopLevel__rightees->setVolatile(false);
    m_TopLevel__rightees->setChangeable(true);
    m_TopLevel__rightees->setContainment(true);
    m_TopLevel__rightees->setResolveProxies(true);
    m_TopLevel__rightees->setUnique(true);
    m_TopLevel__rightees->setDerived(false);
    m_TopLevel__rightees->setOrdered(true);
    m_TopLevel__rightMultiples->setEType(m_RightMultipleEClass);
    m_TopLevel__rightMultiples->setName("rightMultiples");
    m_TopLevel__rightMultiples->setDefaultValueLiteral("");
    m_TopLevel__rightMultiples->setLowerBound(0);
    m_TopLevel__rightMultiples->setUpperBound(-1);
    m_TopLevel__rightMultiples->setTransient(false);
    m_TopLevel__rightMultiples->setVolatile(false);
    m_TopLevel__rightMultiples->setChangeable(true);
    m_TopLevel__rightMultiples->setContainment(true);
    m_TopLevel__rightMultiples->setResolveProxies(true);
    m_TopLevel__rightMultiples->setUnique(true);
    m_TopLevel__rightMultiples->setDerived(false);
    m_TopLevel__rightMultiples->setOrdered(true);
    // NamedObject
    m_NamedObjectEClass->setName("NamedObject");
    m_NamedObjectEClass->setAbstract(false);
    m_NamedObjectEClass->setInterface(false);
    m_NamedObject__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_NamedObject__name->setName("name");
    m_NamedObject__name->setDefaultValueLiteral("");
    m_NamedObject__name->setLowerBound(0);
    m_NamedObject__name->setUpperBound(1);
    m_NamedObject__name->setTransient(false);
    m_NamedObject__name->setVolatile(false);
    m_NamedObject__name->setChangeable(true);
    m_NamedObject__name->setUnsettable(false);
    m_NamedObject__name->setID(false);
    m_NamedObject__name->setUnique(true);
    m_NamedObject__name->setDerived(false);
    m_NamedObject__name->setOrdered(true);
    // LeftHand
    m_LeftHandEClass->setName("LeftHand");
    m_LeftHandEClass->setAbstract(false);
    m_LeftHandEClass->setInterface(false);
    m_LeftHand__rightee->setEType(m_RightHandEClass);
    m_LeftHand__rightee->setName("rightee");
    m_LeftHand__rightee->setDefaultValueLiteral("");
    m_LeftHand__rightee->setLowerBound(0);
    m_LeftHand__rightee->setUpperBound(1);
    m_LeftHand__rightee->setTransient(false);
    m_LeftHand__rightee->setVolatile(false);
    m_LeftHand__rightee->setChangeable(true);
    m_LeftHand__rightee->setContainment(false);
    m_LeftHand__rightee->setResolveProxies(true);
    m_LeftHand__rightee->setUnique(true);
    m_LeftHand__rightee->setDerived(false);
    m_LeftHand__rightee->setOrdered(true);
    m_LeftHand__rightee->setEOpposite(
            ::ecore::instanceOf < ::ecore::EReference
                    > (m_RightHandEClass->getEStructuralFeatures()[0]));
    m_LeftHand__rightMultiple->setEType(m_RightMultipleEClass);
    m_LeftHand__rightMultiple->setName("rightMultiple");
    m_LeftHand__rightMultiple->setDefaultValueLiteral("");
    m_LeftHand__rightMultiple->setLowerBound(0);
    m_LeftHand__rightMultiple->setUpperBound(1);
    m_LeftHand__rightMultiple->setTransient(false);
    m_LeftHand__rightMultiple->setVolatile(false);
    m_LeftHand__rightMultiple->setChangeable(true);
    m_LeftHand__rightMultiple->setContainment(false);
    m_LeftHand__rightMultiple->setResolveProxies(true);
    m_LeftHand__rightMultiple->setUnique(true);
    m_LeftHand__rightMultiple->setDerived(false);
    m_LeftHand__rightMultiple->setOrdered(true);
    m_LeftHand__rightMultiple->setEOpposite(
            ::ecore::instanceOf < ::ecore::EReference
                    > (m_RightMultipleEClass->getEStructuralFeatures()[0]));
    // RightHand
    m_RightHandEClass->setName("RightHand");
    m_RightHandEClass->setAbstract(false);
    m_RightHandEClass->setInterface(false);
    m_RightHand__leftee->setEType(m_LeftHandEClass);
    m_RightHand__leftee->setName("leftee");
    m_RightHand__leftee->setDefaultValueLiteral("");
    m_RightHand__leftee->setLowerBound(0);
    m_RightHand__leftee->setUpperBound(1);
    m_RightHand__leftee->setTransient(false);
    m_RightHand__leftee->setVolatile(false);
    m_RightHand__leftee->setChangeable(true);
    m_RightHand__leftee->setContainment(false);
    m_RightHand__leftee->setResolveProxies(true);
    m_RightHand__leftee->setUnique(true);
    m_RightHand__leftee->setDerived(false);
    m_RightHand__leftee->setOrdered(true);
    m_RightHand__leftee->setEOpposite(
            ::ecore::instanceOf < ::ecore::EReference
                    > (m_LeftHandEClass->getEStructuralFeatures()[0]));
    // RightMultiple
    m_RightMultipleEClass->setName("RightMultiple");
    m_RightMultipleEClass->setAbstract(false);
    m_RightMultipleEClass->setInterface(false);
    m_RightMultiple__leftees->setEType(m_LeftHandEClass);
    m_RightMultiple__leftees->setName("leftees");
    m_RightMultiple__leftees->setDefaultValueLiteral("");
    m_RightMultiple__leftees->setLowerBound(0);
    m_RightMultiple__leftees->setUpperBound(-1);
    m_RightMultiple__leftees->setTransient(false);
    m_RightMultiple__leftees->setVolatile(false);
    m_RightMultiple__leftees->setChangeable(true);
    m_RightMultiple__leftees->setContainment(false);
    m_RightMultiple__leftees->setResolveProxies(true);
    m_RightMultiple__leftees->setUnique(true);
    m_RightMultiple__leftees->setDerived(false);
    m_RightMultiple__leftees->setOrdered(true);
    m_RightMultiple__leftees->setEOpposite(
            ::ecore::instanceOf < ::ecore::EReference
                    > (m_LeftHandEClass->getEStructuralFeatures()[1]));

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr EoppositePackage::getTopLevel()
{
    return m_TopLevelEClass;
}
::ecore::EClass_ptr EoppositePackage::getNamedObject()
{
    return m_NamedObjectEClass;
}
::ecore::EClass_ptr EoppositePackage::getLeftHand()
{
    return m_LeftHandEClass;
}
::ecore::EClass_ptr EoppositePackage::getRightHand()
{
    return m_RightHandEClass;
}
::ecore::EClass_ptr EoppositePackage::getRightMultiple()
{
    return m_RightMultipleEClass;
}

::ecore::EAttribute_ptr EoppositePackage::getNamedObject__name()
{
    return m_NamedObject__name;
}
::ecore::EReference_ptr EoppositePackage::getTopLevel__leftees()
{
    return m_TopLevel__leftees;
}
::ecore::EReference_ptr EoppositePackage::getTopLevel__rightees()
{
    return m_TopLevel__rightees;
}
::ecore::EReference_ptr EoppositePackage::getTopLevel__rightMultiples()
{
    return m_TopLevel__rightMultiples;
}
::ecore::EReference_ptr EoppositePackage::getLeftHand__rightee()
{
    return m_LeftHand__rightee;
}
::ecore::EReference_ptr EoppositePackage::getLeftHand__rightMultiple()
{
    return m_LeftHand__rightMultiple;
}
::ecore::EReference_ptr EoppositePackage::getRightHand__leftee()
{
    return m_RightHand__leftee;
}
::ecore::EReference_ptr EoppositePackage::getRightMultiple__leftees()
{
    return m_RightMultiple__leftees;
}

