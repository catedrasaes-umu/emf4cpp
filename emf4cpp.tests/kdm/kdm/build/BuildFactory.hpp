// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildFactory.hpp
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

#ifndef _KDM_BUILDFACTORY_HPP
#define _KDM_BUILDFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/build.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace build
    {

        class EXPORT_KDM_DLL BuildFactory : public virtual ::ecore::EFactory
        {
        public:

            static BuildFactory_ptr _instance();

            virtual AbstractBuildElement_ptr createAbstractBuildElement();
            virtual BuildResource_ptr createBuildResource();
            virtual BuildDescription_ptr createBuildDescription();
            virtual SymbolicLink_ptr createSymbolicLink();
            virtual AbstractBuildRelationship_ptr createAbstractBuildRelationship();
            virtual LinksTo_ptr createLinksTo();
            virtual Consumes_ptr createConsumes();
            virtual BuildModel_ptr createBuildModel();
            virtual BuildComponent_ptr createBuildComponent();
            virtual Supplier_ptr createSupplier();
            virtual Tool_ptr createTool();
            virtual BuildElement_ptr createBuildElement();
            virtual BuildRelationship_ptr createBuildRelationship();
            virtual SuppliedBy_ptr createSuppliedBy();
            virtual Library_ptr createLibrary();
            virtual BuildStep_ptr createBuildStep();
            virtual Produces_ptr createProduces();
            virtual SupportedBy_ptr createSupportedBy();
            virtual BuildProduct_ptr createBuildProduct();
            virtual DescribedBy_ptr createDescribedBy();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< BuildFactory > s_holder;

            BuildFactory();

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

        template< > inline AbstractBuildElement_ptr create< AbstractBuildElement >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createAbstractBuildElement();
        }

        template< > inline BuildResource_ptr create< BuildResource >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildResource();
        }

        template< > inline BuildDescription_ptr create< BuildDescription >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildDescription();
        }

        template< > inline SymbolicLink_ptr create< SymbolicLink >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createSymbolicLink();
        }

        template< > inline AbstractBuildRelationship_ptr create<
                AbstractBuildRelationship >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createAbstractBuildRelationship();
        }

        template< > inline LinksTo_ptr create< LinksTo >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createLinksTo();
        }

        template< > inline Consumes_ptr create< Consumes >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createConsumes();
        }

        template< > inline BuildModel_ptr create< BuildModel >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildModel();
        }

        template< > inline BuildComponent_ptr create< BuildComponent >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildComponent();
        }

        template< > inline Supplier_ptr create< Supplier >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createSupplier();
        }

        template< > inline Tool_ptr create< Tool >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createTool();
        }

        template< > inline BuildElement_ptr create< BuildElement >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildElement();
        }

        template< > inline BuildRelationship_ptr create< BuildRelationship >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildRelationship();
        }

        template< > inline SuppliedBy_ptr create< SuppliedBy >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createSuppliedBy();
        }

        template< > inline Library_ptr create< Library >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createLibrary();
        }

        template< > inline BuildStep_ptr create< BuildStep >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildStep();
        }

        template< > inline Produces_ptr create< Produces >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createProduces();
        }

        template< > inline SupportedBy_ptr create< SupportedBy >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createSupportedBy();
        }

        template< > inline BuildProduct_ptr create< BuildProduct >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createBuildProduct();
        }

        template< > inline DescribedBy_ptr create< DescribedBy >()
        {
            auto eFactory = BuildPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< BuildFactory* >(eFactory.get());
            return packageFactory->createDescribedBy();
        }

    } // build
} // kdm

#endif // _KDM_BUILDFACTORY_HPP

