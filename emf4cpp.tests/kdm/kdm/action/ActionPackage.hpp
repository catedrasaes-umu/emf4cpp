// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionPackage.hpp
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

#ifndef _KDM_ACTIONPACKAGE_HPP
#define _KDM_ACTIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/action_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/code/CodePackage.hpp>

namespace kdm
{
    namespace action
    {

        class ActionPackage: public virtual ::ecore::EPackage
        {
        public:

            static ActionPackage_ptr _instance();
            static ActionPackage_ptr _getInstanceAndRemoveOwnership();

            // IDs for classifiers

            static const int ABSTRACTACTIONRELATIONSHIP = 0;

            static const int ACTIONELEMENT = 1;

            static const int ACTIONRELATIONSHIP = 2;

            static const int ADDRESSES = 3;

            static const int BLOCKUNIT = 4;

            static const int CALLS = 5;

            static const int CATCHUNIT = 6;

            static const int COMPLIESTO = 7;

            static const int CONTROLFLOW = 8;

            static const int CREATES = 9;

            static const int DISPATCHES = 10;

            static const int ENTRYFLOW = 11;

            static const int EXCEPTIONFLOW = 12;

            static const int EXCEPTIONUNIT = 13;

            static const int EXITFLOW = 14;

            static const int FALSEFLOW = 15;

            static const int FINALLYUNIT = 16;

            static const int FLOW = 17;

            static const int GUARDEDFLOW = 18;

            static const int READS = 19;

            static const int THROWS = 20;

            static const int TRUEFLOW = 21;

            static const int TRYUNIT = 22;

            static const int USESTYPE = 23;

            static const int WRITES = 24;

            static const int ACTIONELEMENT__KIND = 0;

            static const int ACTIONELEMENT__CODEELEMENT = 1;

            static const int ACTIONELEMENT__ACTIONRELATION = 2;

            static const int CONTROLFLOW__TO = 3;

            static const int CONTROLFLOW__FROM = 4;

            static const int CALLS__TO = 5;

            static const int CALLS__FROM = 6;

            static const int CREATES__TO = 7;

            static const int CREATES__FROM = 8;

            static const int READS__TO = 9;

            static const int READS__FROM = 10;

            static const int WRITES__TO = 11;

            static const int WRITES__FROM = 12;

            static const int COMPLIESTO__TO = 13;

            static const int COMPLIESTO__FROM = 14;

            static const int USESTYPE__TO = 15;

            static const int USESTYPE__FROM = 16;

            static const int ADDRESSES__TO = 17;

            static const int ADDRESSES__FROM = 18;

            static const int ACTIONRELATIONSHIP__TO = 19;

            static const int ACTIONRELATIONSHIP__FROM = 20;

            static const int THROWS__TO = 21;

            static const int THROWS__FROM = 22;

            static const int DISPATCHES__TO = 23;

            static const int DISPATCHES__FROM = 24;

            static const int ENTRYFLOW__TO = 25;

            static const int ENTRYFLOW__FROM = 26;

            static const int EXITFLOW__TO = 27;

            static const int EXITFLOW__FROM = 28;

            static const int EXCEPTIONFLOW__TO = 29;

            static const int EXCEPTIONFLOW__FROM = 30;

            // IDs for classifiers for class AbstractActionRelationship 

            static const int ABSTRACTACTIONRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ABSTRACTACTIONRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ABSTRACTACTIONRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ABSTRACTACTIONRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ActionElement 

            static const int ACTIONELEMENT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ACTIONELEMENT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ACTIONELEMENT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ACTIONELEMENT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int ACTIONELEMENT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int ACTIONELEMENT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int ACTIONELEMENT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int ACTIONELEMENT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            // IDs for classifiers for class ActionRelationship 

            static const int ACTIONRELATIONSHIP__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ACTIONRELATIONSHIP__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ACTIONRELATIONSHIP__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ACTIONRELATIONSHIP__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Addresses 

            static const int ADDRESSES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ADDRESSES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ADDRESSES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ADDRESSES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class BlockUnit 

            static const int BLOCKUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int BLOCKUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int BLOCKUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int BLOCKUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int BLOCKUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int BLOCKUNIT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int BLOCKUNIT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int BLOCKUNIT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            static const int BLOCKUNIT__KIND = ACTIONELEMENT__KIND;

            static const int BLOCKUNIT__CODEELEMENT = ACTIONELEMENT__CODEELEMENT;

            static const int BLOCKUNIT__ACTIONRELATION =
                    ACTIONELEMENT__ACTIONRELATION;

            // IDs for classifiers for class Calls 

            static const int CALLS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CALLS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CALLS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CALLS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class CatchUnit 

            static const int CATCHUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CATCHUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CATCHUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CATCHUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int CATCHUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int CATCHUNIT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int CATCHUNIT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int CATCHUNIT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            static const int CATCHUNIT__KIND = ACTIONELEMENT__KIND;

            static const int CATCHUNIT__CODEELEMENT = ACTIONELEMENT__CODEELEMENT;

            static const int CATCHUNIT__ACTIONRELATION =
                    ACTIONELEMENT__ACTIONRELATION;

            // IDs for classifiers for class CompliesTo 

            static const int COMPLIESTO__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int COMPLIESTO__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int COMPLIESTO__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int COMPLIESTO__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ControlFlow 

            static const int CONTROLFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CONTROLFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CONTROLFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CONTROLFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Creates 

            static const int CREATES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int CREATES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int CREATES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int CREATES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Dispatches 

            static const int DISPATCHES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int DISPATCHES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int DISPATCHES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int DISPATCHES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class EntryFlow 

            static const int ENTRYFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int ENTRYFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int ENTRYFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int ENTRYFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ExceptionFlow 

            static const int EXCEPTIONFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXCEPTIONFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXCEPTIONFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXCEPTIONFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class ExceptionUnit 

            static const int EXCEPTIONUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXCEPTIONUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXCEPTIONUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXCEPTIONUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int EXCEPTIONUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int EXCEPTIONUNIT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int EXCEPTIONUNIT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int EXCEPTIONUNIT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            static const int EXCEPTIONUNIT__KIND = ACTIONELEMENT__KIND;

            static const int EXCEPTIONUNIT__CODEELEMENT =
                    ACTIONELEMENT__CODEELEMENT;

            static const int EXCEPTIONUNIT__ACTIONRELATION =
                    ACTIONELEMENT__ACTIONRELATION;

            // IDs for classifiers for class ExitFlow 

            static const int EXITFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int EXITFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int EXITFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int EXITFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class FalseFlow 

            static const int FALSEFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int FALSEFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int FALSEFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int FALSEFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int FALSEFLOW__TO = CONTROLFLOW__TO;

            static const int FALSEFLOW__FROM = CONTROLFLOW__FROM;

            // IDs for classifiers for class FinallyUnit 

            static const int FINALLYUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int FINALLYUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int FINALLYUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int FINALLYUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int FINALLYUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int FINALLYUNIT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int FINALLYUNIT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int FINALLYUNIT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            static const int FINALLYUNIT__KIND = ACTIONELEMENT__KIND;

            static const int FINALLYUNIT__CODEELEMENT =
                    ACTIONELEMENT__CODEELEMENT;

            static const int FINALLYUNIT__ACTIONRELATION =
                    ACTIONELEMENT__ACTIONRELATION;

            // IDs for classifiers for class Flow 

            static const int FLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int FLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int FLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int FLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int FLOW__TO = CONTROLFLOW__TO;

            static const int FLOW__FROM = CONTROLFLOW__FROM;

            // IDs for classifiers for class GuardedFlow 

            static const int GUARDEDFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int GUARDEDFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int GUARDEDFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int GUARDEDFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int GUARDEDFLOW__TO = CONTROLFLOW__TO;

            static const int GUARDEDFLOW__FROM = CONTROLFLOW__FROM;

            // IDs for classifiers for class Reads 

            static const int READS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int READS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int READS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int READS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Throws 

            static const int THROWS__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int THROWS__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int THROWS__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int THROWS__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class TrueFlow 

            static const int TRUEFLOW__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TRUEFLOW__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TRUEFLOW__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TRUEFLOW__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TRUEFLOW__TO = CONTROLFLOW__TO;

            static const int TRUEFLOW__FROM = CONTROLFLOW__FROM;

            // IDs for classifiers for class TryUnit 

            static const int TRYUNIT__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int TRYUNIT__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int TRYUNIT__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int TRYUNIT__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            static const int TRYUNIT__NAME =
                    ::kdm::core::CorePackage::KDMENTITY__NAME;

            static const int TRYUNIT__SOURCE =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE;

            static const int TRYUNIT__COMMENT =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT;

            static const int TRYUNIT__CODERELATION =
                    ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION;

            static const int TRYUNIT__KIND = ACTIONELEMENT__KIND;

            static const int TRYUNIT__CODEELEMENT = ACTIONELEMENT__CODEELEMENT;

            static const int TRYUNIT__ACTIONRELATION =
                    ACTIONELEMENT__ACTIONRELATION;

            // IDs for classifiers for class UsesType 

            static const int USESTYPE__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int USESTYPE__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int USESTYPE__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int USESTYPE__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // IDs for classifiers for class Writes 

            static const int WRITES__ATTRIBUTE =
                    ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE;

            static const int WRITES__ANNOTATION =
                    ::kdm::core::CorePackage::ELEMENT__ANNOTATION;

            static const int WRITES__STEREOTYPE =
                    ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE;

            static const int WRITES__TAGGEDVALUE =
                    ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getActionElement();

            virtual ::ecore::EClass_ptr getAbstractActionRelationship();

            virtual ::ecore::EClass_ptr getControlFlow();

            virtual ::ecore::EClass_ptr getCalls();

            virtual ::ecore::EClass_ptr getCreates();

            virtual ::ecore::EClass_ptr getReads();

            virtual ::ecore::EClass_ptr getWrites();

            virtual ::ecore::EClass_ptr getCompliesTo();

            virtual ::ecore::EClass_ptr getFlow();

            virtual ::ecore::EClass_ptr getTrueFlow();

            virtual ::ecore::EClass_ptr getFalseFlow();

            virtual ::ecore::EClass_ptr getGuardedFlow();

            virtual ::ecore::EClass_ptr getUsesType();

            virtual ::ecore::EClass_ptr getAddresses();

            virtual ::ecore::EClass_ptr getActionRelationship();

            virtual ::ecore::EClass_ptr getThrows();

            virtual ::ecore::EClass_ptr getDispatches();

            virtual ::ecore::EClass_ptr getEntryFlow();

            virtual ::ecore::EClass_ptr getBlockUnit();

            virtual ::ecore::EClass_ptr getExceptionUnit();

            virtual ::ecore::EClass_ptr getTryUnit();

            virtual ::ecore::EClass_ptr getFinallyUnit();

            virtual ::ecore::EClass_ptr getCatchUnit();

            virtual ::ecore::EClass_ptr getExitFlow();

            virtual ::ecore::EClass_ptr getExceptionFlow();

            // EStructuralFeatures methods

            virtual ::ecore::EReference_ptr getElement__attribute();

            virtual ::ecore::EReference_ptr getElement__annotation();

            virtual ::ecore::EReference_ptr getModelElement__stereotype();

            virtual ::ecore::EReference_ptr getModelElement__taggedValue();

            virtual ::ecore::EAttribute_ptr getKDMEntity__name();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__source();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__comment();

            virtual ::ecore::EReference_ptr getAbstractCodeElement__codeRelation();

            virtual ::ecore::EAttribute_ptr getActionElement__kind();

            virtual ::ecore::EReference_ptr getActionElement__codeElement();

            virtual ::ecore::EReference_ptr getActionElement__actionRelation();

            virtual ::ecore::EReference_ptr getControlFlow__to();

            virtual ::ecore::EReference_ptr getControlFlow__from();

            virtual ::ecore::EReference_ptr getCalls__to();

            virtual ::ecore::EReference_ptr getCalls__from();

            virtual ::ecore::EReference_ptr getCreates__to();

            virtual ::ecore::EReference_ptr getCreates__from();

            virtual ::ecore::EReference_ptr getReads__to();

            virtual ::ecore::EReference_ptr getReads__from();

            virtual ::ecore::EReference_ptr getWrites__to();

            virtual ::ecore::EReference_ptr getWrites__from();

            virtual ::ecore::EReference_ptr getCompliesTo__to();

            virtual ::ecore::EReference_ptr getCompliesTo__from();

            virtual ::ecore::EReference_ptr getUsesType__to();

            virtual ::ecore::EReference_ptr getUsesType__from();

            virtual ::ecore::EReference_ptr getAddresses__to();

            virtual ::ecore::EReference_ptr getAddresses__from();

            virtual ::ecore::EReference_ptr getActionRelationship__to();

            virtual ::ecore::EReference_ptr getActionRelationship__from();

            virtual ::ecore::EReference_ptr getThrows__to();

            virtual ::ecore::EReference_ptr getThrows__from();

            virtual ::ecore::EReference_ptr getDispatches__to();

            virtual ::ecore::EReference_ptr getDispatches__from();

            virtual ::ecore::EReference_ptr getEntryFlow__to();

            virtual ::ecore::EReference_ptr getEntryFlow__from();

            virtual ::ecore::EReference_ptr getExitFlow__to();

            virtual ::ecore::EReference_ptr getExitFlow__from();

            virtual ::ecore::EReference_ptr getExceptionFlow__to();

            virtual ::ecore::EReference_ptr getExceptionFlow__from();

        protected:

            static std::unique_ptr< ActionPackage,
                    ::ecorecpp::PackageDeleter< ActionPackage > > s_instance;

            ActionPackage();

            // EClass instances 

            ::ecore::EClass_ptr m_ActionElementEClass;

            ::ecore::EClass_ptr m_AbstractActionRelationshipEClass;

            ::ecore::EClass_ptr m_ControlFlowEClass;

            ::ecore::EClass_ptr m_CallsEClass;

            ::ecore::EClass_ptr m_CreatesEClass;

            ::ecore::EClass_ptr m_ReadsEClass;

            ::ecore::EClass_ptr m_WritesEClass;

            ::ecore::EClass_ptr m_CompliesToEClass;

            ::ecore::EClass_ptr m_FlowEClass;

            ::ecore::EClass_ptr m_TrueFlowEClass;

            ::ecore::EClass_ptr m_FalseFlowEClass;

            ::ecore::EClass_ptr m_GuardedFlowEClass;

            ::ecore::EClass_ptr m_UsesTypeEClass;

            ::ecore::EClass_ptr m_AddressesEClass;

            ::ecore::EClass_ptr m_ActionRelationshipEClass;

            ::ecore::EClass_ptr m_ThrowsEClass;

            ::ecore::EClass_ptr m_DispatchesEClass;

            ::ecore::EClass_ptr m_EntryFlowEClass;

            ::ecore::EClass_ptr m_BlockUnitEClass;

            ::ecore::EClass_ptr m_ExceptionUnitEClass;

            ::ecore::EClass_ptr m_TryUnitEClass;

            ::ecore::EClass_ptr m_FinallyUnitEClass;

            ::ecore::EClass_ptr m_CatchUnitEClass;

            ::ecore::EClass_ptr m_ExitFlowEClass;

            ::ecore::EClass_ptr m_ExceptionFlowEClass;

            // EEnuminstances 

            // EDataType instances 

            // EStructuralFeatures instances

            ::ecore::EReference_ptr m_Element__attribute;

            ::ecore::EReference_ptr m_Element__annotation;

            ::ecore::EReference_ptr m_ModelElement__stereotype;

            ::ecore::EReference_ptr m_ModelElement__taggedValue;

            ::ecore::EAttribute_ptr m_KDMEntity__name;

            ::ecore::EReference_ptr m_AbstractCodeElement__source;

            ::ecore::EReference_ptr m_AbstractCodeElement__comment;

            ::ecore::EReference_ptr m_AbstractCodeElement__codeRelation;

            ::ecore::EAttribute_ptr m_ActionElement__kind;

            ::ecore::EReference_ptr m_ActionElement__codeElement;

            ::ecore::EReference_ptr m_ActionElement__actionRelation;

            ::ecore::EReference_ptr m_ControlFlow__to;

            ::ecore::EReference_ptr m_ControlFlow__from;

            ::ecore::EReference_ptr m_Calls__to;

            ::ecore::EReference_ptr m_Calls__from;

            ::ecore::EReference_ptr m_Creates__to;

            ::ecore::EReference_ptr m_Creates__from;

            ::ecore::EReference_ptr m_Reads__to;

            ::ecore::EReference_ptr m_Reads__from;

            ::ecore::EReference_ptr m_Writes__to;

            ::ecore::EReference_ptr m_Writes__from;

            ::ecore::EReference_ptr m_CompliesTo__to;

            ::ecore::EReference_ptr m_CompliesTo__from;

            ::ecore::EReference_ptr m_UsesType__to;

            ::ecore::EReference_ptr m_UsesType__from;

            ::ecore::EReference_ptr m_Addresses__to;

            ::ecore::EReference_ptr m_Addresses__from;

            ::ecore::EReference_ptr m_ActionRelationship__to;

            ::ecore::EReference_ptr m_ActionRelationship__from;

            ::ecore::EReference_ptr m_Throws__to;

            ::ecore::EReference_ptr m_Throws__from;

            ::ecore::EReference_ptr m_Dispatches__to;

            ::ecore::EReference_ptr m_Dispatches__from;

            ::ecore::EReference_ptr m_EntryFlow__to;

            ::ecore::EReference_ptr m_EntryFlow__from;

            ::ecore::EReference_ptr m_ExitFlow__to;

            ::ecore::EReference_ptr m_ExitFlow__from;

            ::ecore::EReference_ptr m_ExceptionFlow__to;

            ::ecore::EReference_ptr m_ExceptionFlow__from;

        };

    } // action
} // kdm

#endif // _KDM_ACTIONPACKAGE_HPP

