// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Marker.hpp
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

#ifndef SVG_MARKER_HPP
#define SVG_MARKER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Marker_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Marker : public virtual ::SVG::Shape
{
public:
    Marker();

    virtual ~Marker();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getMarkerUnits () const;
    virtual void setMarkerUnits (::PrimitiveTypes::String _markerUnits);

    virtual ::PrimitiveTypes::Double getRefX () const;
    virtual void setRefX (::PrimitiveTypes::Double _refX);

    virtual ::PrimitiveTypes::Double getRefY () const;
    virtual void setRefY (::PrimitiveTypes::Double _refY);

    virtual ::PrimitiveTypes::Double getMarkerWidth () const;
    virtual void setMarkerWidth (::PrimitiveTypes::Double _markerWidth);

    virtual ::PrimitiveTypes::Double getMarkerHeight () const;
    virtual void setMarkerHeight (::PrimitiveTypes::Double _markerHeight);

    virtual ::PrimitiveTypes::String getOrient () const;
    virtual void setOrient (::PrimitiveTypes::String _orient);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getDrawing () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getDrawing ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::MARKER;

    /*PROTECTED REGION ID(Marker) START*/
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

    /*PROTECTED REGION ID(MarkerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Marker_ptr _this()
    {   return Marker_ptr(this);}

    // Attributes

    ::PrimitiveTypes::String m_markerUnits;

    ::PrimitiveTypes::Double m_refX;

    ::PrimitiveTypes::Double m_refY;

    ::PrimitiveTypes::Double m_markerWidth;

    ::PrimitiveTypes::Double m_markerHeight;

    ::PrimitiveTypes::String m_orient;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Element_ptr >> m_drawing;

};

}
 // SVG

#endif // SVG_MARKER_HPP

