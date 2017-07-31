// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/AbstractStatementWithBody.cpp
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

#include "AbstractStatementWithBody.hpp"
#include <xpand3/statement/AbstractStatement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractStatementWithBody.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
AbstractStatementWithBody::AbstractStatementWithBody()
{

    m_body.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::xpand3::statement::AbstractStatement, -1, true, false >(
                    this,
                    ::xpand3::statement::StatementPackage::_instance()->getAbstractStatementWithBody__body()));

    /*PROTECTED REGION ID(AbstractStatementWithBodyImpl__AbstractStatementWithBodyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractStatementWithBody::~AbstractStatementWithBody()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::xpand3::statement::AbstractStatement >& AbstractStatementWithBody::getBody() const
{
    return *m_body;
}

::ecorecpp::mapping::EList< ::xpand3::statement::AbstractStatement >& AbstractStatementWithBody::getBody()
{
    return *m_body;
}

