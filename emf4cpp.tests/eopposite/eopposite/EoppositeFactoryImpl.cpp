// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositeFactoryImpl.cpp
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

#include <eopposite/EoppositeFactory.hpp>
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/TopLevel.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::eopposite;

EoppositeFactory::EoppositeFactory()
{
}

::ecore::EObject_ptr EoppositeFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case EoppositePackage::TOPLEVEL:
        return createTopLevel();
    case EoppositePackage::NAMEDOBJECT:
        return createNamedObject();
    case EoppositePackage::LEFTHAND:
        return createLeftHand();
    case EoppositePackage::RIGHTHAND:
        return createRightHand();
    case EoppositePackage::RIGHTMULTIPLE:
        return createRightMultiple();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject EoppositeFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString EoppositeFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

TopLevel_ptr EoppositeFactory::createTopLevel()
{
    return boost::intrusive_ptr < TopLevel > (new TopLevel);
}
NamedObject_ptr EoppositeFactory::createNamedObject()
{
    return boost::intrusive_ptr < NamedObject > (new NamedObject);
}
LeftHand_ptr EoppositeFactory::createLeftHand()
{
    return boost::intrusive_ptr < LeftHand > (new LeftHand);
}
RightHand_ptr EoppositeFactory::createRightHand()
{
    return boost::intrusive_ptr < RightHand > (new RightHand);
}
RightMultiple_ptr EoppositeFactory::createRightMultiple()
{
    return boost::intrusive_ptr < RightMultiple > (new RightMultiple);
}

