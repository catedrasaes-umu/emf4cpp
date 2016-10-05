// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/FileStatement.cpp
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

#include "FileStatement.hpp"
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3::statement;

// Default constructor
FileStatement::FileStatement() :
        m_fileNameExpression(0), m_outletNameIdentifier(0)
{

    /*PROTECTED REGION ID(FileStatementImpl__FileStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

FileStatement::~FileStatement()
{
    if (m_fileNameExpression)
    {
        delete m_fileNameExpression;
    }
    if (m_outletNameIdentifier)
    {
        delete m_outletNameIdentifier;
    }
}

/*PROTECTED REGION ID(FileStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean FileStatement::isOnce() const
{
    return m_once;
}

void FileStatement::setOnce(::ecore::EBoolean _once)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_once = m_once;
#endif
    m_once = _once;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getFileStatement__once(),
                _old_once,
                m_once
        );
        eNotify(&notification);
    }
#endif
}

// References
::xpand3::expression::AbstractExpression_ptr FileStatement::getFileNameExpression()
{
    return m_fileNameExpression;
}

void FileStatement::setFileNameExpression(
        ::xpand3::expression::AbstractExpression_ptr _fileNameExpression)
{
    ::xpand3::expression::AbstractExpression_ptr _old_fileNameExpression =
            m_fileNameExpression;

    m_fileNameExpression = _fileNameExpression;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getFileStatement__fileNameExpression(),
                _old_fileNameExpression,
                m_fileNameExpression
        );
        eNotify(&notification);
    }
#endif

    delete _old_fileNameExpression;
    m_fileNameExpression->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getFileStatement__fileNameExpression());
}

::xpand3::Identifier_ptr FileStatement::getOutletNameIdentifier()
{
    return m_outletNameIdentifier;
}

void FileStatement::setOutletNameIdentifier(
        ::xpand3::Identifier_ptr _outletNameIdentifier)
{
    ::xpand3::Identifier_ptr _old_outletNameIdentifier = m_outletNameIdentifier;

    m_outletNameIdentifier = _outletNameIdentifier;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::statement::StatementPackage::_instance()->getFileStatement__outletNameIdentifier(),
                _old_outletNameIdentifier,
                m_outletNameIdentifier
        );
        eNotify(&notification);
    }
#endif

    delete _old_outletNameIdentifier;
    m_outletNameIdentifier->_setEContainer(this,
            ::xpand3::statement::StatementPackage::_instance()->getFileStatement__outletNameIdentifier());
}

