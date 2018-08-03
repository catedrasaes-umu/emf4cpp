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
    using Element_ptr = ::ecore::Ptr<Element>;

// StructuralElement
    class StructuralElement;
    using StructuralElement_ptr = ::ecore::Ptr<StructuralElement>;

// Image
    class Image;
    using Image_ptr = ::ecore::Ptr<Image>;

// Svg
    class Svg;
    using Svg_ptr = ::ecore::Ptr<Svg>;

// GroupingElement
    class GroupingElement;
    using GroupingElement_ptr = ::ecore::Ptr<GroupingElement>;

// G
    class G;
    using G_ptr = ::ecore::Ptr<G>;

// Defs
    class Defs;
    using Defs_ptr = ::ecore::Ptr<Defs>;

// Symbol
    class Symbol;
    using Symbol_ptr = ::ecore::Ptr<Symbol>;

// Use
    class Use;
    using Use_ptr = ::ecore::Ptr<Use>;

// GraphicalElement
    class GraphicalElement;
    using GraphicalElement_ptr = ::ecore::Ptr<GraphicalElement>;

// Shape
    class Shape;
    using Shape_ptr = ::ecore::Ptr<Shape>;

// TextElement
    class TextElement;
    using TextElement_ptr = ::ecore::Ptr<TextElement>;

// Rect
    class Rect;
    using Rect_ptr = ::ecore::Ptr<Rect>;

// Circle
    class Circle;
    using Circle_ptr = ::ecore::Ptr<Circle>;

// Ellipse
    class Ellipse;
    using Ellipse_ptr = ::ecore::Ptr<Ellipse>;

// Line
    class Line;
    using Line_ptr = ::ecore::Ptr<Line>;

// Polyline
    class Polyline;
    using Polyline_ptr = ::ecore::Ptr<Polyline>;

// Polygon
    class Polygon;
    using Polygon_ptr = ::ecore::Ptr<Polygon>;

// Path
    class Path;
    using Path_ptr = ::ecore::Ptr<Path>;

// Point
    class Point;
    using Point_ptr = ::ecore::Ptr<Point>;

// Marker
    class Marker;
    using Marker_ptr = ::ecore::Ptr<Marker>;

// Text
    class Text;
    using Text_ptr = ::ecore::Ptr<Text>;

// Tspan
    class Tspan;
    using Tspan_ptr = ::ecore::Ptr<Tspan>;

// Tref
    class Tref;
    using Tref_ptr = ::ecore::Ptr<Tref>;

// Attribute
    class Attribute;
    using Attribute_ptr = ::ecore::Ptr<Attribute>;

// Transform
    class Transform;
    using Transform_ptr = ::ecore::Ptr<Transform>;

// Scale
    class Scale;
    using Scale_ptr = ::ecore::Ptr<Scale>;

// Translate
    class Translate;
    using Translate_ptr = ::ecore::Ptr<Translate>;

// Rotate
    class Rotate;
    using Rotate_ptr = ::ecore::Ptr<Rotate>;

// Visibility
    class Visibility;
    using Visibility_ptr = ::ecore::Ptr<Visibility>;

// FontWeight
    class FontWeight;
    using FontWeight_ptr = ::ecore::Ptr<FontWeight>;

// FontStyle
    class FontStyle;
    using FontStyle_ptr = ::ecore::Ptr<FontStyle>;

// Dimension
    class Dimension;
    using Dimension_ptr = ::ecore::Ptr<Dimension>;

// Coordinates
    class Coordinates;
    using Coordinates_ptr = ::ecore::Ptr<Coordinates>;

// RelativeCoord
    class RelativeCoord;
    using RelativeCoord_ptr = ::ecore::Ptr<RelativeCoord>;

// AbsoluteCoord
    class AbsoluteCoord;
    using AbsoluteCoord_ptr = ::ecore::Ptr<AbsoluteCoord>;

// ReferencedFile
    class ReferencedFile;
    using ReferencedFile_ptr = ::ecore::Ptr<ReferencedFile>;

// SvgFile
    class SvgFile;
    using SvgFile_ptr = ::ecore::Ptr<SvgFile>;

// EEnum

// Package & Factory
    class SVGFactory;
    using SVGFactory_ptr = ::ecore::Ptr<SVGFactory>;
    class SVGPackage;
    using SVGPackage_ptr = ::ecore::Ptr<SVGPackage>;

} // SVG

#endif // _SVG_FORWARD_HPP

