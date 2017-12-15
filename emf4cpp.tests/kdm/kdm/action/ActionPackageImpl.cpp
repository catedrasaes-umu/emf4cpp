// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionPackageImpl.cpp
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

#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/code/ControlElement.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::action;

ActionPackage::ActionPackage()
{

    // Feature definitions of ActionElement
    m_ActionElement__kind = boost::intrusive_ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ActionElement__codeElement = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ActionElement__actionRelation = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractActionRelationship

    // Feature definitions of ControlFlow
    m_ControlFlow__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ControlFlow__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Calls
    m_Calls__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Calls__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Creates
    m_Creates__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Creates__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Reads
    m_Reads__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Reads__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Writes
    m_Writes__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Writes__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CompliesTo
    m_CompliesTo__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_CompliesTo__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Flow

    // Feature definitions of TrueFlow

    // Feature definitions of FalseFlow

    // Feature definitions of GuardedFlow

    // Feature definitions of UsesType
    m_UsesType__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_UsesType__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Addresses
    m_Addresses__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Addresses__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ActionRelationship
    m_ActionRelationship__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ActionRelationship__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Throws
    m_Throws__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Throws__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Dispatches
    m_Dispatches__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Dispatches__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EntryFlow
    m_EntryFlow__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EntryFlow__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of BlockUnit

    // Feature definitions of ExceptionUnit

    // Feature definitions of TryUnit

    // Feature definitions of FinallyUnit

    // Feature definitions of CatchUnit

    // Feature definitions of ExitFlow
    m_ExitFlow__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ExitFlow__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ExceptionFlow
    m_ExceptionFlow__to = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ExceptionFlow__from = boost::intrusive_ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void ActionPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ActionFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ActionElement
    m_ActionElementEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ActionElementEClass->setClassifierID(ACTIONELEMENT);
    m_ActionElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ActionElementEClass);
    // m_ActionElement__kind has already been allocated above
    m_ActionElement__kind->setFeatureID(
            ::kdm::action::ActionPackage::ACTIONELEMENT__KIND);
    m_ActionElementEClass->getEStructuralFeatures().push_back(
            m_ActionElement__kind);
    // m_ActionElement__codeElement has already been allocated above
    m_ActionElement__codeElement->setFeatureID(
            ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT);
    m_ActionElementEClass->getEStructuralFeatures().push_back(
            m_ActionElement__codeElement);
    // m_ActionElement__actionRelation has already been allocated above
    m_ActionElement__actionRelation->setFeatureID(
            ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION);
    m_ActionElementEClass->getEStructuralFeatures().push_back(
            m_ActionElement__actionRelation);

    // AbstractActionRelationship
    m_AbstractActionRelationshipEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractActionRelationshipEClass->setClassifierID(
            ABSTRACTACTIONRELATIONSHIP);
    m_AbstractActionRelationshipEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractActionRelationshipEClass);

    // ControlFlow
    m_ControlFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ControlFlowEClass->setClassifierID(CONTROLFLOW);
    m_ControlFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ControlFlowEClass);
    // m_ControlFlow__to has already been allocated above
    m_ControlFlow__to->setFeatureID(
            ::kdm::action::ActionPackage::CONTROLFLOW__TO);
    m_ControlFlowEClass->getEStructuralFeatures().push_back(m_ControlFlow__to);
    // m_ControlFlow__from has already been allocated above
    m_ControlFlow__from->setFeatureID(
            ::kdm::action::ActionPackage::CONTROLFLOW__FROM);
    m_ControlFlowEClass->getEStructuralFeatures().push_back(
            m_ControlFlow__from);

    // Calls
    m_CallsEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CallsEClass->setClassifierID(CALLS);
    m_CallsEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CallsEClass);
    // m_Calls__to has already been allocated above
    m_Calls__to->setFeatureID(::kdm::action::ActionPackage::CALLS__TO);
    m_CallsEClass->getEStructuralFeatures().push_back(m_Calls__to);
    // m_Calls__from has already been allocated above
    m_Calls__from->setFeatureID(::kdm::action::ActionPackage::CALLS__FROM);
    m_CallsEClass->getEStructuralFeatures().push_back(m_Calls__from);

    // Creates
    m_CreatesEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CreatesEClass->setClassifierID(CREATES);
    m_CreatesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CreatesEClass);
    // m_Creates__to has already been allocated above
    m_Creates__to->setFeatureID(::kdm::action::ActionPackage::CREATES__TO);
    m_CreatesEClass->getEStructuralFeatures().push_back(m_Creates__to);
    // m_Creates__from has already been allocated above
    m_Creates__from->setFeatureID(::kdm::action::ActionPackage::CREATES__FROM);
    m_CreatesEClass->getEStructuralFeatures().push_back(m_Creates__from);

    // Reads
    m_ReadsEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ReadsEClass->setClassifierID(READS);
    m_ReadsEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ReadsEClass);
    // m_Reads__to has already been allocated above
    m_Reads__to->setFeatureID(::kdm::action::ActionPackage::READS__TO);
    m_ReadsEClass->getEStructuralFeatures().push_back(m_Reads__to);
    // m_Reads__from has already been allocated above
    m_Reads__from->setFeatureID(::kdm::action::ActionPackage::READS__FROM);
    m_ReadsEClass->getEStructuralFeatures().push_back(m_Reads__from);

    // Writes
    m_WritesEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_WritesEClass->setClassifierID(WRITES);
    m_WritesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_WritesEClass);
    // m_Writes__to has already been allocated above
    m_Writes__to->setFeatureID(::kdm::action::ActionPackage::WRITES__TO);
    m_WritesEClass->getEStructuralFeatures().push_back(m_Writes__to);
    // m_Writes__from has already been allocated above
    m_Writes__from->setFeatureID(::kdm::action::ActionPackage::WRITES__FROM);
    m_WritesEClass->getEStructuralFeatures().push_back(m_Writes__from);

    // CompliesTo
    m_CompliesToEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CompliesToEClass->setClassifierID(COMPLIESTO);
    m_CompliesToEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CompliesToEClass);
    // m_CompliesTo__to has already been allocated above
    m_CompliesTo__to->setFeatureID(
            ::kdm::action::ActionPackage::COMPLIESTO__TO);
    m_CompliesToEClass->getEStructuralFeatures().push_back(m_CompliesTo__to);
    // m_CompliesTo__from has already been allocated above
    m_CompliesTo__from->setFeatureID(
            ::kdm::action::ActionPackage::COMPLIESTO__FROM);
    m_CompliesToEClass->getEStructuralFeatures().push_back(m_CompliesTo__from);

    // Flow
    m_FlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_FlowEClass->setClassifierID(FLOW);
    m_FlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FlowEClass);

    // TrueFlow
    m_TrueFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TrueFlowEClass->setClassifierID(TRUEFLOW);
    m_TrueFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TrueFlowEClass);

    // FalseFlow
    m_FalseFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_FalseFlowEClass->setClassifierID(FALSEFLOW);
    m_FalseFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FalseFlowEClass);

    // GuardedFlow
    m_GuardedFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_GuardedFlowEClass->setClassifierID(GUARDEDFLOW);
    m_GuardedFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_GuardedFlowEClass);

    // UsesType
    m_UsesTypeEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_UsesTypeEClass->setClassifierID(USESTYPE);
    m_UsesTypeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_UsesTypeEClass);
    // m_UsesType__to has already been allocated above
    m_UsesType__to->setFeatureID(::kdm::action::ActionPackage::USESTYPE__TO);
    m_UsesTypeEClass->getEStructuralFeatures().push_back(m_UsesType__to);
    // m_UsesType__from has already been allocated above
    m_UsesType__from->setFeatureID(
            ::kdm::action::ActionPackage::USESTYPE__FROM);
    m_UsesTypeEClass->getEStructuralFeatures().push_back(m_UsesType__from);

    // Addresses
    m_AddressesEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AddressesEClass->setClassifierID(ADDRESSES);
    m_AddressesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AddressesEClass);
    // m_Addresses__to has already been allocated above
    m_Addresses__to->setFeatureID(::kdm::action::ActionPackage::ADDRESSES__TO);
    m_AddressesEClass->getEStructuralFeatures().push_back(m_Addresses__to);
    // m_Addresses__from has already been allocated above
    m_Addresses__from->setFeatureID(
            ::kdm::action::ActionPackage::ADDRESSES__FROM);
    m_AddressesEClass->getEStructuralFeatures().push_back(m_Addresses__from);

    // ActionRelationship
    m_ActionRelationshipEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ActionRelationshipEClass->setClassifierID(ACTIONRELATIONSHIP);
    m_ActionRelationshipEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ActionRelationshipEClass);
    // m_ActionRelationship__to has already been allocated above
    m_ActionRelationship__to->setFeatureID(
            ::kdm::action::ActionPackage::ACTIONRELATIONSHIP__TO);
    m_ActionRelationshipEClass->getEStructuralFeatures().push_back(
            m_ActionRelationship__to);
    // m_ActionRelationship__from has already been allocated above
    m_ActionRelationship__from->setFeatureID(
            ::kdm::action::ActionPackage::ACTIONRELATIONSHIP__FROM);
    m_ActionRelationshipEClass->getEStructuralFeatures().push_back(
            m_ActionRelationship__from);

    // Throws
    m_ThrowsEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ThrowsEClass->setClassifierID(THROWS);
    m_ThrowsEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ThrowsEClass);
    // m_Throws__to has already been allocated above
    m_Throws__to->setFeatureID(::kdm::action::ActionPackage::THROWS__TO);
    m_ThrowsEClass->getEStructuralFeatures().push_back(m_Throws__to);
    // m_Throws__from has already been allocated above
    m_Throws__from->setFeatureID(::kdm::action::ActionPackage::THROWS__FROM);
    m_ThrowsEClass->getEStructuralFeatures().push_back(m_Throws__from);

    // Dispatches
    m_DispatchesEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DispatchesEClass->setClassifierID(DISPATCHES);
    m_DispatchesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DispatchesEClass);
    // m_Dispatches__to has already been allocated above
    m_Dispatches__to->setFeatureID(
            ::kdm::action::ActionPackage::DISPATCHES__TO);
    m_DispatchesEClass->getEStructuralFeatures().push_back(m_Dispatches__to);
    // m_Dispatches__from has already been allocated above
    m_Dispatches__from->setFeatureID(
            ::kdm::action::ActionPackage::DISPATCHES__FROM);
    m_DispatchesEClass->getEStructuralFeatures().push_back(m_Dispatches__from);

    // EntryFlow
    m_EntryFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EntryFlowEClass->setClassifierID(ENTRYFLOW);
    m_EntryFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EntryFlowEClass);
    // m_EntryFlow__to has already been allocated above
    m_EntryFlow__to->setFeatureID(::kdm::action::ActionPackage::ENTRYFLOW__TO);
    m_EntryFlowEClass->getEStructuralFeatures().push_back(m_EntryFlow__to);
    // m_EntryFlow__from has already been allocated above
    m_EntryFlow__from->setFeatureID(
            ::kdm::action::ActionPackage::ENTRYFLOW__FROM);
    m_EntryFlowEClass->getEStructuralFeatures().push_back(m_EntryFlow__from);

    // BlockUnit
    m_BlockUnitEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BlockUnitEClass->setClassifierID(BLOCKUNIT);
    m_BlockUnitEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BlockUnitEClass);

    // ExceptionUnit
    m_ExceptionUnitEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExceptionUnitEClass->setClassifierID(EXCEPTIONUNIT);
    m_ExceptionUnitEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ExceptionUnitEClass);

    // TryUnit
    m_TryUnitEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TryUnitEClass->setClassifierID(TRYUNIT);
    m_TryUnitEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TryUnitEClass);

    // FinallyUnit
    m_FinallyUnitEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_FinallyUnitEClass->setClassifierID(FINALLYUNIT);
    m_FinallyUnitEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FinallyUnitEClass);

    // CatchUnit
    m_CatchUnitEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CatchUnitEClass->setClassifierID(CATCHUNIT);
    m_CatchUnitEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CatchUnitEClass);

    // ExitFlow
    m_ExitFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExitFlowEClass->setClassifierID(EXITFLOW);
    m_ExitFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ExitFlowEClass);
    // m_ExitFlow__to has already been allocated above
    m_ExitFlow__to->setFeatureID(::kdm::action::ActionPackage::EXITFLOW__TO);
    m_ExitFlowEClass->getEStructuralFeatures().push_back(m_ExitFlow__to);
    // m_ExitFlow__from has already been allocated above
    m_ExitFlow__from->setFeatureID(
            ::kdm::action::ActionPackage::EXITFLOW__FROM);
    m_ExitFlowEClass->getEStructuralFeatures().push_back(m_ExitFlow__from);

    // ExceptionFlow
    m_ExceptionFlowEClass = boost::intrusive_ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExceptionFlowEClass->setClassifierID(EXCEPTIONFLOW);
    m_ExceptionFlowEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ExceptionFlowEClass);
    // m_ExceptionFlow__to has already been allocated above
    m_ExceptionFlow__to->setFeatureID(
            ::kdm::action::ActionPackage::EXCEPTIONFLOW__TO);
    m_ExceptionFlowEClass->getEStructuralFeatures().push_back(
            m_ExceptionFlow__to);
    // m_ExceptionFlow__from has already been allocated above
    m_ExceptionFlow__from->setFeatureID(
            ::kdm::action::ActionPackage::EXCEPTIONFLOW__FROM);
    m_ExceptionFlowEClass->getEStructuralFeatures().push_back(
            m_ExceptionFlow__from);

    // Create enums

    // Create data types

    // Initialize package
    setName("action");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ActionElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getAbstractCodeElement());
    m_AbstractActionRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMRelationship());
    m_ControlFlowEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_CallsEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_CreatesEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_ReadsEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_WritesEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_CompliesToEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_FlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
    m_TrueFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
    m_FalseFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
    m_GuardedFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
    m_UsesTypeEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_AddressesEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_ActionRelationshipEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_ThrowsEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_DispatchesEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_EntryFlowEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_BlockUnitEClass->getESuperTypes().push_back(m_ActionElementEClass);
    m_ExceptionUnitEClass->getESuperTypes().push_back(m_BlockUnitEClass);
    m_TryUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
    m_FinallyUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
    m_CatchUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
    m_ExitFlowEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);
    m_ExceptionFlowEClass->getESuperTypes().push_back(
            m_AbstractActionRelationshipEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ActionElement
    m_ActionElementEClass->setName("ActionElement");
    m_ActionElementEClass->setAbstract(false);
    m_ActionElementEClass->setInterface(false);
    m_ActionElement__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getString());
    m_ActionElement__kind->setName("kind");
    m_ActionElement__kind->setDefaultValueLiteral("");
    m_ActionElement__kind->setLowerBound(0);
    m_ActionElement__kind->setUpperBound(1);
    m_ActionElement__kind->setTransient(false);
    m_ActionElement__kind->setVolatile(false);
    m_ActionElement__kind->setChangeable(true);
    m_ActionElement__kind->setUnsettable(false);
    m_ActionElement__kind->setID(false);
    m_ActionElement__kind->setUnique(false);
    m_ActionElement__kind->setDerived(false);
    m_ActionElement__kind->setOrdered(false);
    m_ActionElement__codeElement->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getAbstractCodeElement());
    m_ActionElement__codeElement->setName("codeElement");
    m_ActionElement__codeElement->setDefaultValueLiteral("");
    m_ActionElement__codeElement->setLowerBound(0);
    m_ActionElement__codeElement->setUpperBound(-1);
    m_ActionElement__codeElement->setTransient(false);
    m_ActionElement__codeElement->setVolatile(false);
    m_ActionElement__codeElement->setChangeable(true);
    m_ActionElement__codeElement->setContainment(true);
    m_ActionElement__codeElement->setResolveProxies(true);
    m_ActionElement__codeElement->setUnique(true);
    m_ActionElement__codeElement->setDerived(false);
    m_ActionElement__codeElement->setOrdered(false);
    m_ActionElement__actionRelation->setEType(
            m_AbstractActionRelationshipEClass);
    m_ActionElement__actionRelation->setName("actionRelation");
    m_ActionElement__actionRelation->setDefaultValueLiteral("");
    m_ActionElement__actionRelation->setLowerBound(0);
    m_ActionElement__actionRelation->setUpperBound(-1);
    m_ActionElement__actionRelation->setTransient(false);
    m_ActionElement__actionRelation->setVolatile(false);
    m_ActionElement__actionRelation->setChangeable(true);
    m_ActionElement__actionRelation->setContainment(true);
    m_ActionElement__actionRelation->setResolveProxies(true);
    m_ActionElement__actionRelation->setUnique(true);
    m_ActionElement__actionRelation->setDerived(false);
    m_ActionElement__actionRelation->setOrdered(true);
    // AbstractActionRelationship
    m_AbstractActionRelationshipEClass->setName("AbstractActionRelationship");
    m_AbstractActionRelationshipEClass->setAbstract(true);
    m_AbstractActionRelationshipEClass->setInterface(false);
    // ControlFlow
    m_ControlFlowEClass->setName("ControlFlow");
    m_ControlFlowEClass->setAbstract(false);
    m_ControlFlowEClass->setInterface(false);
    m_ControlFlow__to->setEType(m_ActionElementEClass);
    m_ControlFlow__to->setName("to");
    m_ControlFlow__to->setDefaultValueLiteral("");
    m_ControlFlow__to->setLowerBound(1);
    m_ControlFlow__to->setUpperBound(1);
    m_ControlFlow__to->setTransient(false);
    m_ControlFlow__to->setVolatile(false);
    m_ControlFlow__to->setChangeable(true);
    m_ControlFlow__to->setContainment(false);
    m_ControlFlow__to->setResolveProxies(true);
    m_ControlFlow__to->setUnique(true);
    m_ControlFlow__to->setDerived(false);
    m_ControlFlow__to->setOrdered(false);
    m_ControlFlow__from->setEType(m_ActionElementEClass);
    m_ControlFlow__from->setName("from");
    m_ControlFlow__from->setDefaultValueLiteral("");
    m_ControlFlow__from->setLowerBound(1);
    m_ControlFlow__from->setUpperBound(1);
    m_ControlFlow__from->setTransient(false);
    m_ControlFlow__from->setVolatile(false);
    m_ControlFlow__from->setChangeable(true);
    m_ControlFlow__from->setContainment(false);
    m_ControlFlow__from->setResolveProxies(true);
    m_ControlFlow__from->setUnique(true);
    m_ControlFlow__from->setDerived(false);
    m_ControlFlow__from->setOrdered(false);
    // Calls
    m_CallsEClass->setName("Calls");
    m_CallsEClass->setAbstract(false);
    m_CallsEClass->setInterface(false);
    m_Calls__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getControlElement());
    m_Calls__to->setName("to");
    m_Calls__to->setDefaultValueLiteral("");
    m_Calls__to->setLowerBound(1);
    m_Calls__to->setUpperBound(1);
    m_Calls__to->setTransient(false);
    m_Calls__to->setVolatile(false);
    m_Calls__to->setChangeable(true);
    m_Calls__to->setContainment(false);
    m_Calls__to->setResolveProxies(true);
    m_Calls__to->setUnique(true);
    m_Calls__to->setDerived(false);
    m_Calls__to->setOrdered(false);
    m_Calls__from->setEType(m_ActionElementEClass);
    m_Calls__from->setName("from");
    m_Calls__from->setDefaultValueLiteral("");
    m_Calls__from->setLowerBound(1);
    m_Calls__from->setUpperBound(1);
    m_Calls__from->setTransient(false);
    m_Calls__from->setVolatile(false);
    m_Calls__from->setChangeable(true);
    m_Calls__from->setContainment(false);
    m_Calls__from->setResolveProxies(true);
    m_Calls__from->setUnique(true);
    m_Calls__from->setDerived(false);
    m_Calls__from->setOrdered(false);
    // Creates
    m_CreatesEClass->setName("Creates");
    m_CreatesEClass->setAbstract(false);
    m_CreatesEClass->setInterface(false);
    m_Creates__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDatatype());
    m_Creates__to->setName("to");
    m_Creates__to->setDefaultValueLiteral("");
    m_Creates__to->setLowerBound(1);
    m_Creates__to->setUpperBound(1);
    m_Creates__to->setTransient(false);
    m_Creates__to->setVolatile(false);
    m_Creates__to->setChangeable(true);
    m_Creates__to->setContainment(false);
    m_Creates__to->setResolveProxies(true);
    m_Creates__to->setUnique(true);
    m_Creates__to->setDerived(false);
    m_Creates__to->setOrdered(false);
    m_Creates__from->setEType(m_ActionElementEClass);
    m_Creates__from->setName("from");
    m_Creates__from->setDefaultValueLiteral("");
    m_Creates__from->setLowerBound(1);
    m_Creates__from->setUpperBound(1);
    m_Creates__from->setTransient(false);
    m_Creates__from->setVolatile(false);
    m_Creates__from->setChangeable(true);
    m_Creates__from->setContainment(false);
    m_Creates__from->setResolveProxies(true);
    m_Creates__from->setUnique(true);
    m_Creates__from->setDerived(false);
    m_Creates__from->setOrdered(false);
    // Reads
    m_ReadsEClass->setName("Reads");
    m_ReadsEClass->setAbstract(false);
    m_ReadsEClass->setInterface(false);
    m_Reads__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDataElement());
    m_Reads__to->setName("to");
    m_Reads__to->setDefaultValueLiteral("");
    m_Reads__to->setLowerBound(1);
    m_Reads__to->setUpperBound(1);
    m_Reads__to->setTransient(false);
    m_Reads__to->setVolatile(false);
    m_Reads__to->setChangeable(true);
    m_Reads__to->setContainment(false);
    m_Reads__to->setResolveProxies(true);
    m_Reads__to->setUnique(true);
    m_Reads__to->setDerived(false);
    m_Reads__to->setOrdered(false);
    m_Reads__from->setEType(m_ActionElementEClass);
    m_Reads__from->setName("from");
    m_Reads__from->setDefaultValueLiteral("");
    m_Reads__from->setLowerBound(1);
    m_Reads__from->setUpperBound(1);
    m_Reads__from->setTransient(false);
    m_Reads__from->setVolatile(false);
    m_Reads__from->setChangeable(true);
    m_Reads__from->setContainment(false);
    m_Reads__from->setResolveProxies(true);
    m_Reads__from->setUnique(true);
    m_Reads__from->setDerived(false);
    m_Reads__from->setOrdered(false);
    // Writes
    m_WritesEClass->setName("Writes");
    m_WritesEClass->setAbstract(false);
    m_WritesEClass->setInterface(false);
    m_Writes__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDataElement());
    m_Writes__to->setName("to");
    m_Writes__to->setDefaultValueLiteral("");
    m_Writes__to->setLowerBound(1);
    m_Writes__to->setUpperBound(1);
    m_Writes__to->setTransient(false);
    m_Writes__to->setVolatile(false);
    m_Writes__to->setChangeable(true);
    m_Writes__to->setContainment(false);
    m_Writes__to->setResolveProxies(true);
    m_Writes__to->setUnique(true);
    m_Writes__to->setDerived(false);
    m_Writes__to->setOrdered(false);
    m_Writes__from->setEType(m_ActionElementEClass);
    m_Writes__from->setName("from");
    m_Writes__from->setDefaultValueLiteral("");
    m_Writes__from->setLowerBound(1);
    m_Writes__from->setUpperBound(1);
    m_Writes__from->setTransient(false);
    m_Writes__from->setVolatile(false);
    m_Writes__from->setChangeable(true);
    m_Writes__from->setContainment(false);
    m_Writes__from->setResolveProxies(true);
    m_Writes__from->setUnique(true);
    m_Writes__from->setDerived(false);
    m_Writes__from->setOrdered(false);
    // CompliesTo
    m_CompliesToEClass->setName("CompliesTo");
    m_CompliesToEClass->setAbstract(false);
    m_CompliesToEClass->setInterface(false);
    m_CompliesTo__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getCodeItem());
    m_CompliesTo__to->setName("to");
    m_CompliesTo__to->setDefaultValueLiteral("");
    m_CompliesTo__to->setLowerBound(1);
    m_CompliesTo__to->setUpperBound(1);
    m_CompliesTo__to->setTransient(false);
    m_CompliesTo__to->setVolatile(false);
    m_CompliesTo__to->setChangeable(true);
    m_CompliesTo__to->setContainment(false);
    m_CompliesTo__to->setResolveProxies(true);
    m_CompliesTo__to->setUnique(true);
    m_CompliesTo__to->setDerived(false);
    m_CompliesTo__to->setOrdered(false);
    m_CompliesTo__from->setEType(m_ActionElementEClass);
    m_CompliesTo__from->setName("from");
    m_CompliesTo__from->setDefaultValueLiteral("");
    m_CompliesTo__from->setLowerBound(1);
    m_CompliesTo__from->setUpperBound(1);
    m_CompliesTo__from->setTransient(false);
    m_CompliesTo__from->setVolatile(false);
    m_CompliesTo__from->setChangeable(true);
    m_CompliesTo__from->setContainment(false);
    m_CompliesTo__from->setResolveProxies(true);
    m_CompliesTo__from->setUnique(true);
    m_CompliesTo__from->setDerived(false);
    m_CompliesTo__from->setOrdered(false);
    // Flow
    m_FlowEClass->setName("Flow");
    m_FlowEClass->setAbstract(false);
    m_FlowEClass->setInterface(false);
    // TrueFlow
    m_TrueFlowEClass->setName("TrueFlow");
    m_TrueFlowEClass->setAbstract(false);
    m_TrueFlowEClass->setInterface(false);
    // FalseFlow
    m_FalseFlowEClass->setName("FalseFlow");
    m_FalseFlowEClass->setAbstract(false);
    m_FalseFlowEClass->setInterface(false);
    // GuardedFlow
    m_GuardedFlowEClass->setName("GuardedFlow");
    m_GuardedFlowEClass->setAbstract(false);
    m_GuardedFlowEClass->setInterface(false);
    // UsesType
    m_UsesTypeEClass->setName("UsesType");
    m_UsesTypeEClass->setAbstract(false);
    m_UsesTypeEClass->setInterface(false);
    m_UsesType__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDatatype());
    m_UsesType__to->setName("to");
    m_UsesType__to->setDefaultValueLiteral("");
    m_UsesType__to->setLowerBound(1);
    m_UsesType__to->setUpperBound(1);
    m_UsesType__to->setTransient(false);
    m_UsesType__to->setVolatile(false);
    m_UsesType__to->setChangeable(true);
    m_UsesType__to->setContainment(false);
    m_UsesType__to->setResolveProxies(true);
    m_UsesType__to->setUnique(true);
    m_UsesType__to->setDerived(false);
    m_UsesType__to->setOrdered(false);
    m_UsesType__from->setEType(m_ActionElementEClass);
    m_UsesType__from->setName("from");
    m_UsesType__from->setDefaultValueLiteral("");
    m_UsesType__from->setLowerBound(1);
    m_UsesType__from->setUpperBound(1);
    m_UsesType__from->setTransient(false);
    m_UsesType__from->setVolatile(false);
    m_UsesType__from->setChangeable(true);
    m_UsesType__from->setContainment(false);
    m_UsesType__from->setResolveProxies(true);
    m_UsesType__from->setUnique(true);
    m_UsesType__from->setDerived(false);
    m_UsesType__from->setOrdered(false);
    // Addresses
    m_AddressesEClass->setName("Addresses");
    m_AddressesEClass->setAbstract(false);
    m_AddressesEClass->setInterface(false);
    m_Addresses__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getComputationalObject());
    m_Addresses__to->setName("to");
    m_Addresses__to->setDefaultValueLiteral("");
    m_Addresses__to->setLowerBound(1);
    m_Addresses__to->setUpperBound(1);
    m_Addresses__to->setTransient(false);
    m_Addresses__to->setVolatile(false);
    m_Addresses__to->setChangeable(true);
    m_Addresses__to->setContainment(false);
    m_Addresses__to->setResolveProxies(true);
    m_Addresses__to->setUnique(true);
    m_Addresses__to->setDerived(false);
    m_Addresses__to->setOrdered(false);
    m_Addresses__from->setEType(m_ActionElementEClass);
    m_Addresses__from->setName("from");
    m_Addresses__from->setDefaultValueLiteral("");
    m_Addresses__from->setLowerBound(1);
    m_Addresses__from->setUpperBound(1);
    m_Addresses__from->setTransient(false);
    m_Addresses__from->setVolatile(false);
    m_Addresses__from->setChangeable(true);
    m_Addresses__from->setContainment(false);
    m_Addresses__from->setResolveProxies(true);
    m_Addresses__from->setUnique(true);
    m_Addresses__from->setDerived(false);
    m_Addresses__from->setOrdered(false);
    // ActionRelationship
    m_ActionRelationshipEClass->setName("ActionRelationship");
    m_ActionRelationshipEClass->setAbstract(false);
    m_ActionRelationshipEClass->setInterface(false);
    m_ActionRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_ActionRelationship__to->setName("to");
    m_ActionRelationship__to->setDefaultValueLiteral("");
    m_ActionRelationship__to->setLowerBound(1);
    m_ActionRelationship__to->setUpperBound(1);
    m_ActionRelationship__to->setTransient(false);
    m_ActionRelationship__to->setVolatile(false);
    m_ActionRelationship__to->setChangeable(true);
    m_ActionRelationship__to->setContainment(false);
    m_ActionRelationship__to->setResolveProxies(true);
    m_ActionRelationship__to->setUnique(true);
    m_ActionRelationship__to->setDerived(false);
    m_ActionRelationship__to->setOrdered(false);
    m_ActionRelationship__from->setEType(m_ActionElementEClass);
    m_ActionRelationship__from->setName("from");
    m_ActionRelationship__from->setDefaultValueLiteral("");
    m_ActionRelationship__from->setLowerBound(1);
    m_ActionRelationship__from->setUpperBound(1);
    m_ActionRelationship__from->setTransient(false);
    m_ActionRelationship__from->setVolatile(false);
    m_ActionRelationship__from->setChangeable(true);
    m_ActionRelationship__from->setContainment(false);
    m_ActionRelationship__from->setResolveProxies(true);
    m_ActionRelationship__from->setUnique(true);
    m_ActionRelationship__from->setDerived(false);
    m_ActionRelationship__from->setOrdered(false);
    // Throws
    m_ThrowsEClass->setName("Throws");
    m_ThrowsEClass->setAbstract(false);
    m_ThrowsEClass->setInterface(false);
    m_Throws__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDataElement());
    m_Throws__to->setName("to");
    m_Throws__to->setDefaultValueLiteral("");
    m_Throws__to->setLowerBound(1);
    m_Throws__to->setUpperBound(1);
    m_Throws__to->setTransient(false);
    m_Throws__to->setVolatile(false);
    m_Throws__to->setChangeable(true);
    m_Throws__to->setContainment(false);
    m_Throws__to->setResolveProxies(true);
    m_Throws__to->setUnique(true);
    m_Throws__to->setDerived(false);
    m_Throws__to->setOrdered(false);
    m_Throws__from->setEType(m_ActionElementEClass);
    m_Throws__from->setName("from");
    m_Throws__from->setDefaultValueLiteral("");
    m_Throws__from->setLowerBound(1);
    m_Throws__from->setUpperBound(1);
    m_Throws__from->setTransient(false);
    m_Throws__from->setVolatile(false);
    m_Throws__from->setChangeable(true);
    m_Throws__from->setContainment(false);
    m_Throws__from->setResolveProxies(true);
    m_Throws__from->setUnique(true);
    m_Throws__from->setDerived(false);
    m_Throws__from->setOrdered(false);
    // Dispatches
    m_DispatchesEClass->setName("Dispatches");
    m_DispatchesEClass->setAbstract(false);
    m_DispatchesEClass->setInterface(false);
    m_Dispatches__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getDataElement());
    m_Dispatches__to->setName("to");
    m_Dispatches__to->setDefaultValueLiteral("");
    m_Dispatches__to->setLowerBound(1);
    m_Dispatches__to->setUpperBound(1);
    m_Dispatches__to->setTransient(false);
    m_Dispatches__to->setVolatile(false);
    m_Dispatches__to->setChangeable(true);
    m_Dispatches__to->setContainment(false);
    m_Dispatches__to->setResolveProxies(true);
    m_Dispatches__to->setUnique(true);
    m_Dispatches__to->setDerived(false);
    m_Dispatches__to->setOrdered(false);
    m_Dispatches__from->setEType(m_ActionElementEClass);
    m_Dispatches__from->setName("from");
    m_Dispatches__from->setDefaultValueLiteral("");
    m_Dispatches__from->setLowerBound(1);
    m_Dispatches__from->setUpperBound(1);
    m_Dispatches__from->setTransient(false);
    m_Dispatches__from->setVolatile(false);
    m_Dispatches__from->setChangeable(true);
    m_Dispatches__from->setContainment(false);
    m_Dispatches__from->setResolveProxies(true);
    m_Dispatches__from->setUnique(true);
    m_Dispatches__from->setDerived(false);
    m_Dispatches__from->setOrdered(false);
    // EntryFlow
    m_EntryFlowEClass->setName("EntryFlow");
    m_EntryFlowEClass->setAbstract(false);
    m_EntryFlowEClass->setInterface(false);
    m_EntryFlow__to->setEType(m_ActionElementEClass);
    m_EntryFlow__to->setName("to");
    m_EntryFlow__to->setDefaultValueLiteral("");
    m_EntryFlow__to->setLowerBound(1);
    m_EntryFlow__to->setUpperBound(1);
    m_EntryFlow__to->setTransient(false);
    m_EntryFlow__to->setVolatile(false);
    m_EntryFlow__to->setChangeable(true);
    m_EntryFlow__to->setContainment(false);
    m_EntryFlow__to->setResolveProxies(true);
    m_EntryFlow__to->setUnique(true);
    m_EntryFlow__to->setDerived(false);
    m_EntryFlow__to->setOrdered(false);
    m_EntryFlow__from->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getControlElement());
    m_EntryFlow__from->setName("from");
    m_EntryFlow__from->setDefaultValueLiteral("");
    m_EntryFlow__from->setLowerBound(1);
    m_EntryFlow__from->setUpperBound(1);
    m_EntryFlow__from->setTransient(false);
    m_EntryFlow__from->setVolatile(false);
    m_EntryFlow__from->setChangeable(true);
    m_EntryFlow__from->setContainment(false);
    m_EntryFlow__from->setResolveProxies(true);
    m_EntryFlow__from->setUnique(true);
    m_EntryFlow__from->setDerived(false);
    m_EntryFlow__from->setOrdered(false);
    // BlockUnit
    m_BlockUnitEClass->setName("BlockUnit");
    m_BlockUnitEClass->setAbstract(false);
    m_BlockUnitEClass->setInterface(false);
    // ExceptionUnit
    m_ExceptionUnitEClass->setName("ExceptionUnit");
    m_ExceptionUnitEClass->setAbstract(false);
    m_ExceptionUnitEClass->setInterface(false);
    // TryUnit
    m_TryUnitEClass->setName("TryUnit");
    m_TryUnitEClass->setAbstract(false);
    m_TryUnitEClass->setInterface(false);
    // FinallyUnit
    m_FinallyUnitEClass->setName("FinallyUnit");
    m_FinallyUnitEClass->setAbstract(false);
    m_FinallyUnitEClass->setInterface(false);
    // CatchUnit
    m_CatchUnitEClass->setName("CatchUnit");
    m_CatchUnitEClass->setAbstract(false);
    m_CatchUnitEClass->setInterface(false);
    // ExitFlow
    m_ExitFlowEClass->setName("ExitFlow");
    m_ExitFlowEClass->setAbstract(false);
    m_ExitFlowEClass->setInterface(false);
    m_ExitFlow__to->setEType(m_ActionElementEClass);
    m_ExitFlow__to->setName("to");
    m_ExitFlow__to->setDefaultValueLiteral("");
    m_ExitFlow__to->setLowerBound(1);
    m_ExitFlow__to->setUpperBound(1);
    m_ExitFlow__to->setTransient(false);
    m_ExitFlow__to->setVolatile(false);
    m_ExitFlow__to->setChangeable(true);
    m_ExitFlow__to->setContainment(false);
    m_ExitFlow__to->setResolveProxies(true);
    m_ExitFlow__to->setUnique(true);
    m_ExitFlow__to->setDerived(false);
    m_ExitFlow__to->setOrdered(false);
    m_ExitFlow__from->setEType(m_ActionElementEClass);
    m_ExitFlow__from->setName("from");
    m_ExitFlow__from->setDefaultValueLiteral("");
    m_ExitFlow__from->setLowerBound(1);
    m_ExitFlow__from->setUpperBound(1);
    m_ExitFlow__from->setTransient(false);
    m_ExitFlow__from->setVolatile(false);
    m_ExitFlow__from->setChangeable(true);
    m_ExitFlow__from->setContainment(false);
    m_ExitFlow__from->setResolveProxies(true);
    m_ExitFlow__from->setUnique(true);
    m_ExitFlow__from->setDerived(false);
    m_ExitFlow__from->setOrdered(false);
    // ExceptionFlow
    m_ExceptionFlowEClass->setName("ExceptionFlow");
    m_ExceptionFlowEClass->setAbstract(false);
    m_ExceptionFlowEClass->setInterface(false);
    m_ExceptionFlow__to->setEType(m_ActionElementEClass);
    m_ExceptionFlow__to->setName("to");
    m_ExceptionFlow__to->setDefaultValueLiteral("");
    m_ExceptionFlow__to->setLowerBound(1);
    m_ExceptionFlow__to->setUpperBound(1);
    m_ExceptionFlow__to->setTransient(false);
    m_ExceptionFlow__to->setVolatile(false);
    m_ExceptionFlow__to->setChangeable(true);
    m_ExceptionFlow__to->setContainment(false);
    m_ExceptionFlow__to->setResolveProxies(true);
    m_ExceptionFlow__to->setUnique(true);
    m_ExceptionFlow__to->setDerived(false);
    m_ExceptionFlow__to->setOrdered(false);
    m_ExceptionFlow__from->setEType(m_ActionElementEClass);
    m_ExceptionFlow__from->setName("from");
    m_ExceptionFlow__from->setDefaultValueLiteral("");
    m_ExceptionFlow__from->setLowerBound(1);
    m_ExceptionFlow__from->setUpperBound(1);
    m_ExceptionFlow__from->setTransient(false);
    m_ExceptionFlow__from->setVolatile(false);
    m_ExceptionFlow__from->setChangeable(true);
    m_ExceptionFlow__from->setContainment(false);
    m_ExceptionFlow__from->setResolveProxies(true);
    m_ExceptionFlow__from->setUnique(true);
    m_ExceptionFlow__from->setDerived(false);
    m_ExceptionFlow__from->setOrdered(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ActionPackage::getActionElement()
{
    return m_ActionElementEClass;
}
::ecore::EClass_ptr ActionPackage::getAbstractActionRelationship()
{
    return m_AbstractActionRelationshipEClass;
}
::ecore::EClass_ptr ActionPackage::getControlFlow()
{
    return m_ControlFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getCalls()
{
    return m_CallsEClass;
}
::ecore::EClass_ptr ActionPackage::getCreates()
{
    return m_CreatesEClass;
}
::ecore::EClass_ptr ActionPackage::getReads()
{
    return m_ReadsEClass;
}
::ecore::EClass_ptr ActionPackage::getWrites()
{
    return m_WritesEClass;
}
::ecore::EClass_ptr ActionPackage::getCompliesTo()
{
    return m_CompliesToEClass;
}
::ecore::EClass_ptr ActionPackage::getFlow()
{
    return m_FlowEClass;
}
::ecore::EClass_ptr ActionPackage::getTrueFlow()
{
    return m_TrueFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getFalseFlow()
{
    return m_FalseFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getGuardedFlow()
{
    return m_GuardedFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getUsesType()
{
    return m_UsesTypeEClass;
}
::ecore::EClass_ptr ActionPackage::getAddresses()
{
    return m_AddressesEClass;
}
::ecore::EClass_ptr ActionPackage::getActionRelationship()
{
    return m_ActionRelationshipEClass;
}
::ecore::EClass_ptr ActionPackage::getThrows()
{
    return m_ThrowsEClass;
}
::ecore::EClass_ptr ActionPackage::getDispatches()
{
    return m_DispatchesEClass;
}
::ecore::EClass_ptr ActionPackage::getEntryFlow()
{
    return m_EntryFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getBlockUnit()
{
    return m_BlockUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getExceptionUnit()
{
    return m_ExceptionUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getTryUnit()
{
    return m_TryUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getFinallyUnit()
{
    return m_FinallyUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getCatchUnit()
{
    return m_CatchUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getExitFlow()
{
    return m_ExitFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getExceptionFlow()
{
    return m_ExceptionFlowEClass;
}

::ecore::EReference_ptr ActionPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr ActionPackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr ActionPackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr ActionPackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr ActionPackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr ActionPackage::getAbstractCodeElement__source()
{
    return m_AbstractCodeElement__source;
}
::ecore::EReference_ptr ActionPackage::getAbstractCodeElement__comment()
{
    return m_AbstractCodeElement__comment;
}
::ecore::EReference_ptr ActionPackage::getAbstractCodeElement__codeRelation()
{
    return m_AbstractCodeElement__codeRelation;
}
::ecore::EAttribute_ptr ActionPackage::getActionElement__kind()
{
    return m_ActionElement__kind;
}
::ecore::EReference_ptr ActionPackage::getActionElement__codeElement()
{
    return m_ActionElement__codeElement;
}
::ecore::EReference_ptr ActionPackage::getActionElement__actionRelation()
{
    return m_ActionElement__actionRelation;
}
::ecore::EReference_ptr ActionPackage::getControlFlow__to()
{
    return m_ControlFlow__to;
}
::ecore::EReference_ptr ActionPackage::getControlFlow__from()
{
    return m_ControlFlow__from;
}
::ecore::EReference_ptr ActionPackage::getCalls__to()
{
    return m_Calls__to;
}
::ecore::EReference_ptr ActionPackage::getCalls__from()
{
    return m_Calls__from;
}
::ecore::EReference_ptr ActionPackage::getCreates__to()
{
    return m_Creates__to;
}
::ecore::EReference_ptr ActionPackage::getCreates__from()
{
    return m_Creates__from;
}
::ecore::EReference_ptr ActionPackage::getReads__to()
{
    return m_Reads__to;
}
::ecore::EReference_ptr ActionPackage::getReads__from()
{
    return m_Reads__from;
}
::ecore::EReference_ptr ActionPackage::getWrites__to()
{
    return m_Writes__to;
}
::ecore::EReference_ptr ActionPackage::getWrites__from()
{
    return m_Writes__from;
}
::ecore::EReference_ptr ActionPackage::getCompliesTo__to()
{
    return m_CompliesTo__to;
}
::ecore::EReference_ptr ActionPackage::getCompliesTo__from()
{
    return m_CompliesTo__from;
}
::ecore::EReference_ptr ActionPackage::getUsesType__to()
{
    return m_UsesType__to;
}
::ecore::EReference_ptr ActionPackage::getUsesType__from()
{
    return m_UsesType__from;
}
::ecore::EReference_ptr ActionPackage::getAddresses__to()
{
    return m_Addresses__to;
}
::ecore::EReference_ptr ActionPackage::getAddresses__from()
{
    return m_Addresses__from;
}
::ecore::EReference_ptr ActionPackage::getActionRelationship__to()
{
    return m_ActionRelationship__to;
}
::ecore::EReference_ptr ActionPackage::getActionRelationship__from()
{
    return m_ActionRelationship__from;
}
::ecore::EReference_ptr ActionPackage::getThrows__to()
{
    return m_Throws__to;
}
::ecore::EReference_ptr ActionPackage::getThrows__from()
{
    return m_Throws__from;
}
::ecore::EReference_ptr ActionPackage::getDispatches__to()
{
    return m_Dispatches__to;
}
::ecore::EReference_ptr ActionPackage::getDispatches__from()
{
    return m_Dispatches__from;
}
::ecore::EReference_ptr ActionPackage::getEntryFlow__to()
{
    return m_EntryFlow__to;
}
::ecore::EReference_ptr ActionPackage::getEntryFlow__from()
{
    return m_EntryFlow__from;
}
::ecore::EReference_ptr ActionPackage::getExitFlow__to()
{
    return m_ExitFlow__to;
}
::ecore::EReference_ptr ActionPackage::getExitFlow__from()
{
    return m_ExitFlow__from;
}
::ecore::EReference_ptr ActionPackage::getExceptionFlow__to()
{
    return m_ExceptionFlow__to;
}
::ecore::EReference_ptr ActionPackage::getExceptionFlow__from()
{
    return m_ExceptionFlow__from;
}

