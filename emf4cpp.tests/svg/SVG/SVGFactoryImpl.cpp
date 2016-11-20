// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGFactoryImpl.cpp
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

#include <SVG/SVGFactory.hpp>
#include <SVG/SVGPackage.hpp>
#include <SVG/Element.hpp>
#include <SVG/StructuralElement.hpp>
#include <SVG/Image.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/G.hpp>
#include <SVG/Defs.hpp>
#include <SVG/Symbol.hpp>
#include <SVG/Use.hpp>
#include <SVG/GraphicalElement.hpp>
#include <SVG/Shape.hpp>
#include <SVG/TextElement.hpp>
#include <SVG/Rect.hpp>
#include <SVG/Circle.hpp>
#include <SVG/Ellipse.hpp>
#include <SVG/Line.hpp>
#include <SVG/Polyline.hpp>
#include <SVG/Polygon.hpp>
#include <SVG/Path.hpp>
#include <SVG/Point.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Text.hpp>
#include <SVG/Tspan.hpp>
#include <SVG/Tref.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Transform.hpp>
#include <SVG/Scale.hpp>
#include <SVG/Translate.hpp>
#include <SVG/Rotate.hpp>
#include <SVG/Visibility.hpp>
#include <SVG/FontWeight.hpp>
#include <SVG/FontStyle.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/RelativeCoord.hpp>
#include <SVG/AbsoluteCoord.hpp>
#include <SVG/ReferencedFile.hpp>
#include <SVG/SvgFile.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::SVG;

SVGFactory::SVGFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr SVGFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case SVGPackage::ELEMENT:
        return createElement();
    case SVGPackage::STRUCTURALELEMENT:
        return createStructuralElement();
    case SVGPackage::IMAGE:
        return createImage();
    case SVGPackage::SVG:
        return createSvg();
    case SVGPackage::GROUPINGELEMENT:
        return createGroupingElement();
    case SVGPackage::G:
        return createG();
    case SVGPackage::DEFS:
        return createDefs();
    case SVGPackage::SYMBOL:
        return createSymbol();
    case SVGPackage::USE:
        return createUse();
    case SVGPackage::GRAPHICALELEMENT:
        return createGraphicalElement();
    case SVGPackage::SHAPE:
        return createShape();
    case SVGPackage::TEXTELEMENT:
        return createTextElement();
    case SVGPackage::RECT:
        return createRect();
    case SVGPackage::CIRCLE:
        return createCircle();
    case SVGPackage::ELLIPSE:
        return createEllipse();
    case SVGPackage::LINE:
        return createLine();
    case SVGPackage::POLYLINE:
        return createPolyline();
    case SVGPackage::POLYGON:
        return createPolygon();
    case SVGPackage::PATH:
        return createPath();
    case SVGPackage::POINT:
        return createPoint();
    case SVGPackage::MARKER:
        return createMarker();
    case SVGPackage::TEXT:
        return createText();
    case SVGPackage::TSPAN:
        return createTspan();
    case SVGPackage::TREF:
        return createTref();
    case SVGPackage::ATTRIBUTE:
        return createAttribute();
    case SVGPackage::TRANSFORM:
        return createTransform();
    case SVGPackage::SCALE:
        return createScale();
    case SVGPackage::TRANSLATE:
        return createTranslate();
    case SVGPackage::ROTATE:
        return createRotate();
    case SVGPackage::VISIBILITY:
        return createVisibility();
    case SVGPackage::FONTWEIGHT:
        return createFontWeight();
    case SVGPackage::FONTSTYLE:
        return createFontStyle();
    case SVGPackage::DIMENSION:
        return createDimension();
    case SVGPackage::COORDINATES:
        return createCoordinates();
    case SVGPackage::RELATIVECOORD:
        return createRelativeCoord();
    case SVGPackage::ABSOLUTECOORD:
        return createAbsoluteCoord();
    case SVGPackage::REFERENCEDFILE:
        return createReferencedFile();
    case SVGPackage::SVGFILE:
        return createSvgFile();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject SVGFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString SVGFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Element_ptr SVGFactory::createElement()
{
    return new Element();
}
StructuralElement_ptr SVGFactory::createStructuralElement()
{
    return new StructuralElement();
}
Image_ptr SVGFactory::createImage()
{
    return new Image();
}
Svg_ptr SVGFactory::createSvg()
{
    return new Svg();
}
GroupingElement_ptr SVGFactory::createGroupingElement()
{
    return new GroupingElement();
}
G_ptr SVGFactory::createG()
{
    return new G();
}
Defs_ptr SVGFactory::createDefs()
{
    return new Defs();
}
Symbol_ptr SVGFactory::createSymbol()
{
    return new Symbol();
}
Use_ptr SVGFactory::createUse()
{
    return new Use();
}
GraphicalElement_ptr SVGFactory::createGraphicalElement()
{
    return new GraphicalElement();
}
Shape_ptr SVGFactory::createShape()
{
    return new Shape();
}
TextElement_ptr SVGFactory::createTextElement()
{
    return new TextElement();
}
Rect_ptr SVGFactory::createRect()
{
    return new Rect();
}
Circle_ptr SVGFactory::createCircle()
{
    return new Circle();
}
Ellipse_ptr SVGFactory::createEllipse()
{
    return new Ellipse();
}
Line_ptr SVGFactory::createLine()
{
    return new Line();
}
Polyline_ptr SVGFactory::createPolyline()
{
    return new Polyline();
}
Polygon_ptr SVGFactory::createPolygon()
{
    return new Polygon();
}
Path_ptr SVGFactory::createPath()
{
    return new Path();
}
Point_ptr SVGFactory::createPoint()
{
    return new Point();
}
Marker_ptr SVGFactory::createMarker()
{
    return new Marker();
}
Text_ptr SVGFactory::createText()
{
    return new Text();
}
Tspan_ptr SVGFactory::createTspan()
{
    return new Tspan();
}
Tref_ptr SVGFactory::createTref()
{
    return new Tref();
}
Attribute_ptr SVGFactory::createAttribute()
{
    return new Attribute();
}
Transform_ptr SVGFactory::createTransform()
{
    return new Transform();
}
Scale_ptr SVGFactory::createScale()
{
    return new Scale();
}
Translate_ptr SVGFactory::createTranslate()
{
    return new Translate();
}
Rotate_ptr SVGFactory::createRotate()
{
    return new Rotate();
}
Visibility_ptr SVGFactory::createVisibility()
{
    return new Visibility();
}
FontWeight_ptr SVGFactory::createFontWeight()
{
    return new FontWeight();
}
FontStyle_ptr SVGFactory::createFontStyle()
{
    return new FontStyle();
}
Dimension_ptr SVGFactory::createDimension()
{
    return new Dimension();
}
Coordinates_ptr SVGFactory::createCoordinates()
{
    return new Coordinates();
}
RelativeCoord_ptr SVGFactory::createRelativeCoord()
{
    return new RelativeCoord();
}
AbsoluteCoord_ptr SVGFactory::createAbsoluteCoord()
{
    return new AbsoluteCoord();
}
ReferencedFile_ptr SVGFactory::createReferencedFile()
{
    return new ReferencedFile();
}
SvgFile_ptr SVGFactory::createSvgFile()
{
    return new SvgFile();
}

