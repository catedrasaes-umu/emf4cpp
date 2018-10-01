// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company_forward.hpp
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

#ifndef _COMPANY_FORWARD_HPP
#define _COMPANY_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(company_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace company
{

// EDataType

// EClass

// Employee
    class Employee;
    using Employee_ptr = ::ecore::Ptr<Employee>;

// Department
    class Department;
    using Department_ptr = ::ecore::Ptr<Department>;

// Company
    class Company;
    using Company_ptr = ::ecore::Ptr<Company>;

// PhonebookEntry
    class PhonebookEntry;
    using PhonebookEntry_ptr = ::ecore::Ptr<PhonebookEntry>;

// EEnum

// Package & Factory
    class CompanyFactory;
    using CompanyFactory_ptr = ::ecore::Ptr<CompanyFactory>;
    class CompanyPackage;
    using CompanyPackage_ptr = ::ecore::Ptr<CompanyPackage>;

} // company

#endif // _COMPANY_FORWARD_HPP

