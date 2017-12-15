// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/LeftHand.cpp
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

#include "LeftHand.hpp"
#include <eopposite/NamedObject.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "eopposite/EoppositePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LeftHand.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

// Default constructor
LeftHand::LeftHand() :
        m_rightee(0), m_rightMultiple(0)
{

    /*PROTECTED REGION ID(LeftHandImpl__LeftHandImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

LeftHand::~LeftHand()
{
}

// Attributes

// References

::eopposite::RightHand_ptr LeftHand::getRightee() const
{
    return m_rightee;
}

::eopposite::RightHand_ptr LeftHand::basicgetRightee()
{
    return m_rightee;
}

void LeftHand::basicsetRightee(::eopposite::RightHand_ptr _rightee)
{
    ::eopposite::RightHand_ptr _old_rightee = m_rightee;

    m_rightee = _rightee;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::eopposite::EoppositePackage::_instance()->getLeftHand__rightee(),
                _old_rightee,
                m_rightee
        );
        eNotify(&notification);
    }
#endif

}

void LeftHand::setRightee(::eopposite::RightHand_ptr _rightee)
{
    if (_rightee != m_rightee)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_rightee != nullptr)
        {
            m_rightee->_inverseRemove(
                    ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE, _this);
        }
        if (_rightee != nullptr)
        {
            _rightee->_inverseAdd(
                    ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE, _this);
        }
        basicsetRightee(_rightee);
    }
}

::eopposite::RightMultiple_ptr LeftHand::getRightMultiple() const
{
    return m_rightMultiple;
}

::eopposite::RightMultiple_ptr LeftHand::basicgetRightMultiple()
{
    return m_rightMultiple;
}

void LeftHand::basicsetRightMultiple(
        ::eopposite::RightMultiple_ptr _rightMultiple)
{
    ::eopposite::RightMultiple_ptr _old_rightMultiple = m_rightMultiple;

    m_rightMultiple = _rightMultiple;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::eopposite::EoppositePackage::_instance()->getLeftHand__rightMultiple(),
                _old_rightMultiple,
                m_rightMultiple
        );
        eNotify(&notification);
    }
#endif

}

void LeftHand::setRightMultiple(::eopposite::RightMultiple_ptr _rightMultiple)
{
    if (_rightMultiple != m_rightMultiple)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_rightMultiple != nullptr)
        {
            m_rightMultiple->_inverseRemove(
                    ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES,
                    _this);
        }
        if (_rightMultiple != nullptr)
        {
            _rightMultiple->_inverseAdd(
                    ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES,
                    _this);
        }
        basicsetRightMultiple(_rightMultiple);
    }
}

