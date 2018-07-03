// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildFactory.hpp
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

#ifndef _KDM_BUILDFACTORY_HPP
#define _KDM_BUILDFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/build.hpp>

namespace kdm
{
    namespace build
    {

        class BuildFactory: public virtual ::ecore::EFactory
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

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< BuildFactory > s_instance;

            BuildFactory();

        };

    } // build
} // kdm

#endif // _KDM_BUILDFACTORY_HPP

