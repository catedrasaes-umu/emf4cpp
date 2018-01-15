// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotation.cpp
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

#include "EAnnotation.hpp"
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EAnnotation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EAnnotation::EAnnotation() :
        m_eModelElement(0)
{

    m_details.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EStringToStringMapEntry_ptr, -1, true, false >(
                    this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEAnnotation__details() :
                            ::ecore::EReference_ptr()));
    m_contents.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EObject_ptr,
                    -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEAnnotation__contents() :
                            ::ecore::EReference_ptr()));
    m_references.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EObject_ptr,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEAnnotation__references() :
                            ::ecore::EReference_ptr()));

    /*PROTECTED REGION ID(EAnnotationImpl__EAnnotationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EAnnotation::~EAnnotation()
{
}

// Attributes

::ecore::EString const& EAnnotation::getSource() const
{
    return m_source;
}

void EAnnotation::setSource(::ecore::EString const& _source)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_source = m_source;
#endif
    m_source = _source;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEAnnotation__source(),
                _old_source,
                m_source
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& EAnnotation::getDetails() const
{
    return *m_details;
}

::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& EAnnotation::getDetails()
{
    return *m_details;
}

::ecore::EModelElement_ptr EAnnotation::getEModelElement() const
{
    return m_eModelElement;
}

::ecore::EModelElement_ptr EAnnotation::basicgetEModelElement()
{
    return m_eModelElement;
}

void EAnnotation::basicsetEModelElement(
        ::ecore::EModelElement_ptr _eModelElement)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EModelElement_ptr _old_eModelElement = m_eModelElement;
#endif
    m_eModelElement = _eModelElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEAnnotation__eModelElement(),
                _old_eModelElement,
                m_eModelElement
        );
        eNotify(&notification);
    }
#endif
}

void EAnnotation::setEModelElement(::ecore::EModelElement_ptr _eModelElement)
{
    if (_eModelElement != m_eModelElement)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_eModelElement != nullptr)
        {
            m_eModelElement->_inverseRemove(
                    ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS, _this);
        }
        if (_eModelElement != nullptr)
        {
            _eModelElement->_inverseAdd(
                    ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS, _this);
        }
        basicsetEModelElement(_eModelElement);
    }
}

const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getContents() const
{
    return *m_contents;
}

::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getContents()
{
    return *m_contents;
}

const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getReferences() const
{
    return *m_references;
}

::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getReferences()
{
    return *m_references;
}

