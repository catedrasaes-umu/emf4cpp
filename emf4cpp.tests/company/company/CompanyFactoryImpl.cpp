// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyFactoryImpl.cpp
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

#include <company/CompanyFactory.hpp>
#include <company/CompanyPackage.hpp>
#include <company/Employee.hpp>
#include <company/Department.hpp>
#include <company/Company.hpp>
#include <company/PhonebookEntry.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::company;

CompanyFactory::CompanyFactory()
{
}

::ecore::EObject_ptr CompanyFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CompanyPackage::EMPLOYEE:
        return createEmployee();
    case CompanyPackage::DEPARTMENT:
        return createDepartment();
    case CompanyPackage::COMPANY:
        return createCompany();
    case CompanyPackage::PHONEBOOKENTRY:
        return createPhonebookEntry();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CompanyFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CompanyFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Employee_ptr CompanyFactory::createEmployee()
{
    return ::ecore::Ptr < Employee > (new Employee);
}
Department_ptr CompanyFactory::createDepartment()
{
    return ::ecore::Ptr < Department > (new Department);
}
Company_ptr CompanyFactory::createCompany()
{
    return ::ecore::Ptr < Company > (new Company);
}
PhonebookEntry_ptr CompanyFactory::createPhonebookEntry()
{
    return ::ecore::Ptr < PhonebookEntry > (new PhonebookEntry);
}

