// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureFactory.hpp
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

#ifndef _KDM_STRUCTUREFACTORY_HPP
#define _KDM_STRUCTUREFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/structure.hpp>

namespace kdm
{
    namespace structure
    {

        class StructureFactory: public virtual ::ecore::EFactory
        {
        public:

            static StructureFactory_ptr _instance();

            virtual AbstractStructureElement_ptr createAbstractStructureElement();
            virtual Subsystem_ptr createSubsystem();
            virtual Layer_ptr createLayer();
            virtual StructureModel_ptr createStructureModel();
            virtual Component_ptr createComponent();
            virtual SoftwareSystem_ptr createSoftwareSystem();
            virtual AbstractStructureRelationship_ptr createAbstractStructureRelationship();
            virtual StructureRelationship_ptr createStructureRelationship();
            virtual ArchitectureView_ptr createArchitectureView();
            virtual StructureElement_ptr createStructureElement();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< StructureFactory > s_instance;

            StructureFactory();

        };

    } // structure
} // kdm

#endif // _KDM_STRUCTUREFACTORY_HPP

