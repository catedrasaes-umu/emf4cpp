// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObject.hpp
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

#ifndef ECORE_EOBJECT_HPP
#define ECORE_EOBJECT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

/*PROTECTED REGION ID(EObject_pre) ENABLED START*/
#include <ecorecpp/notify_forward.hpp>
#include <ecorecpp/util/TreeIterator.hpp>
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EObject
{
public:
    EObject();

    virtual ~EObject();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EClass_ptr eClass ();

    virtual ::ecore::EBoolean eIsProxy ();

    virtual ::ecore::EResource eResource ();

    virtual ::ecore::EObject_ptr eContainer ();

    virtual ::ecore::EStructuralFeature_ptr eContainingFeature ();

    virtual ::ecore::EReference_ptr eContainmentFeature ();

    virtual std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EObject>> eContents ();

    virtual ::ecorecpp::util::TreeIterator< ::ecore::EObject> eAllContents ();

    virtual std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EObject>> eCrossReferences ();

    virtual ::ecore::EJavaObject eGet ( ::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EJavaObject eGet ( ::ecore::EStructuralFeature_ptr _feature, ::ecore::EBoolean _resolve);

    virtual void eSet ( ::ecore::EStructuralFeature_ptr _feature, ::ecore::EJavaObject const& _newValue);

    virtual ::ecore::EBoolean eIsSet ( ::ecore::EStructuralFeature_ptr _feature);

    virtual void eUnset ( ::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EJavaObject eInvoke ( ::ecore::EOperation_ptr _operation, std::shared_ptr<::ecorecpp::mapping::EList< ::ecorecpp::mapping::any>> const& _arguments);

    // Attributes

    // References

    /* Special EObject C++ mapping internal helper operation but also
     * very useful if a Factory is reimplemented and returns derived
     * classes. */
    template<typename T>
    T* as()
    {
        return dynamic_cast<T*>(this);
    }

    template<typename T>
    const T* as() const
    {
        return dynamic_cast<const T*>(this);
    }

    /*PROTECTED REGION ID(EObject) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EObjectImpl) ENABLED START*/

    void _setEContainer(::ecore::EObject_ptr _eContainer,
            ::ecore::EStructuralFeature_ptr _eContainingFeature);

    void _setEResource(::ecorecpp::resource::Resource*);

    ::ecorecpp::resource::Resource* _getDirectResource();

#ifdef ECORECPP_NOTIFICATION_API
    // Notification API
    /**
     * TODO: Returns non-const reference temporarily.
     * It will return a EList<Adapter> type non-const reference when implemented.
     */
    std::vector< ::ecorecpp::notify::Adapter_ptr >& eAdapters();

    void eNotify( ::ecorecpp::notify::Notification_ptr _notification);

    bool eNotificationRequired();

    inline bool eDeliver()
    {
        return m_eDeliver;
    }

    inline void eSetDeliver(bool deliver)
    {
        m_eDeliver = deliver;
    }

    // Adapter
    virtual void notifyChanged( ::ecorecpp::notify::Notification_ptr _notification);
#endif

protected:

    ::ecore::EObject_ptr m_eContainer;
    ::ecore::EStructuralFeature_ptr m_eContainingFeature;

#ifdef ECORECPP_NOTIFICATION_API
    // Notification API
    std::vector< ::ecorecpp::notify::Adapter_ptr > m_eAdapters;
    bool m_eDeliver;
#endif

    ::ecorecpp::resource::Resource* m_eResource;

    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

};

}
 // ecore

#endif // ECORE_EOBJECT_HPP

