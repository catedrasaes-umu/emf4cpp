// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG_forward.hpp
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
    using Element_ptr = boost::intrusive_ptr<Element>;

// StructuralElement
    class StructuralElement;
    using StructuralElement_ptr = boost::intrusive_ptr<StructuralElement>;

// Image
    class Image;
    using Image_ptr = boost::intrusive_ptr<Image>;

// Svg
    class Svg;
    using Svg_ptr = boost::intrusive_ptr<Svg>;

// GroupingElement
    class GroupingElement;
    using GroupingElement_ptr = boost::intrusive_ptr<GroupingElement>;

// G
    class G;
    using G_ptr = boost::intrusive_ptr<G>;

// Defs
    class Defs;
    using Defs_ptr = boost::intrusive_ptr<Defs>;

// Symbol
    class Symbol;
    using Symbol_ptr = boost::intrusive_ptr<Symbol>;

// Use
    class Use;
    using Use_ptr = boost::intrusive_ptr<Use>;

// GraphicalElement
    class GraphicalElement;
    using GraphicalElement_ptr = boost::intrusive_ptr<GraphicalElement>;

// Shape
    class Shape;
    using Shape_ptr = boost::intrusive_ptr<Shape>;

// TextElement
    class TextElement;
    using TextElement_ptr = boost::intrusive_ptr<TextElement>;

// Rect
    class Rect;
    using Rect_ptr = boost::intrusive_ptr<Rect>;

// Circle
    class Circle;
    using Circle_ptr = boost::intrusive_ptr<Circle>;

// Ellipse
    class Ellipse;
    using Ellipse_ptr = boost::intrusive_ptr<Ellipse>;

// Line
    class Line;
    using Line_ptr = boost::intrusive_ptr<Line>;

// Polyline
    class Polyline;
    using Polyline_ptr = boost::intrusive_ptr<Polyline>;

// Polygon
    class Polygon;
    using Polygon_ptr = boost::intrusive_ptr<Polygon>;

// Path
    class Path;
    using Path_ptr = boost::intrusive_ptr<Path>;

// Point
    class Point;
    using Point_ptr = boost::intrusive_ptr<Point>;

// Marker
    class Marker;
    using Marker_ptr = boost::intrusive_ptr<Marker>;

// Text
    class Text;
    using Text_ptr = boost::intrusive_ptr<Text>;

// Tspan
    class Tspan;
    using Tspan_ptr = boost::intrusive_ptr<Tspan>;

// Tref
    class Tref;
    using Tref_ptr = boost::intrusive_ptr<Tref>;

// Attribute
    class Attribute;
    using Attribute_ptr = boost::intrusive_ptr<Attribute>;

// Transform
    class Transform;
    using Transform_ptr = boost::intrusive_ptr<Transform>;

// Scale
    class Scale;
    using Scale_ptr = boost::intrusive_ptr<Scale>;

// Translate
    class Translate;
    using Translate_ptr = boost::intrusive_ptr<Translate>;

// Rotate
    class Rotate;
    using Rotate_ptr = boost::intrusive_ptr<Rotate>;

// Visibility
    class Visibility;
    using Visibility_ptr = boost::intrusive_ptr<Visibility>;

// FontWeight
    class FontWeight;
    using FontWeight_ptr = boost::intrusive_ptr<FontWeight>;

// FontStyle
    class FontStyle;
    using FontStyle_ptr = boost::intrusive_ptr<FontStyle>;

// Dimension
    class Dimension;
    using Dimension_ptr = boost::intrusive_ptr<Dimension>;

// Coordinates
    class Coordinates;
    using Coordinates_ptr = boost::intrusive_ptr<Coordinates>;

// RelativeCoord
    class RelativeCoord;
    using RelativeCoord_ptr = boost::intrusive_ptr<RelativeCoord>;

// AbsoluteCoord
    class AbsoluteCoord;
    using AbsoluteCoord_ptr = boost::intrusive_ptr<AbsoluteCoord>;

// ReferencedFile
    class ReferencedFile;
    using ReferencedFile_ptr = boost::intrusive_ptr<ReferencedFile>;

// SvgFile
    class SvgFile;
    using SvgFile_ptr = boost::intrusive_ptr<SvgFile>;

// EEnum

// Package & Factory
    class SVGFactory;
    using SVGFactory_ptr = boost::intrusive_ptr<SVGFactory>;
    class SVGPackage;
    using SVGPackage_ptr = boost::intrusive_ptr<SVGPackage>;

    template< typename T, typename S >
    inline boost::intrusive_ptr< T > instanceOf(const S& _s)
    {
        return boost::intrusive_ptr < T > (dynamic_cast< T* >(_s.get()));
    }

} // SVG

#endif // _SVG_FORWARD_HPP

