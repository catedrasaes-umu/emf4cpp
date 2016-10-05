// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/EnumerationPackageImpl.cpp
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

#include <enumeration/EnumerationPackage.hpp>
#include <enumeration/EnumerationFactory.hpp>
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
#include <ecore/EcorePackage.hpp>

using namespace ::enumeration;

EnumerationPackage::EnumerationPackage()
{

    // Feature definitions of Bird
    m_Bird__type = new ::ecore::EAttribute();
    m_Bird__name = new ::ecore::EAttribute();

    /* Now one can safely ask for a feature definition of
     * a class, though it is not yet usable. */
    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = EnumerationFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Bird
    m_BirdEClass = new ::ecore::EClass();
    m_BirdEClass->setClassifierID(BIRD);
    m_BirdEClass->setEPackage(this);
    getEClassifiers().push_back(m_BirdEClass);
    // m_Bird__type has already been allocated above
    m_Bird__type->setFeatureID(::enumeration::EnumerationPackage::BIRD__TYPE);
    m_BirdEClass->getEStructuralFeatures().push_back(m_Bird__type);
    // m_Bird__name has already been allocated above
    m_Bird__name->setFeatureID(::enumeration::EnumerationPackage::BIRD__NAME);
    m_BirdEClass->getEStructuralFeatures().push_back(m_Bird__name);

    // Create enums

    m_BirdTypeEEnum = new ::ecore::EEnum();
    m_BirdTypeEEnum->setClassifierID(BIRDTYPE);
    m_BirdTypeEEnum->setEPackage(this);
    getEClassifiers().push_back(m_BirdTypeEEnum);

    // Create data types

    // Initialize package
    setName("enumeration");
    setNsPrefix("enumeration");
    setNsURI("http://inchron.com/tests/enumeration");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Bird
    m_BirdEClass->setName("Bird");
    m_BirdEClass->setAbstract(false);
    m_BirdEClass->setInterface(false);
    m_Bird__type->setEType(m_BirdTypeEEnum);
    m_Bird__type->setName("type");
    m_Bird__type->setDefaultValueLiteral("blackbird");
    m_Bird__type->setLowerBound(0);
    m_Bird__type->setUpperBound(1);
    m_Bird__type->setTransient(false);
    m_Bird__type->setVolatile(false);
    m_Bird__type->setChangeable(true);
    m_Bird__type->setUnsettable(false);
    m_Bird__type->setID(false);
    m_Bird__type->setUnique(true);
    m_Bird__type->setDerived(false);
    m_Bird__type->setOrdered(true);
    m_Bird__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Bird__name->setName("name");
    m_Bird__name->setDefaultValueLiteral("Birdy");
    m_Bird__name->setLowerBound(0);
    m_Bird__name->setUpperBound(1);
    m_Bird__name->setTransient(false);
    m_Bird__name->setVolatile(false);
    m_Bird__name->setChangeable(true);
    m_Bird__name->setUnsettable(false);
    m_Bird__name->setID(false);
    m_Bird__name->setUnique(true);
    m_Bird__name->setDerived(false);
    m_Bird__name->setOrdered(true);

    // TODO: Initialize data types

    // BirdType
    m_BirdTypeEEnum->setName("BirdType");
    m_BirdTypeEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // unknown
        _el->setName("unknown");
        _el->setValue(-1);
        _el->setLiteral("unknown");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // blackbird
        _el->setName("blackbird");
        _el->setValue(0);
        _el->setLiteral("blackbird");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // thrush
        _el->setName("thrush");
        _el->setValue(1);
        _el->setLiteral("thrush");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // finch
        _el->setName("finch");
        _el->setValue(2);
        _el->setLiteral("finch");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // starling
        _el->setName("starling");
        _el->setValue(3);
        _el->setLiteral("starling");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = new ::ecore::EEnumLiteral();
        // stork
        _el->setName("stork");
        _el->setValue(7);
        _el->setLiteral("stork");
        _el->setEEnum(m_BirdTypeEEnum);
        m_BirdTypeEEnum->getELiterals().push_back(_el);
    }

    _initialize();
}

::ecore::EClass_ptr EnumerationPackage::getBird()
{
    return m_BirdEClass;
}
::ecore::EEnum_ptr EnumerationPackage::getBirdType()
{
    return m_BirdTypeEEnum;
}

::ecore::EAttribute_ptr EnumerationPackage::getBird__type()
{
    return m_Bird__type;
}
::ecore::EAttribute_ptr EnumerationPackage::getBird__name()
{
    return m_Bird__name;
}

