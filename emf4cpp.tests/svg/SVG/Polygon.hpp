// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Polygon.hpp
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

#ifndef SVG_POLYGON_HPP
#define SVG_POLYGON_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Polygon_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Polygon : public virtual ::SVG::Shape
{
public:
    Polygon();

    virtual ~Polygon();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getMarkerEnd () const;
    virtual void setMarkerEnd (::PrimitiveTypes::String _markerEnd);

    virtual ::PrimitiveTypes::String getMarkerStart () const;
    virtual void setMarkerStart (::PrimitiveTypes::String _markerStart);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::Point >& getWaypoints () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Point >& getWaypoints ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::POLYGON;

    /*PROTECTED REGION ID(Polygon) START*/
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

    /*PROTECTED REGION ID(PolygonImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::PrimitiveTypes::String m_markerEnd;

    ::PrimitiveTypes::String m_markerStart;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Point >> m_waypoints;

};

}
 // SVG

#endif // SVG_POLYGON_HPP

