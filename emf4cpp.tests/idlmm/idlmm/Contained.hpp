// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/Contained.hpp
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

#ifndef IDLMM_CONTAINED_HPP
#define IDLMM_CONTAINED_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <idlmm/dllIdlmm.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(Contained_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL Contained : public virtual ::ecore::EObject

{
public:
    Contained();

    virtual ~Contained();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getIdentifier () const;
    virtual void setIdentifier (::ecore::EString const& _identifier);

    virtual ::ecore::EString const& getRepositoryId () const;
    virtual void setRepositoryId (::ecore::EString const& _repositoryId);

    virtual ::ecore::EString const& getVersion () const;
    virtual void setVersion (::ecore::EString const& _version);

    virtual ::ecore::EString const& getAbsoluteName () const;
    virtual void setAbsoluteName (::ecore::EString const& _absoluteName);

    // References
    virtual ::idlmm::Container_ptr getDefinedIn () const;
    virtual void setDefinedIn (::idlmm::Container_ptr _definedIn);
    virtual ::idlmm::Container_ptr basicgetDefinedIn ();
    virtual void basicsetDefinedIn (::idlmm::Container_ptr _definedIn);

    /*PROTECTED REGION ID(Contained) START*/
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

    /*PROTECTED REGION ID(ContainedImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EString m_identifier;

    ::ecore::EString m_repositoryId;

    ::ecore::EString m_version;

    ::ecore::EString m_absoluteName;

    // References

    ::idlmm::Container_ptr m_definedIn;

};

}
 // idlmm

#endif // IDLMM_CONTAINED_HPP

