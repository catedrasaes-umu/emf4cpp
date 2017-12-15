// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/Company.hpp
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

#ifndef COMPANY_COMPANY_HPP
#define COMPANY_COMPANY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <company/dllCompany.hpp>
#include <company_forward.hpp>

#include <ecore_forward.hpp>

#include "CompanyPackage.hpp"

/*PROTECTED REGION ID(Company_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace company
{

class EXPORT_COMPANY_DLL Company : public virtual ::ecore::EObject
{
public:
    Company();

    virtual ~Company();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::company::Department_ptr >& getDepartments () const;
    virtual ::ecorecpp::mapping::EList< ::company::Department_ptr >& getDepartments ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CompanyPackage::COMPANY;

    /*PROTECTED REGION ID(Company) START*/
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

    /*PROTECTED REGION ID(CompanyImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Company_ptr _this()
    {   return Company_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::company::Department_ptr >> m_departments;

};

}
 // company

#endif // COMPANY_COMPANY_HPP

