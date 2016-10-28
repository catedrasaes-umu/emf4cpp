// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightMultiple.hpp
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

#ifndef EOPPOSITE_RIGHTMULTIPLE_HPP
#define EOPPOSITE_RIGHTMULTIPLE_HPP

#include <eopposite_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <eopposite/dllEopposite.hpp>

#include <ecore_forward.hpp>
#include <eopposite/NamedObject.hpp>

/*PROTECTED REGION ID(RightMultiple_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace eopposite
{

class EXPORT_EOPPOSITE_DLL RightMultiple : public virtual ::eopposite::NamedObject
{
public:
    RightMultiple();

    virtual ~RightMultiple();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    const ::ecorecpp::mapping::EList< ::eopposite::LeftHand >& getLeftees () const;
    ::ecorecpp::mapping::EList< ::eopposite::LeftHand >& getLeftees ();

    /*PROTECTED REGION ID(RightMultiple) START*/
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

    /*PROTECTED REGION ID(RightMultipleImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::eopposite::LeftHand > > m_leftees;

};

}
 // eopposite

#endif // EOPPOSITE_RIGHTMULTIPLE_HPP

