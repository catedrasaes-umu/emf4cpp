// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/ImportStatement.cpp
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

#include "ImportStatement.hpp"
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/Xpand3Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::xpand3;

// Default constructor
ImportStatement::ImportStatement() :
        m_importedId(0)
{

    /*PROTECTED REGION ID(ImportStatementImpl__ImportStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ImportStatement::~ImportStatement()
{
    if (m_importedId)
    {
        delete m_importedId;
    }
}

/*PROTECTED REGION ID(ImportStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean ImportStatement::isExported() const
{
    return m_exported;
}

void ImportStatement::setExported(::ecore::EBoolean _exported)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_exported = m_exported;
#endif
    m_exported = _exported;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getImportStatement__exported(),
                _old_exported,
                m_exported
        );
        eNotify(&notification);
    }
#endif
}

// References

::xpand3::Identifier_ptr ImportStatement::getImportedId() const
{
    return m_importedId;
}

void ImportStatement::setImportedId(::xpand3::Identifier_ptr _importedId)
{
    ::xpand3::Identifier_ptr _old_importedId = m_importedId;

    m_importedId = _importedId;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::xpand3::Xpand3Package::_instance()->getImportStatement__importedId(),
                _old_importedId,
                m_importedId
        );
        eNotify(&notification);
    }
#endif

    delete _old_importedId;
    m_importedId->_setEContainer(this,
            ::xpand3::Xpand3Package::_instance()->getImportStatement__importedId());
}

