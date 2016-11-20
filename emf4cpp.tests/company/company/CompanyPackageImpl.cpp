// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyPackageImpl.cpp
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

#include <company/CompanyPackage.hpp>
#include <company/CompanyFactory.hpp>
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

using namespace ::company;

CompanyPackage::CompanyPackage()
{

    // Feature definitions of Employee
    m_Employee__name = new ::ecore::EAttribute();
    m_Employee__phonebookEntry = new ::ecore::EReference();

    // Feature definitions of Department
    m_Department__number = new ::ecore::EAttribute();
    m_Department__employees = new ::ecore::EReference();
    m_Department__manager = new ::ecore::EReference();

    // Feature definitions of Company
    m_Company__name = new ::ecore::EAttribute();
    m_Company__departments = new ::ecore::EReference();

    // Feature definitions of PhonebookEntry

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = CompanyFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Employee
    m_EmployeeEClass = new ::ecore::EClass();
    m_EmployeeEClass->setClassifierID(EMPLOYEE);
    m_EmployeeEClass->setEPackage(this);
    getEClassifiers().push_back(m_EmployeeEClass);
    // m_Employee__name has already been allocated above
    m_Employee__name->setFeatureID(::company::CompanyPackage::EMPLOYEE__NAME);
    m_EmployeeEClass->getEStructuralFeatures().push_back(m_Employee__name);
    // m_Employee__phonebookEntry has already been allocated above
    m_Employee__phonebookEntry->setFeatureID(
            ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY);
    m_EmployeeEClass->getEStructuralFeatures().push_back(
            m_Employee__phonebookEntry);

    // Department
    m_DepartmentEClass = new ::ecore::EClass();
    m_DepartmentEClass->setClassifierID(DEPARTMENT);
    m_DepartmentEClass->setEPackage(this);
    getEClassifiers().push_back(m_DepartmentEClass);
    // m_Department__number has already been allocated above
    m_Department__number->setFeatureID(
            ::company::CompanyPackage::DEPARTMENT__NUMBER);
    m_DepartmentEClass->getEStructuralFeatures().push_back(
            m_Department__number);
    // m_Department__employees has already been allocated above
    m_Department__employees->setFeatureID(
            ::company::CompanyPackage::DEPARTMENT__EMPLOYEES);
    m_DepartmentEClass->getEStructuralFeatures().push_back(
            m_Department__employees);
    // m_Department__manager has already been allocated above
    m_Department__manager->setFeatureID(
            ::company::CompanyPackage::DEPARTMENT__MANAGER);
    m_DepartmentEClass->getEStructuralFeatures().push_back(
            m_Department__manager);

    // Company
    m_CompanyEClass = new ::ecore::EClass();
    m_CompanyEClass->setClassifierID(COMPANY);
    m_CompanyEClass->setEPackage(this);
    getEClassifiers().push_back(m_CompanyEClass);
    // m_Company__name has already been allocated above
    m_Company__name->setFeatureID(::company::CompanyPackage::COMPANY__NAME);
    m_CompanyEClass->getEStructuralFeatures().push_back(m_Company__name);
    // m_Company__departments has already been allocated above
    m_Company__departments->setFeatureID(
            ::company::CompanyPackage::COMPANY__DEPARTMENTS);
    m_CompanyEClass->getEStructuralFeatures().push_back(m_Company__departments);

    // PhonebookEntry
    m_PhonebookEntryEClass = new ::ecore::EClass();
    m_PhonebookEntryEClass->setClassifierID(PHONEBOOKENTRY);
    m_PhonebookEntryEClass->setEPackage(this);
    getEClassifiers().push_back(m_PhonebookEntryEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("company");
    setNsPrefix("company");
    setNsURI("http:///com.example.company.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Employee
    m_EmployeeEClass->setName("Employee");
    m_EmployeeEClass->setAbstract(false);
    m_EmployeeEClass->setInterface(false);
    m_Employee__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Employee__name->setName("name");
    m_Employee__name->setDefaultValueLiteral("");
    m_Employee__name->setLowerBound(0);
    m_Employee__name->setUpperBound(1);
    m_Employee__name->setTransient(false);
    m_Employee__name->setVolatile(false);
    m_Employee__name->setChangeable(true);
    m_Employee__name->setUnsettable(false);
    m_Employee__name->setID(false);
    m_Employee__name->setUnique(true);
    m_Employee__name->setDerived(false);
    m_Employee__name->setOrdered(true);
    m_Employee__phonebookEntry->setEType(m_PhonebookEntryEClass);
    m_Employee__phonebookEntry->setName("phonebookEntry");
    m_Employee__phonebookEntry->setDefaultValueLiteral("");
    m_Employee__phonebookEntry->setLowerBound(0);
    m_Employee__phonebookEntry->setUpperBound(1);
    m_Employee__phonebookEntry->setTransient(false);
    m_Employee__phonebookEntry->setVolatile(false);
    m_Employee__phonebookEntry->setChangeable(true);
    m_Employee__phonebookEntry->setContainment(true);
    m_Employee__phonebookEntry->setResolveProxies(true);
    m_Employee__phonebookEntry->setUnique(true);
    m_Employee__phonebookEntry->setDerived(false);
    m_Employee__phonebookEntry->setOrdered(true);
    // Department
    m_DepartmentEClass->setName("Department");
    m_DepartmentEClass->setAbstract(false);
    m_DepartmentEClass->setInterface(false);
    m_Department__number->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEInt());
    m_Department__number->setName("number");
    m_Department__number->setDefaultValueLiteral("");
    m_Department__number->setLowerBound(0);
    m_Department__number->setUpperBound(1);
    m_Department__number->setTransient(false);
    m_Department__number->setVolatile(false);
    m_Department__number->setChangeable(true);
    m_Department__number->setUnsettable(false);
    m_Department__number->setID(false);
    m_Department__number->setUnique(true);
    m_Department__number->setDerived(false);
    m_Department__number->setOrdered(true);
    m_Department__employees->setEType(m_EmployeeEClass);
    m_Department__employees->setName("employees");
    m_Department__employees->setDefaultValueLiteral("");
    m_Department__employees->setLowerBound(0);
    m_Department__employees->setUpperBound(-1);
    m_Department__employees->setTransient(false);
    m_Department__employees->setVolatile(false);
    m_Department__employees->setChangeable(true);
    m_Department__employees->setContainment(true);
    m_Department__employees->setResolveProxies(true);
    m_Department__employees->setUnique(true);
    m_Department__employees->setDerived(false);
    m_Department__employees->setOrdered(true);
    m_Department__manager->setEType(m_EmployeeEClass);
    m_Department__manager->setName("manager");
    m_Department__manager->setDefaultValueLiteral("");
    m_Department__manager->setLowerBound(1);
    m_Department__manager->setUpperBound(1);
    m_Department__manager->setTransient(false);
    m_Department__manager->setVolatile(false);
    m_Department__manager->setChangeable(true);
    m_Department__manager->setContainment(false);
    m_Department__manager->setResolveProxies(true);
    m_Department__manager->setUnique(true);
    m_Department__manager->setDerived(false);
    m_Department__manager->setOrdered(true);
    // Company
    m_CompanyEClass->setName("Company");
    m_CompanyEClass->setAbstract(false);
    m_CompanyEClass->setInterface(false);
    m_Company__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Company__name->setName("name");
    m_Company__name->setDefaultValueLiteral("");
    m_Company__name->setLowerBound(0);
    m_Company__name->setUpperBound(1);
    m_Company__name->setTransient(false);
    m_Company__name->setVolatile(false);
    m_Company__name->setChangeable(true);
    m_Company__name->setUnsettable(false);
    m_Company__name->setID(false);
    m_Company__name->setUnique(true);
    m_Company__name->setDerived(false);
    m_Company__name->setOrdered(true);
    m_Company__departments->setEType(m_DepartmentEClass);
    m_Company__departments->setName("departments");
    m_Company__departments->setDefaultValueLiteral("");
    m_Company__departments->setLowerBound(0);
    m_Company__departments->setUpperBound(-1);
    m_Company__departments->setTransient(false);
    m_Company__departments->setVolatile(false);
    m_Company__departments->setChangeable(true);
    m_Company__departments->setContainment(true);
    m_Company__departments->setResolveProxies(true);
    m_Company__departments->setUnique(true);
    m_Company__departments->setDerived(false);
    m_Company__departments->setOrdered(true);
    // PhonebookEntry
    m_PhonebookEntryEClass->setName("PhonebookEntry");
    m_PhonebookEntryEClass->setAbstract(false);
    m_PhonebookEntryEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr CompanyPackage::getEmployee()
{
    return m_EmployeeEClass;
}
::ecore::EClass_ptr CompanyPackage::getDepartment()
{
    return m_DepartmentEClass;
}
::ecore::EClass_ptr CompanyPackage::getCompany()
{
    return m_CompanyEClass;
}
::ecore::EClass_ptr CompanyPackage::getPhonebookEntry()
{
    return m_PhonebookEntryEClass;
}

::ecore::EAttribute_ptr CompanyPackage::getEmployee__name()
{
    return m_Employee__name;
}
::ecore::EReference_ptr CompanyPackage::getEmployee__phonebookEntry()
{
    return m_Employee__phonebookEntry;
}
::ecore::EReference_ptr CompanyPackage::getDepartment__employees()
{
    return m_Department__employees;
}
::ecore::EReference_ptr CompanyPackage::getDepartment__manager()
{
    return m_Department__manager;
}
::ecore::EAttribute_ptr CompanyPackage::getDepartment__number()
{
    return m_Department__number;
}
::ecore::EAttribute_ptr CompanyPackage::getCompany__name()
{
    return m_Company__name;
}
::ecore::EReference_ptr CompanyPackage::getCompany__departments()
{
    return m_Company__departments;
}

