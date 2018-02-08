// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceOptions/ETypes.hpp
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

#ifndef RESOURCEOPTIONS_ETYPES_HPP
#define RESOURCEOPTIONS_ETYPES_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <ResourceOptions/dllResourceOptions.hpp>
#include <ResourceOptions_forward.hpp>

#include <ecore_forward.hpp>

#include "ResourceOptionsPackage.hpp"

/*PROTECTED REGION ID(ETypes_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ResourceOptions
{

class EXPORT_RESOURCEOPTIONS_DLL ETypes : public virtual ::ecore::EObject
{
public:
    ETypes();

    virtual ~ETypes();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getString () const;
    virtual void setString (::ecore::EString const& _string);

    virtual ::ecore::EString const& getEmptyString () const;
    virtual void setEmptyString (::ecore::EString const& _emptyString);

    virtual ::ecore::EDate getDate () const;
    virtual void setDate (::ecore::EDate _date);

    virtual ::ecore::EChar getChar () const;
    virtual void setChar (::ecore::EChar _char);

    virtual ::ecore::EBoolean isBool () const;
    virtual void setBool (::ecore::EBoolean _bool);

    virtual ::ecore::EDouble getDouble () const;
    virtual void setDouble (::ecore::EDouble _double);

    virtual ::ecore::EInt getInt () const;
    virtual void setInt (::ecore::EInt _int);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ResourceOptionsPackage::ETYPES;

    /*PROTECTED REGION ID(ETypes) START*/
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

    /*PROTECTED REGION ID(ETypesImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ETypes_ptr _this()
    {   return ETypes_ptr(this);}

    // Attributes

    ::ecore::EString m_string;

    ::ecore::EString m_emptyString;

    ::ecore::EDate m_date;

    ::ecore::EChar m_char;

    ::ecore::EBoolean m_bool;

    ::ecore::EDouble m_double;

    ::ecore::EInt m_int;

    // References

};

}
 // ResourceOptions

#endif // RESOURCEOPTIONS_ETYPES_HPP

