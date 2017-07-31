// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperation.hpp
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

#ifndef ECORE_EOPERATION_HPP
#define ECORE_EOPERATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ETypedElement.hpp>

/*PROTECTED REGION ID(EOperation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EOperation : public virtual ::ecore::ETypedElement
{
public:
    EOperation();

    virtual ~EOperation();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EInt getOperationID ();

    virtual ::ecore::EBoolean isOverrideOf ( ::ecore::EOperation_ptr _someOperation);

    // Attributes

    // References
    virtual ::ecore::EClass_ptr getEContainingClass () const;
    virtual void setEContainingClass (::ecore::EClass_ptr _eContainingClass);
    virtual ::ecore::EClass_ptr basicgetEContainingClass ();
    virtual void basicsetEContainingClass (::ecore::EClass_ptr _eContainingClass);

    virtual const ::ecorecpp::mapping::EList< ::ecore::ETypeParameter >& getETypeParameters () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::ETypeParameter >& getETypeParameters ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EParameter >& getEParameters () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EParameter >& getEParameters ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EClassifier >& getEExceptions () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClassifier >& getEExceptions ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEGenericExceptions () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEGenericExceptions ();

    /*PROTECTED REGION ID(EOperation) START*/
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

    /*PROTECTED REGION ID(EOperationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

    ::ecore::EClass_ptr m_eContainingClass;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::ETypeParameter >> m_eTypeParameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EParameter >> m_eParameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EClassifier >> m_eExceptions;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EGenericType >> m_eGenericExceptions;

};

}
 // ecore

#endif // ECORE_EOPERATION_HPP

