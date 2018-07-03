// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CorePackage.hpp
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

#ifndef _KDM_COREPACKAGE_HPP
#define _KDM_COREPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/core_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

namespace kdm
{
    namespace core
    {

        class CorePackage: public virtual ::ecore::EPackage
        {
        public:

            static CorePackage_ptr _instance();
            static CorePackage_ptr _getInstanceAndRemoveOwnership();

            // IDs for classifiers

            static const int AGGREGATEDRELATIONSHIP = 0;

            static const int BOOLEAN = 1;

            static const int ELEMENT = 2;

            static const int INTEGER = 3;

            static const int KDMENTITY = 4;

            static const int KDMRELATIONSHIP = 5;

            static const int MODELELEMENT = 6;

            static const int STRING = 7;

            static const int ELEMENT__ATTRIBUTE = 134;

            static const int ELEMENT__ANNOTATION = 135;

            static const int MODELELEMENT__STEREOTYPE = 136;

            static const int MODELELEMENT__TAGGEDVALUE = 137;

            static const int KDMENTITY__NAME = 138;

            static const int AGGREGATEDRELATIONSHIP__FROM = 139;

            static const int AGGREGATEDRELATIONSHIP__TO = 140;

            static const int AGGREGATEDRELATIONSHIP__RELATION = 141;

            static const int AGGREGATEDRELATIONSHIP__DENSITY = 142;

            // IDs for classifiers for class AggregatedRelationship 

            static const int AGGREGATEDRELATIONSHIP__ATTRIBUTE =
                    ELEMENT__ATTRIBUTE;

            static const int AGGREGATEDRELATIONSHIP__ANNOTATION =
                    ELEMENT__ANNOTATION;

            static const int AGGREGATEDRELATIONSHIP__STEREOTYPE =
                    MODELELEMENT__STEREOTYPE;

            static const int AGGREGATEDRELATIONSHIP__TAGGEDVALUE =
                    MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Element 

            // IDs for classifiers for class KDMEntity 

            static const int KDMENTITY__ATTRIBUTE = ELEMENT__ATTRIBUTE;

            static const int KDMENTITY__ANNOTATION = ELEMENT__ANNOTATION;

            static const int KDMENTITY__STEREOTYPE = MODELELEMENT__STEREOTYPE;

            static const int KDMENTITY__TAGGEDVALUE = MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class KDMRelationship 

            static const int KDMRELATIONSHIP__ATTRIBUTE = ELEMENT__ATTRIBUTE;

            static const int KDMRELATIONSHIP__ANNOTATION = ELEMENT__ANNOTATION;

            static const int KDMRELATIONSHIP__STEREOTYPE =
                    MODELELEMENT__STEREOTYPE;

            static const int KDMRELATIONSHIP__TAGGEDVALUE =
                    MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ModelElement 

            static const int MODELELEMENT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

            static const int MODELELEMENT__ANNOTATION = ELEMENT__ANNOTATION;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getElement();

            virtual ::ecore::EClass_ptr getModelElement();

            virtual ::ecore::EClass_ptr getKDMEntity();

            virtual ::ecore::EClass_ptr getKDMRelationship();

            virtual ::ecore::EClass_ptr getAggregatedRelationship();

            virtual ::ecore::EDataType_ptr getString();

            virtual ::ecore::EDataType_ptr getInteger();

            virtual ::ecore::EDataType_ptr getBoolean();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr getAggregatedRelationship__from();

            virtual ::ecore::EReference_ptr getAggregatedRelationship__to();

            virtual ::ecore::EReference_ptr getAggregatedRelationship__relation();

            virtual ::ecore::EAttribute_ptr getAggregatedRelationship__density();

        protected:

            static std::unique_ptr< CorePackage,
                    ::ecorecpp::PackageDeleter< CorePackage > > s_instance;

            CorePackage();

            // EClass instances 

            ::ecore::EClass_ptr m_ElementEClass;

            ::ecore::EClass_ptr m_ModelElementEClass;

            ::ecore::EClass_ptr m_KDMEntityEClass;

            ::ecore::EClass_ptr m_KDMRelationshipEClass;

            ::ecore::EClass_ptr m_AggregatedRelationshipEClass;

            // EEnuminstances 

            // EDataType instances 

            ::ecore::EDataType_ptr m_StringEDataType;

            ::ecore::EDataType_ptr m_IntegerEDataType;

            ::ecore::EDataType_ptr m_BooleanEDataType;

            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr m_AggregatedRelationship__from;

            ::ecore::EReference_ptr m_AggregatedRelationship__to;

            ::ecore::EReference_ptr m_AggregatedRelationship__relation;

            ::ecore::EAttribute_ptr m_AggregatedRelationship__density;

        };

    } // core
} // kdm

#endif // _KDM_COREPACKAGE_HPP

