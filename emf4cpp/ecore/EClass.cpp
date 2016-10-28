// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClass.cpp
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

#include "EClass.hpp"
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::ecore;

// Default constructor
EClass::EClass() :
        m_eIDAttribute(0)
{

    m_eSuperTypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EClass, -1,
                    false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eSuperTypes() :
                            nullptr));
    m_eOperations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EOperation,
                    -1, true, true >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eOperations() :
                            nullptr,
                    ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS));
    m_eAllAttributes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EAttribute,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllAttributes() :
                            nullptr));
    m_eAllReferences.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EReference,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllReferences() :
                            nullptr));
    m_eReferences.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EReference,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eReferences() :
                            nullptr));
    m_eAttributes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EAttribute,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAttributes() :
                            nullptr));
    m_eAllContainments.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EReference,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllContainments() :
                            nullptr));
    m_eAllOperations.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EOperation,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllOperations() :
                            nullptr));
    m_eAllStructuralFeatures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EStructuralFeature, -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllStructuralFeatures() :
                            nullptr));
    m_eAllSuperTypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EClass, -1,
                    false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllSuperTypes() :
                            nullptr));
    m_eStructuralFeatures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EStructuralFeature, -1, true, true >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eStructuralFeatures() :
                            nullptr,
                    ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS));
    m_eGenericSuperTypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EGenericType,
                    -1, true, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eGenericSuperTypes() :
                            nullptr));
    m_eAllGenericSuperTypes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EGenericType,
                    -1, false, false >(this,
                    ::ecore::EcorePackage::_instance() ? ::ecore::EcorePackage::_instance()->getEClass__eAllGenericSuperTypes() :
                            nullptr));

    /*PROTECTED REGION ID(EClassImpl__EClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EClass::~EClass()
{
}

/*PROTECTED REGION ID(EClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::ecore::EBoolean EClass::isAbstract() const
{
    return m_abstract;
}

void EClass::setAbstract(::ecore::EBoolean _abstract)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_abstract = m_abstract;
#endif
    m_abstract = _abstract;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClass__abstract(),
                _old_abstract,
                m_abstract
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EClass::isInterface() const
{
    return m_interface;
}

void EClass::setInterface(::ecore::EBoolean _interface)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_interface = m_interface;
#endif
    m_interface = _interface;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClass__interface(),
                _old_interface,
                m_interface
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::ecore::EClass >& EClass::getESuperTypes() const
{
    return *m_eSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EClass >& EClass::getESuperTypes()
{
    return *m_eSuperTypes;
}

const ::ecorecpp::mapping::EList< ::ecore::EOperation >& EClass::getEOperations() const
{
    return *m_eOperations;
}

::ecorecpp::mapping::EList< ::ecore::EOperation >& EClass::getEOperations()
{
    return *m_eOperations;
}

const ::ecorecpp::mapping::EList< ::ecore::EAttribute >& EClass::getEAllAttributes() const
{
    return *m_eAllAttributes;
}

::ecorecpp::mapping::EList< ::ecore::EAttribute >& EClass::getEAllAttributes()
{
    return *m_eAllAttributes;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEAllReferences() const
{
    return *m_eAllReferences;
}

::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEAllReferences()
{
    return *m_eAllReferences;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEReferences() const
{
    return *m_eReferences;
}

::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEReferences()
{
    return *m_eReferences;
}

const ::ecorecpp::mapping::EList< ::ecore::EAttribute >& EClass::getEAttributes() const
{
    return *m_eAttributes;
}

::ecorecpp::mapping::EList< ::ecore::EAttribute >& EClass::getEAttributes()
{
    return *m_eAttributes;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEAllContainments() const
{
    return *m_eAllContainments;
}

::ecorecpp::mapping::EList< ::ecore::EReference >& EClass::getEAllContainments()
{
    return *m_eAllContainments;
}

const ::ecorecpp::mapping::EList< ::ecore::EOperation >& EClass::getEAllOperations() const
{
    return *m_eAllOperations;
}

::ecorecpp::mapping::EList< ::ecore::EOperation >& EClass::getEAllOperations()
{
    return *m_eAllOperations;
}

const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& EClass::getEAllStructuralFeatures() const
{
    return *m_eAllStructuralFeatures;
}

::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& EClass::getEAllStructuralFeatures()
{
    return *m_eAllStructuralFeatures;
}

const ::ecorecpp::mapping::EList< ::ecore::EClass >& EClass::getEAllSuperTypes() const
{
    return *m_eAllSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EClass >& EClass::getEAllSuperTypes()
{
    return *m_eAllSuperTypes;
}

::ecore::EAttribute_ptr EClass::getEIDAttribute() const
{
    return m_eIDAttribute;
}

void EClass::setEIDAttribute(::ecore::EAttribute_ptr _eIDAttribute)
{
    ::ecore::EAttribute_ptr _old_eIDAttribute = m_eIDAttribute;

    m_eIDAttribute = _eIDAttribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::ecore::EcorePackage::_instance()->getEClass__eIDAttribute(),
                _old_eIDAttribute,
                m_eIDAttribute
        );
        eNotify(&notification);
    }
#endif

}

const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& EClass::getEStructuralFeatures() const
{
    return *m_eStructuralFeatures;
}

::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& EClass::getEStructuralFeatures()
{
    return *m_eStructuralFeatures;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType >& EClass::getEGenericSuperTypes() const
{
    return *m_eGenericSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType >& EClass::getEGenericSuperTypes()
{
    return *m_eGenericSuperTypes;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType >& EClass::getEAllGenericSuperTypes() const
{
    return *m_eAllGenericSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType >& EClass::getEAllGenericSuperTypes()
{
    return *m_eAllGenericSuperTypes;
}

