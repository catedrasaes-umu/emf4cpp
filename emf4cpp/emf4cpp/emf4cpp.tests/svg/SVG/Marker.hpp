// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Marker.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

/*PROTECTED REGION ID(Marker_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class Marker: public virtual ::SVG::Shape
    {
    public:
        Marker();

        virtual ~Marker();

        virtual void _initialize();

        // Operations


        // Attributes
        ::PrimitiveTypes::String getMarkerUnits() const;
        void setMarkerUnits(::PrimitiveTypes::String _markerUnits);

        ::PrimitiveTypes::Double getRefX() const;
        void setRefX(::PrimitiveTypes::Double _refX);

        ::PrimitiveTypes::Double getRefY() const;
        void setRefY(::PrimitiveTypes::Double _refY);

        ::PrimitiveTypes::Double getMarkerWidth() const;
        void setMarkerWidth(::PrimitiveTypes::Double _markerWidth);

        ::PrimitiveTypes::Double getMarkerHeight() const;
        void setMarkerHeight(::PrimitiveTypes::Double _markerHeight);

        ::PrimitiveTypes::String getOrient() const;
        void setOrient(::PrimitiveTypes::String _orient);

        // References
        ::ecorecpp::mapping::EList< ::SVG::Element >& getDrawing();

        /*PROTECTED REGION ID(Marker) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(MarkerImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::String m_markerUnits;

        ::PrimitiveTypes::Double m_refX;

        ::PrimitiveTypes::Double m_refY;

        ::PrimitiveTypes::Double m_markerWidth;

        ::PrimitiveTypes::Double m_markerHeight;

        ::PrimitiveTypes::String m_orient;

        // References

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList<
                ::SVG::Element > > m_drawing;

    };

} // SVG

#endif // SVG_MARKER_HPP
