// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/LeftHand.hpp
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

#ifndef EOPPOSITE_LEFTHAND_HPP
#define EOPPOSITE_LEFTHAND_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <eopposite/dllEopposite.hpp>
#include <eopposite_forward.hpp>

#include <ecore_forward.hpp>
#include <eopposite/NamedObject.hpp>

#include "EoppositePackage.hpp"

/*PROTECTED REGION ID(LeftHand_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace eopposite
{

class EXPORT_EOPPOSITE_DLL LeftHand : public virtual ::eopposite::NamedObject
{
public:
    LeftHand();

    virtual ~LeftHand();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::eopposite::RightHand_ptr getRightee () const;
    virtual void setRightee (::eopposite::RightHand_ptr _rightee);
    virtual ::eopposite::RightHand_ptr basicgetRightee ();
    virtual void basicsetRightee (::eopposite::RightHand_ptr _rightee);

    virtual ::eopposite::RightMultiple_ptr getRightMultiple () const;
    virtual void setRightMultiple (::eopposite::RightMultiple_ptr _rightMultiple);
    virtual ::eopposite::RightMultiple_ptr basicgetRightMultiple ();
    virtual void basicsetRightMultiple (::eopposite::RightMultiple_ptr _rightMultiple);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EoppositePackage::LEFTHAND;

    /*PROTECTED REGION ID(LeftHand) START*/
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

    /*PROTECTED REGION ID(LeftHandImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    LeftHand_ptr _this()
    {   return LeftHand_ptr(this);}

    // Attributes

    // References

    ::eopposite::RightHand_ptr m_rightee;

    ::eopposite::RightMultiple_ptr m_rightMultiple;

};

}
 // eopposite

#endif // EOPPOSITE_LEFTHAND_HPP

