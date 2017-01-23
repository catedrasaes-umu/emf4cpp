// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionField.hpp
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

#ifndef IDLMM_UNIONFIELD_HPP
#define IDLMM_UNIONFIELD_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <idlmm/dllIdlmm.hpp>

#include <ecore_forward.hpp>
#include <idlmm/Typed.hpp>

/*PROTECTED REGION ID(UnionField_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL UnionField : public virtual ::idlmm::Typed
{
public:
    UnionField();

    virtual ~UnionField();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getIdentifier () const;
    virtual void setIdentifier (::ecore::EString const& _identifier);

    virtual std::vector< ::idlmm::EAny > const& getLabel () const;
    virtual void setLabel (std::vector< ::idlmm::EAny > _label);

    virtual void addLabel (::idlmm::EAny const& _new_element_in_label);
    virtual void setLabelAt ( size_t _position, ::idlmm::EAny const& _new_element_in_label);
    virtual void deleteLabelAt ( size_t _position );

    // References

    /*PROTECTED REGION ID(UnionField) START*/
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

    /*PROTECTED REGION ID(UnionFieldImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EString m_identifier;

    std::vector< ::idlmm::EAny > m_label;

    // References

};

}
 // idlmm

#endif // IDLMM_UNIONFIELD_HPP

