// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/Cast.cpp
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

#include "Cast.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::expression;

// Default constructor
Cast::Cast() :
        m_type(0), m_target(0)
{

    /*PROTECTED REGION ID(CastImpl__CastImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Cast::~Cast()
{
    if (m_type)
    {
        delete m_type;
    }
    if (m_target)
    {
        delete m_target;
    }
}

/*PROTECTED REGION ID(Cast.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::xpand3::Identifier_ptr Cast::getType()
{
    return m_type;
}

void Cast::setType(::xpand3::Identifier_ptr _type)
{
    ::xpand3::Identifier_ptr _old_type = m_type;

    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCast__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif

    delete _old_type;
    m_type->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getCast__type());
}

::xpand3::expression::AbstractExpression_ptr Cast::getTarget()
{
    return m_target;
}

void Cast::setTarget(::xpand3::expression::AbstractExpression_ptr _target)
{
    ::xpand3::expression::AbstractExpression_ptr _old_target = m_target;

    m_target = _target;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::expression::ExpressionPackage::_instance()->getCast__target(),
                _old_target,
                m_target
        );
        eNotify(&notification);
    }
#endif

    delete _old_target;
    m_target->_setEContainer(this,
            ::xpand3::expression::ExpressionPackage::_instance()->getCast__target());
}

