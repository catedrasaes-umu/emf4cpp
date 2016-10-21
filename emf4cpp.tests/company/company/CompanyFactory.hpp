// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyFactory.hpp
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

#ifndef _COMPANYFACTORY_HPP
#define _COMPANYFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <company.hpp>

#include <company/dllCompany.hpp>

namespace company
{

    class EXPORT_COMPANY_DLL CompanyFactory : public virtual ::ecore::EFactory
    {
    public:

        static CompanyFactory_ptr _instance();

        virtual Employee_ptr createEmployee();
        virtual Department_ptr createDepartment();
        virtual Company_ptr createCompany();
        virtual PhonebookEntry_ptr createPhonebookEntry();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< CompanyFactory > s_instance;

        CompanyFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline T* create()
    {
        return (T*) nullptr;
    }

    template< > inline Employee_ptr create< Employee >()
    {
        auto eFactory = CompanyPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CompanyFactory* >(eFactory);
        return packageFactory->createEmployee();
    }
    template< > inline Department_ptr create< Department >()
    {
        auto eFactory = CompanyPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CompanyFactory* >(eFactory);
        return packageFactory->createDepartment();
    }
    template< > inline Company_ptr create< Company >()
    {
        auto eFactory = CompanyPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CompanyFactory* >(eFactory);
        return packageFactory->createCompany();
    }
    template< > inline PhonebookEntry_ptr create< PhonebookEntry >()
    {
        auto eFactory = CompanyPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< CompanyFactory* >(eFactory);
        return packageFactory->createPhonebookEntry();
    }

} // company

#endif // _COMPANYFACTORY_HPP

