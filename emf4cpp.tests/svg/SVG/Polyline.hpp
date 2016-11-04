// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Polyline.hpp
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

#ifndef SVG_POLYLINE_HPP
#define SVG_POLYLINE_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <SVG/dllSVG.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

/*PROTECTED REGION ID(Polyline_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Polyline : public virtual ::SVG::Shape
{
public:
    Polyline();

    virtual ~Polyline();

    virtual void _initialize();

    // Operations

    // Attributes
    ::PrimitiveTypes::String getStrokeDashArray () const;
    void setStrokeDashArray (::PrimitiveTypes::String _strokeDashArray);

    ::PrimitiveTypes::String getMarkerEnd () const;
    void setMarkerEnd (::PrimitiveTypes::String _markerEnd);

    ::PrimitiveTypes::String getMarkerStart () const;
    void setMarkerStart (::PrimitiveTypes::String _markerStart);

    // References
    const ::ecorecpp::mapping::EList< ::SVG::Point >& getWaypoints () const;
    ::ecorecpp::mapping::EList< ::SVG::Point >& getWaypoints ();

    /*PROTECTED REGION ID(Polyline) START*/
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

    /*PROTECTED REGION ID(PolylineImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::PrimitiveTypes::String m_strokeDashArray;

    ::PrimitiveTypes::String m_markerEnd;

    ::PrimitiveTypes::String m_markerStart;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Point >> m_waypoints;

};

}
 // SVG

#endif // SVG_POLYLINE_HPP

