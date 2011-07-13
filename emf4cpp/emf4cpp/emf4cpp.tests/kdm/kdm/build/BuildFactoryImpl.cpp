// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildFactoryImpl.cpp
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

#include <kdm/build/BuildFactory.hpp>
#include <kdm/build/BuildPackage.hpp>
#include <kdm/build/AbstractBuildElement.hpp>
#include <kdm/build/BuildResource.hpp>
#include <kdm/build/BuildDescription.hpp>
#include <kdm/build/SymbolicLink.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/build/LinksTo.hpp>
#include <kdm/build/Consumes.hpp>
#include <kdm/build/BuildModel.hpp>
#include <kdm/build/BuildComponent.hpp>
#include <kdm/build/Supplier.hpp>
#include <kdm/build/Tool.hpp>
#include <kdm/build/BuildElement.hpp>
#include <kdm/build/BuildRelationship.hpp>
#include <kdm/build/SuppliedBy.hpp>
#include <kdm/build/Library.hpp>
#include <kdm/build/BuildStep.hpp>
#include <kdm/build/Produces.hpp>
#include <kdm/build/SupportedBy.hpp>
#include <kdm/build/BuildProduct.hpp>
#include <kdm/build/DescribedBy.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::build;

BuildFactory::BuildFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr BuildFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case BuildPackage::ABSTRACTBUILDELEMENT:
        return createAbstractBuildElement();
    case BuildPackage::BUILDRESOURCE:
        return createBuildResource();
    case BuildPackage::BUILDDESCRIPTION:
        return createBuildDescription();
    case BuildPackage::SYMBOLICLINK:
        return createSymbolicLink();
    case BuildPackage::ABSTRACTBUILDRELATIONSHIP:
        return createAbstractBuildRelationship();
    case BuildPackage::LINKSTO:
        return createLinksTo();
    case BuildPackage::CONSUMES:
        return createConsumes();
    case BuildPackage::BUILDMODEL:
        return createBuildModel();
    case BuildPackage::BUILDCOMPONENT:
        return createBuildComponent();
    case BuildPackage::SUPPLIER:
        return createSupplier();
    case BuildPackage::TOOL:
        return createTool();
    case BuildPackage::BUILDELEMENT:
        return createBuildElement();
    case BuildPackage::BUILDRELATIONSHIP:
        return createBuildRelationship();
    case BuildPackage::SUPPLIEDBY:
        return createSuppliedBy();
    case BuildPackage::LIBRARY:
        return createLibrary();
    case BuildPackage::BUILDSTEP:
        return createBuildStep();
    case BuildPackage::PRODUCES:
        return createProduces();
    case BuildPackage::SUPPORTEDBY:
        return createSupportedBy();
    case BuildPackage::BUILDPRODUCT:
        return createBuildProduct();
    case BuildPackage::DESCRIBEDBY:
        return createDescribedBy();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject BuildFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString BuildFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractBuildElement_ptr BuildFactory::createAbstractBuildElement()
{
    return new AbstractBuildElement();
}
BuildResource_ptr BuildFactory::createBuildResource()
{
    return new BuildResource();
}
BuildDescription_ptr BuildFactory::createBuildDescription()
{
    return new BuildDescription();
}
SymbolicLink_ptr BuildFactory::createSymbolicLink()
{
    return new SymbolicLink();
}
AbstractBuildRelationship_ptr BuildFactory::createAbstractBuildRelationship()
{
    return new AbstractBuildRelationship();
}
LinksTo_ptr BuildFactory::createLinksTo()
{
    return new LinksTo();
}
Consumes_ptr BuildFactory::createConsumes()
{
    return new Consumes();
}
BuildModel_ptr BuildFactory::createBuildModel()
{
    return new BuildModel();
}
BuildComponent_ptr BuildFactory::createBuildComponent()
{
    return new BuildComponent();
}
Supplier_ptr BuildFactory::createSupplier()
{
    return new Supplier();
}
Tool_ptr BuildFactory::createTool()
{
    return new Tool();
}
BuildElement_ptr BuildFactory::createBuildElement()
{
    return new BuildElement();
}
BuildRelationship_ptr BuildFactory::createBuildRelationship()
{
    return new BuildRelationship();
}
SuppliedBy_ptr BuildFactory::createSuppliedBy()
{
    return new SuppliedBy();
}
Library_ptr BuildFactory::createLibrary()
{
    return new Library();
}
BuildStep_ptr BuildFactory::createBuildStep()
{
    return new BuildStep();
}
Produces_ptr BuildFactory::createProduces()
{
    return new Produces();
}
SupportedBy_ptr BuildFactory::createSupportedBy()
{
    return new SupportedBy();
}
BuildProduct_ptr BuildFactory::createBuildProduct()
{
    return new BuildProduct();
}
DescribedBy_ptr BuildFactory::createDescribedBy()
{
    return new DescribedBy();
}

