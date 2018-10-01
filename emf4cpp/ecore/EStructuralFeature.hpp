// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStructuralFeature.hpp
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

#ifndef ECORE_ESTRUCTURALFEATURE_HPP
#define ECORE_ESTRUCTURALFEATURE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ETypedElement.hpp>

/*PROTECTED REGION ID(EStructuralFeature_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EStructuralFeature : public virtual ::ecore::ETypedElement
{
public:
    EStructuralFeature();

    virtual ~EStructuralFeature();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EInt getFeatureID ();

    virtual int getContainerClass ();

    // Attributes
    virtual ::ecore::EBoolean isChangeable () const;
    virtual void setChangeable (::ecore::EBoolean _changeable);

    virtual ::ecore::EBoolean isVolatile () const;
    virtual void setVolatile (::ecore::EBoolean _volatile);

    virtual ::ecore::EBoolean isTransient () const;
    virtual void setTransient (::ecore::EBoolean _transient);

    virtual ::ecore::EString const& getDefaultValueLiteral () const;
    virtual void setDefaultValueLiteral (::ecore::EString const& _defaultValueLiteral);

    virtual ::ecore::EJavaObject const& getDefaultValue () const;
    virtual void setDefaultValue (::ecore::EJavaObject const& _defaultValue);

    virtual ::ecore::EBoolean isUnsettable () const;
    virtual void setUnsettable (::ecore::EBoolean _unsettable);

    virtual ::ecore::EBoolean isDerived () const;
    virtual void setDerived (::ecore::EBoolean _derived);

    // References
    virtual ::ecore::EClass_ptr getEContainingClass () const;
    virtual void setEContainingClass (::ecore::EClass_ptr _eContainingClass);
    virtual ::ecore::EClass_ptr basicgetEContainingClass ();
    virtual void basicsetEContainingClass (::ecore::EClass_ptr _eContainingClass);

    /*PROTECTED REGION ID(EStructuralFeature) ENABLED START*/

    // virtual void setFeatureID ( ::ecore::EInt _id) = 0;
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EStructuralFeatureImpl) ENABLED START*/

public:

    virtual void setFeatureID(::ecore::EInt _id);

protected:

    ::ecore::EInt m_id;

    /*PROTECTED REGION END*/

protected:
    EStructuralFeature_ptr _this()
    {   return EStructuralFeature_ptr(this);}

    // Attributes

    ::ecore::EBoolean m_changeable;

    ::ecore::EBoolean m_volatile;

    ::ecore::EBoolean m_transient;

    ::ecore::EString m_defaultValueLiteral;

    ::ecore::EJavaObject m_defaultValue;

    ::ecore::EBoolean m_unsettable;

    ::ecore::EBoolean m_derived;

    // References

    ::ecore::EClass_ptr m_eContainingClass;

};

}
 // ecore

#endif // ECORE_ESTRUCTURALFEATURE_HPP

