// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperation.cpp
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

using namespace ::ecore;

// Default constructor
EOperation::EOperation() :
        m_eContainingClass(0)
{

    m_eTypeParameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::ETypeParameter, -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eTypeParameters() :
                            nullptr));
    m_eParameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EParameter,
                    -1, true, true >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eParameters() :
                            nullptr,
                    ::ecore::EcorePackage::EPARAMETER__EOPERATION));
    m_eExceptions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EClassifier,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eExceptions() :
                            nullptr));
    m_eGenericExceptions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EGenericType,
                    -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEOperation__eGenericExceptions() :
                            nullptr));

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

/*PROTECTED REGION ID(EOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecore::EClass_ptr EOperation::getEContainingClass()
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
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEOperation__eContainingClass(),
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
        ::ecore::EJavaObject _this = static_cast< ::ecore::EObject_ptr >(this);
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

::ecorecpp::mapping::EList< ::ecore::ETypeParameter >& EOperation::getETypeParameters()
{
    return *m_eTypeParameters;
}

::ecorecpp::mapping::EList< ::ecore::EParameter >& EOperation::getEParameters()
{
    return *m_eParameters;
}

::ecorecpp::mapping::EList< ::ecore::EClassifier >& EOperation::getEExceptions()
{
    return *m_eExceptions;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType >& EOperation::getEGenericExceptions()
{
    return *m_eGenericExceptions;
}

