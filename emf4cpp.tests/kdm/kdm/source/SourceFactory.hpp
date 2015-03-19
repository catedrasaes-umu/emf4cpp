// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceFactory.hpp
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

#ifndef _KDM_SOURCEFACTORY_HPP
#define _KDM_SOURCEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/source.hpp>

namespace kdm
{
    namespace source
    {

        class SourceFactory: public virtual ::ecore::EFactory
        {
        public:

            static SourceFactory_ptr _instance();

            virtual SourceRef_ptr createSourceRef();
            virtual SourceRegion_ptr createSourceRegion();
            virtual InventoryModel_ptr createInventoryModel();
            virtual AbstractInventoryElement_ptr
                    createAbstractInventoryElement();
            virtual InventoryItem_ptr createInventoryItem();
            virtual SourceFile_ptr createSourceFile();
            virtual Image_ptr createImage();
            virtual ResourceDescription_ptr createResourceDescription();
            virtual Configuration_ptr createConfiguration();
            virtual InventoryContainer_ptr createInventoryContainer();
            virtual Directory_ptr createDirectory();
            virtual Project_ptr createProject();
            virtual AbstractInventoryRelationship_ptr
                    createAbstractInventoryRelationship();
            virtual BinaryFile_ptr createBinaryFile();
            virtual ExecutableFile_ptr createExecutableFile();
            virtual DependsOn_ptr createDependsOn();
            virtual InventoryElement_ptr createInventoryElement();
            virtual InventoryRelationship_ptr createInventoryRelationship();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< SourceFactory > s_instance;

            SourceFactory();

        };

    } // source
} // kdm


#endif // _KDM_SOURCEFACTORY_HPP
