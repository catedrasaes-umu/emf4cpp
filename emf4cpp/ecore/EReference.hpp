// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EReference.hpp
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

#ifndef ECORE_EREFERENCE_HPP
#define ECORE_EREFERENCE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/EStructuralFeature.hpp>

/*PROTECTED REGION ID(EReference_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EReference : public virtual ::ecore::EStructuralFeature
{
public:
    EReference();

    virtual ~EReference();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isContainment () const;
    virtual void setContainment (::ecore::EBoolean _containment);

    virtual ::ecore::EBoolean isContainer () const;
    virtual void setContainer (::ecore::EBoolean _container);

    virtual ::ecore::EBoolean isResolveProxies () const;
    virtual void setResolveProxies (::ecore::EBoolean _resolveProxies);

    // References
    virtual ::ecore::EReference_ptr getEOpposite () const;
    virtual void setEOpposite (::ecore::EReference_ptr _eOpposite);

    virtual ::ecore::EClass_ptr getEReferenceType () const;
    virtual void setEReferenceType (::ecore::EClass_ptr _eReferenceType);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEKeys () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEKeys ();

    /*PROTECTED REGION ID(EReference) START*/
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

    /*PROTECTED REGION ID(EReferenceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EBoolean m_containment;

    ::ecore::EBoolean m_container;

    ::ecore::EBoolean m_resolveProxies;

    // References

    ::ecore::EReference_ptr m_eOpposite;

    ::ecore::EClass_ptr m_eReferenceType;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EAttribute >> m_eKeys;

};

}
 // ecore

#endif // ECORE_EREFERENCE_HPP

