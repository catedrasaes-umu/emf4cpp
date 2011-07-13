// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmFactory.hpp
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

#ifndef _KDM_KDMFACTORY_HPP
#define _KDM_KDMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/kdm.hpp>

namespace kdm
{
    namespace kdm
    {

        class KdmFactory: public virtual ::ecore::EFactory
        {
        public:

            static KdmFactory_ptr _instance();

            virtual KDMFramework_ptr createKDMFramework();
            virtual KDMModel_ptr createKDMModel();
            virtual Audit_ptr createAudit();
            virtual Segment_ptr createSegment();
            virtual Attribute_ptr createAttribute();
            virtual Annotation_ptr createAnnotation();
            virtual TagDefinition_ptr createTagDefinition();
            virtual ExtendedValue_ptr createExtendedValue();
            virtual Stereotype_ptr createStereotype();
            virtual ExtensionFamily_ptr createExtensionFamily();
            virtual TaggedRef_ptr createTaggedRef();
            virtual TaggedValue_ptr createTaggedValue();

            virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString(
                    ::ecore::EDataType_ptr _eDataType,
                    ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::auto_ptr< KdmFactory > s_instance;

            KdmFactory();

        };

    } // kdm
} // kdm


#endif // _KDM_KDMFACTORY_HPP
