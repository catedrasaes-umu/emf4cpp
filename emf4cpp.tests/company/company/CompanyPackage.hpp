// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyPackage.hpp
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

#ifndef _COMPANYPACKAGE_HPP
#define _COMPANYPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <company_forward.hpp>

namespace company
{

    class CompanyPackage: public virtual ::ecore::EPackage
    {
    public:

        static CompanyPackage_ptr _instance();

        // IDs for classifiers

        static const int COMPANY = 0;

        static const int DEPARTMENT = 1;

        static const int EMPLOYEE = 2;

        static const int EMPLOYEE__NAME = 0;

        static const int DEPARTMENT__EMPLOYEES = 1;

        static const int DEPARTMENT__MANAGER = 2;

        static const int DEPARTMENT__NUMBER = 3;

        static const int COMPANY__NAME = 4;

        static const int COMPANY__DEPARTMENTS = 5;

        // IDs for classifiers for class Company 


        // IDs for classifiers for class Department 


        // IDs for classifiers for class Employee 


        // EClassifiers methods

        virtual ::ecore::EClass_ptr getEmployee();

        virtual ::ecore::EClass_ptr getDepartment();

        virtual ::ecore::EClass_ptr getCompany();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getEmployee__name();

        virtual ::ecore::EReference_ptr getDepartment__employees();

        virtual ::ecore::EReference_ptr getDepartment__manager();

        virtual ::ecore::EAttribute_ptr getDepartment__number();

        virtual ::ecore::EAttribute_ptr getCompany__name();

        virtual ::ecore::EReference_ptr getCompany__departments();

    protected:

        static std::auto_ptr< CompanyPackage > s_instance;

        CompanyPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_EmployeeEClass;

        ::ecore::EClass_ptr m_DepartmentEClass;

        ::ecore::EClass_ptr m_CompanyEClass;

        // EEnuminstances 


        // EDataType instances 


        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Employee__name;

        ::ecore::EReference_ptr m_Department__employees;

        ::ecore::EReference_ptr m_Department__manager;

        ::ecore::EAttribute_ptr m_Department__number;

        ::ecore::EAttribute_ptr m_Company__name;

        ::ecore::EReference_ptr m_Company__departments;

    };

} // company


#endif // _COMPANYPACKAGE_HPP
