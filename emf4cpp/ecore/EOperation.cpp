// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperation.cpp
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

#include "EOperation.hpp"
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EOperation::EOperation() :
        m_eContainingClass(0)
{

    m_eTypeParameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::ETypeParameter_ptr, -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eTypeParameters() :
                            ::ecore::EReference_ptr()));
    m_eParameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EParameter_ptr, -1, true, true >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eParameters() :
                            ::ecore::EReference_ptr(),
                    ::ecore::EcorePackage::EPARAMETER__EOPERATION));
    m_eExceptions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EClassifier_ptr, -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eExceptions() :
                            ::ecore::EReference_ptr()));
    m_eGenericExceptions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EGenericType_ptr, -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eGenericExceptions() :
                            ::ecore::EReference_ptr()));

    /*PROTECTED REGION ID(EOperationImpl__EOperationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EOperation::~EOperation()
{
}

// Attributes

// References

::ecore::EClass_ptr EOperation::getEContainingClass() const
{
    return m_eContainingClass;
}

::ecore::EClass_ptr EOperation::basicgetEContainingClass()
{
    return m_eContainingClass;
}

void EOperation::basicsetEContainingClass(::ecore::EClass_ptr _eContainingClass)
{
    ::ecore::EClass_ptr _old_eContainingClass = m_eContainingClass;

    m_eContainingClass = _eContainingClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEOperation__eContainingClass(),
                _old_eContainingClass,
                m_eContainingClass
        );
        eNotify(&notification);
    }
#endif

}

void EOperation::setEContainingClass(::ecore::EClass_ptr _eContainingClass)
{
    if (_eContainingClass != m_eContainingClass)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_eContainingClass != nullptr)
        {
            m_eContainingClass->_inverseRemove(
                    ::ecore::EcorePackage::ECLASS__EOPERATIONS, _this);
        }
        if (_eContainingClass != nullptr)
        {
            _eContainingClass->_inverseAdd(
                    ::ecore::EcorePackage::ECLASS__EOPERATIONS, _this);
        }
        basicsetEContainingClass(_eContainingClass);
    }
}

const ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& EOperation::getETypeParameters() const
{
    return *m_eTypeParameters;
}

::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& EOperation::getETypeParameters()
{
    return *m_eTypeParameters;
}

const ::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& EOperation::getEParameters() const
{
    return *m_eParameters;
}

::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& EOperation::getEParameters()
{
    return *m_eParameters;
}

const ::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EOperation::getEExceptions() const
{
    return *m_eExceptions;
}

::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EOperation::getEExceptions()
{
    return *m_eExceptions;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EOperation::getEGenericExceptions() const
{
    return *m_eGenericExceptions;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EOperation::getEGenericExceptions()
{
    return *m_eGenericExceptions;
}

