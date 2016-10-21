// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EFactory.cpp
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

#include "EFactory.hpp"
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EFactory::EFactory() :
        m_ePackage(0)
{

    /*PROTECTED REGION ID(EFactoryImpl__EFactoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EFactory::~EFactory()
{
}

/*PROTECTED REGION ID(EFactory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecore::EPackage_ptr EFactory::getEPackage()
{
    return m_ePackage;
}

::ecore::EPackage_ptr EFactory::basicgetEPackage()
{
    return m_ePackage;
}

void EFactory::basicsetEPackage(::ecore::EPackage_ptr _ePackage)
{
    ::ecore::EPackage_ptr _old_ePackage = m_ePackage;

    m_ePackage = _ePackage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEFactory__ePackage(),
                _old_ePackage,
                m_ePackage
        );
        eNotify(&notification);
    }
#endif

}

void EFactory::setEPackage(::ecore::EPackage_ptr _ePackage)
{
    if (_ePackage != m_ePackage)
    {
        ::ecore::EJavaObject _this = static_cast< ::ecore::EObject_ptr >(this);
        if (m_ePackage != nullptr)
        {
            m_ePackage->_inverseRemove(
                    ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE, _this);
        }
        if (_ePackage != nullptr)
        {
            _ePackage->_inverseAdd(
                    ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE, _this);
        }
        basicsetEPackage(_ePackage);
    }
}

