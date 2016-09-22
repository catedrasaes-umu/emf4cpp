// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG_forward.hpp
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

#ifndef _SVG_FORWARD_HPP
#define _SVG_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(SVG_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace SVG
{

// EDataType

// EClass

// Element
    class Element;
    typedef Element* Element_ptr;

// StructuralElement
    class StructuralElement;
    typedef StructuralElement* StructuralElement_ptr;

// Image
    class Image;
    typedef Image* Image_ptr;

// Svg
    class Svg;
    typedef Svg* Svg_ptr;

// GroupingElement
    class GroupingElement;
    typedef GroupingElement* GroupingElement_ptr;

// G
    class G;
    typedef G* G_ptr;

// Defs
    class Defs;
    typedef Defs* Defs_ptr;

// Symbol
    class Symbol;
    typedef Symbol* Symbol_ptr;

// Use
    class Use;
    typedef Use* Use_ptr;

// GraphicalElement
    class GraphicalElement;
    typedef GraphicalElement* GraphicalElement_ptr;

// Shape
    class Shape;
    typedef Shape* Shape_ptr;

// TextElement
    class TextElement;
    typedef TextElement* TextElement_ptr;

// Rect
    class Rect;
    typedef Rect* Rect_ptr;

// Circle
    class Circle;
    typedef Circle* Circle_ptr;

// Ellipse
    class Ellipse;
    typedef Ellipse* Ellipse_ptr;

// Line
    class Line;
    typedef Line* Line_ptr;

// Polyline
    class Polyline;
    typedef Polyline* Polyline_ptr;

// Polygon
    class Polygon;
    typedef Polygon* Polygon_ptr;

// Path
    class Path;
    typedef Path* Path_ptr;

// Point
    class Point;
    typedef Point* Point_ptr;

// Marker
    class Marker;
    typedef Marker* Marker_ptr;

// Text
    class Text;
    typedef Text* Text_ptr;

// Tspan
    class Tspan;
    typedef Tspan* Tspan_ptr;

// Tref
    class Tref;
    typedef Tref* Tref_ptr;

// Attribute
    class Attribute;
    typedef Attribute* Attribute_ptr;

// Transform
    class Transform;
    typedef Transform* Transform_ptr;

// Scale
    class Scale;
    typedef Scale* Scale_ptr;

// Translate
    class Translate;
    typedef Translate* Translate_ptr;

// Rotate
    class Rotate;
    typedef Rotate* Rotate_ptr;

// Visibility
    class Visibility;
    typedef Visibility* Visibility_ptr;

// FontWeight
    class FontWeight;
    typedef FontWeight* FontWeight_ptr;

// FontStyle
    class FontStyle;
    typedef FontStyle* FontStyle_ptr;

// Dimension
    class Dimension;
    typedef Dimension* Dimension_ptr;

// Coordinates
    class Coordinates;
    typedef Coordinates* Coordinates_ptr;

// RelativeCoord
    class RelativeCoord;
    typedef RelativeCoord* RelativeCoord_ptr;

// AbsoluteCoord
    class AbsoluteCoord;
    typedef AbsoluteCoord* AbsoluteCoord_ptr;

// ReferencedFile
    class ReferencedFile;
    typedef ReferencedFile* ReferencedFile_ptr;

// SvgFile
    class SvgFile;
    typedef SvgFile* SvgFile_ptr;

// Package & Factory
    class SVGFactory;
    typedef SVGFactory * SVGFactory_ptr;
    class SVGPackage;
    typedef SVGPackage * SVGPackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // SVG

#endif // _SVG_FORWARD_HPP

