// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureFactoryImpl.cpp
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

#include <kdm/structure/StructureFactory.hpp>
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/structure/Subsystem.hpp>
#include <kdm/structure/Layer.hpp>
#include <kdm/structure/StructureModel.hpp>
#include <kdm/structure/Component.hpp>
#include <kdm/structure/SoftwareSystem.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>
#include <kdm/structure/StructureRelationship.hpp>
#include <kdm/structure/ArchitectureView.hpp>
#include <kdm/structure/StructureElement.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::structure;

StructureFactory::StructureFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr StructureFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case StructurePackage::ABSTRACTSTRUCTUREELEMENT:
        return createAbstractStructureElement();
    case StructurePackage::SUBSYSTEM:
        return createSubsystem();
    case StructurePackage::LAYER:
        return createLayer();
    case StructurePackage::STRUCTUREMODEL:
        return createStructureModel();
    case StructurePackage::COMPONENT:
        return createComponent();
    case StructurePackage::SOFTWARESYSTEM:
        return createSoftwareSystem();
    case StructurePackage::ABSTRACTSTRUCTURERELATIONSHIP:
        return createAbstractStructureRelationship();
    case StructurePackage::STRUCTURERELATIONSHIP:
        return createStructureRelationship();
    case StructurePackage::ARCHITECTUREVIEW:
        return createArchitectureView();
    case StructurePackage::STRUCTUREELEMENT:
        return createStructureElement();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject StructureFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString StructureFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractStructureElement_ptr StructureFactory::createAbstractStructureElement()
{
    return new AbstractStructureElement();
}
Subsystem_ptr StructureFactory::createSubsystem()
{
    return new Subsystem();
}
Layer_ptr StructureFactory::createLayer()
{
    return new Layer();
}
StructureModel_ptr StructureFactory::createStructureModel()
{
    return new StructureModel();
}
Component_ptr StructureFactory::createComponent()
{
    return new Component();
}
SoftwareSystem_ptr StructureFactory::createSoftwareSystem()
{
    return new SoftwareSystem();
}
AbstractStructureRelationship_ptr StructureFactory::createAbstractStructureRelationship()
{
    return new AbstractStructureRelationship();
}
StructureRelationship_ptr StructureFactory::createStructureRelationship()
{
    return new StructureRelationship();
}
ArchitectureView_ptr StructureFactory::createArchitectureView()
{
    return new ArchitectureView();
}
StructureElement_ptr StructureFactory::createStructureElement()
{
    return new StructureElement();
}

