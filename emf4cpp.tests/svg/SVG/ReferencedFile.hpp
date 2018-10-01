// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/ReferencedFile.hpp
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

#ifndef SVG_REFERENCEDFILE_HPP
#define SVG_REFERENCEDFILE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(ReferencedFile_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL ReferencedFile : public virtual ::ecore::EObject
{
public:
    ReferencedFile();

    virtual ~ReferencedFile();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getName () const;
    virtual void setName (::PrimitiveTypes::String _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::Image_ptr >& getReferer () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Image_ptr >& getReferer ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::REFERENCEDFILE;

    /*PROTECTED REGION ID(ReferencedFile) START*/
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

    /*PROTECTED REGION ID(ReferencedFileImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ReferencedFile_ptr _this()
    {   return ReferencedFile_ptr(this);}

    // Attributes

    ::PrimitiveTypes::String m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Image_ptr >> m_referer;

};

}
 // SVG

#endif // SVG_REFERENCEDFILE_HPP

