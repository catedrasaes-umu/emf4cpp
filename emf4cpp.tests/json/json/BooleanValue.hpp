// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/BooleanValue.hpp
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

#ifndef JSON_BOOLEANVALUE_HPP
#define JSON_BOOLEANVALUE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <json/dllJson.hpp>
#include <json_forward.hpp>

#include <ecore_forward.hpp>
#include <json/Value.hpp>

#include "JsonPackage.hpp"

/*PROTECTED REGION ID(BooleanValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace json
{

class EXPORT_JSON_DLL BooleanValue : public virtual ::json::Value
{
public:
    BooleanValue();

    virtual ~BooleanValue();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isValue () const;
    virtual void setValue (::ecore::EBoolean _value);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = JsonPackage::BOOLEANVALUE;

    /*PROTECTED REGION ID(BooleanValue) START*/
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

    /*PROTECTED REGION ID(BooleanValueImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    BooleanValue_ptr _this()
    {   return BooleanValue_ptr(this);}

    // Attributes

    ::ecore::EBoolean m_value;

    // References

};

}
 // json

#endif // JSON_BOOLEANVALUE_HPP

