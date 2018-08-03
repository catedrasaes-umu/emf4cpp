// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ResourceTestsFactory.hpp
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

#ifndef _RESOURCETESTSFACTORY_HPP
#define _RESOURCETESTSFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <ResourceTests.hpp>

#include <ResourceTests/dllResourceTests.hpp>

namespace ResourceTests
{

    class EXPORT_RESOURCETESTS_DLL ResourceTestsFactory : public virtual ::ecore::EFactory
    {
    public:

        static ResourceTestsFactory_ptr _instance();

        virtual Root_ptr createRoot();
        virtual ReferenceTarget_ptr createReferenceTarget();
        virtual Referrer_ptr createReferrer();
        virtual ETypes_ptr createETypes();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ResourceTestsFactory > s_holder;

        ResourceTestsFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline Root_ptr create< Root >()
    {
        auto eFactory =
                ResourceTestsPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ResourceTestsFactory* >(eFactory.get());
        return packageFactory->createRoot();
    }

    template< > inline ReferenceTarget_ptr create< ReferenceTarget >()
    {
        auto eFactory =
                ResourceTestsPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ResourceTestsFactory* >(eFactory.get());
        return packageFactory->createReferenceTarget();
    }

    template< > inline Referrer_ptr create< Referrer >()
    {
        auto eFactory =
                ResourceTestsPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ResourceTestsFactory* >(eFactory.get());
        return packageFactory->createReferrer();
    }

    template< > inline ETypes_ptr create< ETypes >()
    {
        auto eFactory =
                ResourceTestsPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ResourceTestsFactory* >(eFactory.get());
        return packageFactory->createETypes();
    }

} // ResourceTests

#endif // _RESOURCETESTSFACTORY_HPP

