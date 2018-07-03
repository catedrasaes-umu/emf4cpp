// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGPackage.hpp
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

#ifndef _SVGPACKAGE_HPP
#define _SVGPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <SVG_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

namespace SVG
{

    class SVGPackage: public virtual ::ecore::EPackage
    {
    public:

        static SVGPackage_ptr _instance();
        static SVGPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSOLUTECOORD = 0;

        static const int ATTRIBUTE = 1;

        static const int CIRCLE = 2;

        static const int COORDINATES = 3;

        static const int DEFS = 4;

        static const int DIMENSION = 5;

        static const int ELEMENT = 6;

        static const int ELLIPSE = 7;

        static const int FONTSTYLE = 8;

        static const int FONTWEIGHT = 9;

        static const int G = 10;

        static const int GRAPHICALELEMENT = 11;

        static const int GROUPINGELEMENT = 12;

        static const int IMAGE = 13;

        static const int LINE = 14;

        static const int MARKER = 15;

        static const int PATH = 16;

        static const int POINT = 17;

        static const int POLYGON = 18;

        static const int POLYLINE = 19;

        static const int RECT = 20;

        static const int REFERENCEDFILE = 21;

        static const int RELATIVECOORD = 22;

        static const int ROTATE = 23;

        static const int SCALE = 24;

        static const int SHAPE = 25;

        static const int STRUCTURALELEMENT = 26;

        static const int SVG = 27;

        static const int SVGFILE = 28;

        static const int SYMBOL = 29;

        static const int TEXT = 30;

        static const int TEXTELEMENT = 31;

        static const int TRANSFORM = 32;

        static const int TRANSLATE = 33;

        static const int TREF = 34;

        static const int TSPAN = 35;

        static const int USE = 36;

        static const int VISIBILITY = 37;

        static const int ELEMENT__OWNER = 0;

        static const int ELEMENT__TARGET = 1;

        static const int ELEMENT__ATTRIBUTE = 2;

        static const int ELEMENT__POSITION = 3;

        static const int ELEMENT__SIZE = 4;

        static const int ELEMENT__ROOT = 5;

        static const int ELEMENT__FILL = 6;

        static const int ELEMENT__VIEWBOX = 7;

        static const int ELEMENT__GROUP = 8;

        static const int ELEMENT__IDENTIFIER = 9;

        static const int ELEMENT__DRAWSMARKER = 10;

        static const int IMAGE__REFEREE = 11;

        static const int SVG__OWNER_SVG = 12;

        static const int SVG__CHILDREN = 13;

        static const int SVG__NAMESPACE = 14;

        static const int SVG__VERSION = 15;

        static const int SVG__BASEPROFILE = 16;

        static const int GROUPINGELEMENT__GROUPCONTENT = 17;

        static const int G__NAME = 18;

        static const int USE__USE = 19;

        static const int GRAPHICALELEMENT__STROKE = 20;

        static const int TEXTELEMENT__ROTATE = 21;

        static const int TEXTELEMENT__TEXTLENGTH = 22;

        static const int TEXTELEMENT__FONTSIZE = 23;

        static const int RECT__RX = 24;

        static const int RECT__RY = 25;

        static const int LINE__BETWEEN = 26;

        static const int LINE__MARKEREND = 27;

        static const int LINE__MARKERSTART = 28;

        static const int POLYLINE__WAYPOINTS = 29;

        static const int POLYLINE__STROKEDASHARRAY = 30;

        static const int POLYLINE__MARKEREND = 31;

        static const int POLYLINE__MARKERSTART = 32;

        static const int POLYGON__WAYPOINTS = 33;

        static const int POLYGON__MARKEREND = 34;

        static const int POLYGON__MARKERSTART = 35;

        static const int PATH__PATHLENGTH = 36;

        static const int PATH__D = 37;

        static const int PATH__MARKEREND = 38;

        static const int PATH__MARKERSTART = 39;

        static const int MARKER__MARKERUNITS = 40;

        static const int MARKER__REFX = 41;

        static const int MARKER__REFY = 42;

        static const int MARKER__MARKERWIDTH = 43;

        static const int MARKER__MARKERHEIGHT = 44;

        static const int MARKER__ORIENT = 45;

        static const int MARKER__DRAWING = 46;

        static const int TEXT__LENGTHADJUST = 47;

        static const int TEXT__CONTENT = 48;

        static const int TSPAN__CONTENT = 49;

        static const int TREF__XLINKHREF = 50;

        static const int ATTRIBUTE__ATTOWNER = 51;

        static const int SCALE__SX = 52;

        static const int SCALE__SY = 53;

        static const int TRANSLATE__TX = 54;

        static const int TRANSLATE__TY = 55;

        static const int ROTATE__ANGLE = 56;

        static const int ROTATE__CX = 57;

        static const int ROTATE__CY = 58;

        static const int VISIBILITY__VISIBLE = 59;

        static const int FONTWEIGHT__BOLD = 60;

        static const int FONTSTYLE__ITALIC = 61;

        static const int DIMENSION__WIDTH = 62;

        static const int DIMENSION__HEIGHT = 63;

        static const int COORDINATES__X = 64;

        static const int COORDINATES__Y = 65;

        static const int REFERENCEDFILE__REFERER = 66;

        static const int REFERENCEDFILE__NAME = 67;

        static const int SVGFILE__TAG = 68;

        static const int SVGFILE__ELEMENTS = 69;

        // IDs for classifiers for class AbsoluteCoord 

        static const int ABSOLUTECOORD__X = COORDINATES__X;

        static const int ABSOLUTECOORD__Y = COORDINATES__Y;

        // IDs for classifiers for class Attribute 

        // IDs for classifiers for class Circle 

        static const int CIRCLE__OWNER = ELEMENT__OWNER;

        static const int CIRCLE__TARGET = ELEMENT__TARGET;

        static const int CIRCLE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int CIRCLE__POSITION = ELEMENT__POSITION;

        static const int CIRCLE__SIZE = ELEMENT__SIZE;

        static const int CIRCLE__ROOT = ELEMENT__ROOT;

        static const int CIRCLE__FILL = ELEMENT__FILL;

        static const int CIRCLE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int CIRCLE__GROUP = ELEMENT__GROUP;

        static const int CIRCLE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int CIRCLE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int CIRCLE__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Coordinates 

        // IDs for classifiers for class Defs 

        static const int DEFS__OWNER = ELEMENT__OWNER;

        static const int DEFS__TARGET = ELEMENT__TARGET;

        static const int DEFS__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int DEFS__POSITION = ELEMENT__POSITION;

        static const int DEFS__SIZE = ELEMENT__SIZE;

        static const int DEFS__ROOT = ELEMENT__ROOT;

        static const int DEFS__FILL = ELEMENT__FILL;

        static const int DEFS__VIEWBOX = ELEMENT__VIEWBOX;

        static const int DEFS__GROUP = ELEMENT__GROUP;

        static const int DEFS__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int DEFS__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int DEFS__GROUPCONTENT = GROUPINGELEMENT__GROUPCONTENT;

        // IDs for classifiers for class Dimension 

        // IDs for classifiers for class Element 

        // IDs for classifiers for class Ellipse 

        static const int ELLIPSE__OWNER = ELEMENT__OWNER;

        static const int ELLIPSE__TARGET = ELEMENT__TARGET;

        static const int ELLIPSE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int ELLIPSE__POSITION = ELEMENT__POSITION;

        static const int ELLIPSE__SIZE = ELEMENT__SIZE;

        static const int ELLIPSE__ROOT = ELEMENT__ROOT;

        static const int ELLIPSE__FILL = ELEMENT__FILL;

        static const int ELLIPSE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int ELLIPSE__GROUP = ELEMENT__GROUP;

        static const int ELLIPSE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int ELLIPSE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int ELLIPSE__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class FontStyle 

        static const int FONTSTYLE__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class FontWeight 

        static const int FONTWEIGHT__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class G 

        static const int G__OWNER = ELEMENT__OWNER;

        static const int G__TARGET = ELEMENT__TARGET;

        static const int G__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int G__POSITION = ELEMENT__POSITION;

        static const int G__SIZE = ELEMENT__SIZE;

        static const int G__ROOT = ELEMENT__ROOT;

        static const int G__FILL = ELEMENT__FILL;

        static const int G__VIEWBOX = ELEMENT__VIEWBOX;

        static const int G__GROUP = ELEMENT__GROUP;

        static const int G__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int G__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int G__GROUPCONTENT = GROUPINGELEMENT__GROUPCONTENT;

        // IDs for classifiers for class GraphicalElement 

        static const int GRAPHICALELEMENT__OWNER = ELEMENT__OWNER;

        static const int GRAPHICALELEMENT__TARGET = ELEMENT__TARGET;

        static const int GRAPHICALELEMENT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int GRAPHICALELEMENT__POSITION = ELEMENT__POSITION;

        static const int GRAPHICALELEMENT__SIZE = ELEMENT__SIZE;

        static const int GRAPHICALELEMENT__ROOT = ELEMENT__ROOT;

        static const int GRAPHICALELEMENT__FILL = ELEMENT__FILL;

        static const int GRAPHICALELEMENT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int GRAPHICALELEMENT__GROUP = ELEMENT__GROUP;

        static const int GRAPHICALELEMENT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int GRAPHICALELEMENT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class GroupingElement 

        static const int GROUPINGELEMENT__OWNER = ELEMENT__OWNER;

        static const int GROUPINGELEMENT__TARGET = ELEMENT__TARGET;

        static const int GROUPINGELEMENT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int GROUPINGELEMENT__POSITION = ELEMENT__POSITION;

        static const int GROUPINGELEMENT__SIZE = ELEMENT__SIZE;

        static const int GROUPINGELEMENT__ROOT = ELEMENT__ROOT;

        static const int GROUPINGELEMENT__FILL = ELEMENT__FILL;

        static const int GROUPINGELEMENT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int GROUPINGELEMENT__GROUP = ELEMENT__GROUP;

        static const int GROUPINGELEMENT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int GROUPINGELEMENT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class Image 

        static const int IMAGE__OWNER = ELEMENT__OWNER;

        static const int IMAGE__TARGET = ELEMENT__TARGET;

        static const int IMAGE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int IMAGE__POSITION = ELEMENT__POSITION;

        static const int IMAGE__SIZE = ELEMENT__SIZE;

        static const int IMAGE__ROOT = ELEMENT__ROOT;

        static const int IMAGE__FILL = ELEMENT__FILL;

        static const int IMAGE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int IMAGE__GROUP = ELEMENT__GROUP;

        static const int IMAGE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int IMAGE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class Line 

        static const int LINE__OWNER = ELEMENT__OWNER;

        static const int LINE__TARGET = ELEMENT__TARGET;

        static const int LINE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int LINE__POSITION = ELEMENT__POSITION;

        static const int LINE__SIZE = ELEMENT__SIZE;

        static const int LINE__ROOT = ELEMENT__ROOT;

        static const int LINE__FILL = ELEMENT__FILL;

        static const int LINE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int LINE__GROUP = ELEMENT__GROUP;

        static const int LINE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int LINE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int LINE__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Marker 

        static const int MARKER__OWNER = ELEMENT__OWNER;

        static const int MARKER__TARGET = ELEMENT__TARGET;

        static const int MARKER__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int MARKER__POSITION = ELEMENT__POSITION;

        static const int MARKER__SIZE = ELEMENT__SIZE;

        static const int MARKER__ROOT = ELEMENT__ROOT;

        static const int MARKER__FILL = ELEMENT__FILL;

        static const int MARKER__VIEWBOX = ELEMENT__VIEWBOX;

        static const int MARKER__GROUP = ELEMENT__GROUP;

        static const int MARKER__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int MARKER__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int MARKER__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Path 

        static const int PATH__OWNER = ELEMENT__OWNER;

        static const int PATH__TARGET = ELEMENT__TARGET;

        static const int PATH__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int PATH__POSITION = ELEMENT__POSITION;

        static const int PATH__SIZE = ELEMENT__SIZE;

        static const int PATH__ROOT = ELEMENT__ROOT;

        static const int PATH__FILL = ELEMENT__FILL;

        static const int PATH__VIEWBOX = ELEMENT__VIEWBOX;

        static const int PATH__GROUP = ELEMENT__GROUP;

        static const int PATH__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int PATH__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int PATH__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Point 

        static const int POINT__OWNER = ELEMENT__OWNER;

        static const int POINT__TARGET = ELEMENT__TARGET;

        static const int POINT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int POINT__POSITION = ELEMENT__POSITION;

        static const int POINT__SIZE = ELEMENT__SIZE;

        static const int POINT__ROOT = ELEMENT__ROOT;

        static const int POINT__FILL = ELEMENT__FILL;

        static const int POINT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int POINT__GROUP = ELEMENT__GROUP;

        static const int POINT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int POINT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int POINT__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Polygon 

        static const int POLYGON__OWNER = ELEMENT__OWNER;

        static const int POLYGON__TARGET = ELEMENT__TARGET;

        static const int POLYGON__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int POLYGON__POSITION = ELEMENT__POSITION;

        static const int POLYGON__SIZE = ELEMENT__SIZE;

        static const int POLYGON__ROOT = ELEMENT__ROOT;

        static const int POLYGON__FILL = ELEMENT__FILL;

        static const int POLYGON__VIEWBOX = ELEMENT__VIEWBOX;

        static const int POLYGON__GROUP = ELEMENT__GROUP;

        static const int POLYGON__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int POLYGON__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int POLYGON__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Polyline 

        static const int POLYLINE__OWNER = ELEMENT__OWNER;

        static const int POLYLINE__TARGET = ELEMENT__TARGET;

        static const int POLYLINE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int POLYLINE__POSITION = ELEMENT__POSITION;

        static const int POLYLINE__SIZE = ELEMENT__SIZE;

        static const int POLYLINE__ROOT = ELEMENT__ROOT;

        static const int POLYLINE__FILL = ELEMENT__FILL;

        static const int POLYLINE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int POLYLINE__GROUP = ELEMENT__GROUP;

        static const int POLYLINE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int POLYLINE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int POLYLINE__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Rect 

        static const int RECT__OWNER = ELEMENT__OWNER;

        static const int RECT__TARGET = ELEMENT__TARGET;

        static const int RECT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int RECT__POSITION = ELEMENT__POSITION;

        static const int RECT__SIZE = ELEMENT__SIZE;

        static const int RECT__ROOT = ELEMENT__ROOT;

        static const int RECT__FILL = ELEMENT__FILL;

        static const int RECT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int RECT__GROUP = ELEMENT__GROUP;

        static const int RECT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int RECT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int RECT__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class ReferencedFile 

        // IDs for classifiers for class RelativeCoord 

        static const int RELATIVECOORD__X = COORDINATES__X;

        static const int RELATIVECOORD__Y = COORDINATES__Y;

        // IDs for classifiers for class Rotate 

        static const int ROTATE__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class Scale 

        static const int SCALE__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class Shape 

        static const int SHAPE__OWNER = ELEMENT__OWNER;

        static const int SHAPE__TARGET = ELEMENT__TARGET;

        static const int SHAPE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int SHAPE__POSITION = ELEMENT__POSITION;

        static const int SHAPE__SIZE = ELEMENT__SIZE;

        static const int SHAPE__ROOT = ELEMENT__ROOT;

        static const int SHAPE__FILL = ELEMENT__FILL;

        static const int SHAPE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int SHAPE__GROUP = ELEMENT__GROUP;

        static const int SHAPE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int SHAPE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int SHAPE__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class StructuralElement 

        static const int STRUCTURALELEMENT__OWNER = ELEMENT__OWNER;

        static const int STRUCTURALELEMENT__TARGET = ELEMENT__TARGET;

        static const int STRUCTURALELEMENT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int STRUCTURALELEMENT__POSITION = ELEMENT__POSITION;

        static const int STRUCTURALELEMENT__SIZE = ELEMENT__SIZE;

        static const int STRUCTURALELEMENT__ROOT = ELEMENT__ROOT;

        static const int STRUCTURALELEMENT__FILL = ELEMENT__FILL;

        static const int STRUCTURALELEMENT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int STRUCTURALELEMENT__GROUP = ELEMENT__GROUP;

        static const int STRUCTURALELEMENT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int STRUCTURALELEMENT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class Svg 

        static const int SVG__OWNER = ELEMENT__OWNER;

        static const int SVG__TARGET = ELEMENT__TARGET;

        static const int SVG__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int SVG__POSITION = ELEMENT__POSITION;

        static const int SVG__SIZE = ELEMENT__SIZE;

        static const int SVG__ROOT = ELEMENT__ROOT;

        static const int SVG__FILL = ELEMENT__FILL;

        static const int SVG__VIEWBOX = ELEMENT__VIEWBOX;

        static const int SVG__GROUP = ELEMENT__GROUP;

        static const int SVG__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int SVG__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class SvgFile 

        static const int SVGFILE__REFERER = REFERENCEDFILE__REFERER;

        static const int SVGFILE__NAME = REFERENCEDFILE__NAME;

        // IDs for classifiers for class Symbol 

        static const int SYMBOL__OWNER = ELEMENT__OWNER;

        static const int SYMBOL__TARGET = ELEMENT__TARGET;

        static const int SYMBOL__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int SYMBOL__POSITION = ELEMENT__POSITION;

        static const int SYMBOL__SIZE = ELEMENT__SIZE;

        static const int SYMBOL__ROOT = ELEMENT__ROOT;

        static const int SYMBOL__FILL = ELEMENT__FILL;

        static const int SYMBOL__VIEWBOX = ELEMENT__VIEWBOX;

        static const int SYMBOL__GROUP = ELEMENT__GROUP;

        static const int SYMBOL__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int SYMBOL__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int SYMBOL__GROUPCONTENT = GROUPINGELEMENT__GROUPCONTENT;

        // IDs for classifiers for class Text 

        static const int TEXT__OWNER = ELEMENT__OWNER;

        static const int TEXT__TARGET = ELEMENT__TARGET;

        static const int TEXT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int TEXT__POSITION = ELEMENT__POSITION;

        static const int TEXT__SIZE = ELEMENT__SIZE;

        static const int TEXT__ROOT = ELEMENT__ROOT;

        static const int TEXT__FILL = ELEMENT__FILL;

        static const int TEXT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int TEXT__GROUP = ELEMENT__GROUP;

        static const int TEXT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int TEXT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int TEXT__STROKE = GRAPHICALELEMENT__STROKE;

        static const int TEXT__ROTATE = TEXTELEMENT__ROTATE;

        static const int TEXT__TEXTLENGTH = TEXTELEMENT__TEXTLENGTH;

        static const int TEXT__FONTSIZE = TEXTELEMENT__FONTSIZE;

        // IDs for classifiers for class TextElement 

        static const int TEXTELEMENT__OWNER = ELEMENT__OWNER;

        static const int TEXTELEMENT__TARGET = ELEMENT__TARGET;

        static const int TEXTELEMENT__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int TEXTELEMENT__POSITION = ELEMENT__POSITION;

        static const int TEXTELEMENT__SIZE = ELEMENT__SIZE;

        static const int TEXTELEMENT__ROOT = ELEMENT__ROOT;

        static const int TEXTELEMENT__FILL = ELEMENT__FILL;

        static const int TEXTELEMENT__VIEWBOX = ELEMENT__VIEWBOX;

        static const int TEXTELEMENT__GROUP = ELEMENT__GROUP;

        static const int TEXTELEMENT__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int TEXTELEMENT__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int TEXTELEMENT__STROKE = GRAPHICALELEMENT__STROKE;

        // IDs for classifiers for class Transform 

        static const int TRANSFORM__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class Translate 

        static const int TRANSLATE__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // IDs for classifiers for class Tref 

        static const int TREF__OWNER = ELEMENT__OWNER;

        static const int TREF__TARGET = ELEMENT__TARGET;

        static const int TREF__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int TREF__POSITION = ELEMENT__POSITION;

        static const int TREF__SIZE = ELEMENT__SIZE;

        static const int TREF__ROOT = ELEMENT__ROOT;

        static const int TREF__FILL = ELEMENT__FILL;

        static const int TREF__VIEWBOX = ELEMENT__VIEWBOX;

        static const int TREF__GROUP = ELEMENT__GROUP;

        static const int TREF__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int TREF__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int TREF__STROKE = GRAPHICALELEMENT__STROKE;

        static const int TREF__ROTATE = TEXTELEMENT__ROTATE;

        static const int TREF__TEXTLENGTH = TEXTELEMENT__TEXTLENGTH;

        static const int TREF__FONTSIZE = TEXTELEMENT__FONTSIZE;

        // IDs for classifiers for class Tspan 

        static const int TSPAN__OWNER = ELEMENT__OWNER;

        static const int TSPAN__TARGET = ELEMENT__TARGET;

        static const int TSPAN__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int TSPAN__POSITION = ELEMENT__POSITION;

        static const int TSPAN__SIZE = ELEMENT__SIZE;

        static const int TSPAN__ROOT = ELEMENT__ROOT;

        static const int TSPAN__FILL = ELEMENT__FILL;

        static const int TSPAN__VIEWBOX = ELEMENT__VIEWBOX;

        static const int TSPAN__GROUP = ELEMENT__GROUP;

        static const int TSPAN__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int TSPAN__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        static const int TSPAN__STROKE = GRAPHICALELEMENT__STROKE;

        static const int TSPAN__ROTATE = TEXTELEMENT__ROTATE;

        static const int TSPAN__TEXTLENGTH = TEXTELEMENT__TEXTLENGTH;

        static const int TSPAN__FONTSIZE = TEXTELEMENT__FONTSIZE;

        // IDs for classifiers for class Use 

        static const int USE__OWNER = ELEMENT__OWNER;

        static const int USE__TARGET = ELEMENT__TARGET;

        static const int USE__ATTRIBUTE = ELEMENT__ATTRIBUTE;

        static const int USE__POSITION = ELEMENT__POSITION;

        static const int USE__SIZE = ELEMENT__SIZE;

        static const int USE__ROOT = ELEMENT__ROOT;

        static const int USE__FILL = ELEMENT__FILL;

        static const int USE__VIEWBOX = ELEMENT__VIEWBOX;

        static const int USE__GROUP = ELEMENT__GROUP;

        static const int USE__IDENTIFIER = ELEMENT__IDENTIFIER;

        static const int USE__DRAWSMARKER = ELEMENT__DRAWSMARKER;

        // IDs for classifiers for class Visibility 

        static const int VISIBILITY__ATTOWNER = ATTRIBUTE__ATTOWNER;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getElement();

        virtual ::ecore::EClass_ptr getStructuralElement();

        virtual ::ecore::EClass_ptr getImage();

        virtual ::ecore::EClass_ptr getSvg();

        virtual ::ecore::EClass_ptr getGroupingElement();

        virtual ::ecore::EClass_ptr getG();

        virtual ::ecore::EClass_ptr getDefs();

        virtual ::ecore::EClass_ptr getSymbol();

        virtual ::ecore::EClass_ptr getUse();

        virtual ::ecore::EClass_ptr getGraphicalElement();

        virtual ::ecore::EClass_ptr getShape();

        virtual ::ecore::EClass_ptr getTextElement();

        virtual ::ecore::EClass_ptr getRect();

        virtual ::ecore::EClass_ptr getCircle();

        virtual ::ecore::EClass_ptr getEllipse();

        virtual ::ecore::EClass_ptr getLine();

        virtual ::ecore::EClass_ptr getPolyline();

        virtual ::ecore::EClass_ptr getPolygon();

        virtual ::ecore::EClass_ptr getPath();

        virtual ::ecore::EClass_ptr getPoint();

        virtual ::ecore::EClass_ptr getMarker();

        virtual ::ecore::EClass_ptr getText();

        virtual ::ecore::EClass_ptr getTspan();

        virtual ::ecore::EClass_ptr getTref();

        virtual ::ecore::EClass_ptr getAttribute();

        virtual ::ecore::EClass_ptr getTransform();

        virtual ::ecore::EClass_ptr getScale();

        virtual ::ecore::EClass_ptr getTranslate();

        virtual ::ecore::EClass_ptr getRotate();

        virtual ::ecore::EClass_ptr getVisibility();

        virtual ::ecore::EClass_ptr getFontWeight();

        virtual ::ecore::EClass_ptr getFontStyle();

        virtual ::ecore::EClass_ptr getDimension();

        virtual ::ecore::EClass_ptr getCoordinates();

        virtual ::ecore::EClass_ptr getRelativeCoord();

        virtual ::ecore::EClass_ptr getAbsoluteCoord();

        virtual ::ecore::EClass_ptr getReferencedFile();

        virtual ::ecore::EClass_ptr getSvgFile();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__owner();

        virtual ::ecore::EReference_ptr getElement__target();

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__position();

        virtual ::ecore::EReference_ptr getElement__size();

        virtual ::ecore::EReference_ptr getElement__root();

        virtual ::ecore::EAttribute_ptr getElement__fill();

        virtual ::ecore::EAttribute_ptr getElement__viewBox();

        virtual ::ecore::EReference_ptr getElement__group();

        virtual ::ecore::EAttribute_ptr getElement__identifier();

        virtual ::ecore::EReference_ptr getElement__drawsMarker();

        virtual ::ecore::EReference_ptr getImage__referee();

        virtual ::ecore::EReference_ptr getSvg__owner_SVG();

        virtual ::ecore::EReference_ptr getSvg__children();

        virtual ::ecore::EAttribute_ptr getSvg__namespace();

        virtual ::ecore::EAttribute_ptr getSvg__version();

        virtual ::ecore::EAttribute_ptr getSvg__baseProfile();

        virtual ::ecore::EReference_ptr getGroupingElement__groupContent();

        virtual ::ecore::EAttribute_ptr getG__name();

        virtual ::ecore::EReference_ptr getUse__use();

        virtual ::ecore::EAttribute_ptr getGraphicalElement__stroke();

        virtual ::ecore::EAttribute_ptr getTextElement__rotate();

        virtual ::ecore::EAttribute_ptr getTextElement__textLength();

        virtual ::ecore::EAttribute_ptr getTextElement__fontSize();

        virtual ::ecore::EAttribute_ptr getRect__rx();

        virtual ::ecore::EAttribute_ptr getRect__ry();

        virtual ::ecore::EReference_ptr getLine__between();

        virtual ::ecore::EAttribute_ptr getLine__markerEnd();

        virtual ::ecore::EAttribute_ptr getLine__markerStart();

        virtual ::ecore::EReference_ptr getPolyline__waypoints();

        virtual ::ecore::EAttribute_ptr getPolyline__strokeDashArray();

        virtual ::ecore::EAttribute_ptr getPolyline__markerEnd();

        virtual ::ecore::EAttribute_ptr getPolyline__markerStart();

        virtual ::ecore::EReference_ptr getPolygon__waypoints();

        virtual ::ecore::EAttribute_ptr getPolygon__markerEnd();

        virtual ::ecore::EAttribute_ptr getPolygon__markerStart();

        virtual ::ecore::EAttribute_ptr getPath__pathLength();

        virtual ::ecore::EAttribute_ptr getPath__d();

        virtual ::ecore::EAttribute_ptr getPath__markerEnd();

        virtual ::ecore::EAttribute_ptr getPath__markerStart();

        virtual ::ecore::EAttribute_ptr getMarker__markerUnits();

        virtual ::ecore::EAttribute_ptr getMarker__refX();

        virtual ::ecore::EAttribute_ptr getMarker__refY();

        virtual ::ecore::EAttribute_ptr getMarker__markerWidth();

        virtual ::ecore::EAttribute_ptr getMarker__markerHeight();

        virtual ::ecore::EAttribute_ptr getMarker__orient();

        virtual ::ecore::EReference_ptr getMarker__drawing();

        virtual ::ecore::EAttribute_ptr getText__lengthAdjust();

        virtual ::ecore::EAttribute_ptr getText__content();

        virtual ::ecore::EAttribute_ptr getTspan__content();

        virtual ::ecore::EReference_ptr getTref__xlinkHref();

        virtual ::ecore::EReference_ptr getAttribute__attOwner();

        virtual ::ecore::EAttribute_ptr getScale__sx();

        virtual ::ecore::EAttribute_ptr getScale__sy();

        virtual ::ecore::EAttribute_ptr getTranslate__tx();

        virtual ::ecore::EAttribute_ptr getTranslate__ty();

        virtual ::ecore::EAttribute_ptr getRotate__angle();

        virtual ::ecore::EAttribute_ptr getRotate__cx();

        virtual ::ecore::EAttribute_ptr getRotate__cy();

        virtual ::ecore::EAttribute_ptr getVisibility__visible();

        virtual ::ecore::EAttribute_ptr getFontWeight__bold();

        virtual ::ecore::EAttribute_ptr getFontStyle__italic();

        virtual ::ecore::EAttribute_ptr getDimension__width();

        virtual ::ecore::EAttribute_ptr getDimension__height();

        virtual ::ecore::EAttribute_ptr getCoordinates__x();

        virtual ::ecore::EAttribute_ptr getCoordinates__y();

        virtual ::ecore::EReference_ptr getReferencedFile__referer();

        virtual ::ecore::EAttribute_ptr getReferencedFile__name();

        virtual ::ecore::EReference_ptr getSvgFile__tag();

        virtual ::ecore::EReference_ptr getSvgFile__elements();

    protected:

        static std::unique_ptr< SVGPackage,
                ::ecorecpp::PackageDeleter< SVGPackage > > s_instance;

        SVGPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ElementEClass;

        ::ecore::EClass_ptr m_StructuralElementEClass;

        ::ecore::EClass_ptr m_ImageEClass;

        ::ecore::EClass_ptr m_SvgEClass;

        ::ecore::EClass_ptr m_GroupingElementEClass;

        ::ecore::EClass_ptr m_GEClass;

        ::ecore::EClass_ptr m_DefsEClass;

        ::ecore::EClass_ptr m_SymbolEClass;

        ::ecore::EClass_ptr m_UseEClass;

        ::ecore::EClass_ptr m_GraphicalElementEClass;

        ::ecore::EClass_ptr m_ShapeEClass;

        ::ecore::EClass_ptr m_TextElementEClass;

        ::ecore::EClass_ptr m_RectEClass;

        ::ecore::EClass_ptr m_CircleEClass;

        ::ecore::EClass_ptr m_EllipseEClass;

        ::ecore::EClass_ptr m_LineEClass;

        ::ecore::EClass_ptr m_PolylineEClass;

        ::ecore::EClass_ptr m_PolygonEClass;

        ::ecore::EClass_ptr m_PathEClass;

        ::ecore::EClass_ptr m_PointEClass;

        ::ecore::EClass_ptr m_MarkerEClass;

        ::ecore::EClass_ptr m_TextEClass;

        ::ecore::EClass_ptr m_TspanEClass;

        ::ecore::EClass_ptr m_TrefEClass;

        ::ecore::EClass_ptr m_AttributeEClass;

        ::ecore::EClass_ptr m_TransformEClass;

        ::ecore::EClass_ptr m_ScaleEClass;

        ::ecore::EClass_ptr m_TranslateEClass;

        ::ecore::EClass_ptr m_RotateEClass;

        ::ecore::EClass_ptr m_VisibilityEClass;

        ::ecore::EClass_ptr m_FontWeightEClass;

        ::ecore::EClass_ptr m_FontStyleEClass;

        ::ecore::EClass_ptr m_DimensionEClass;

        ::ecore::EClass_ptr m_CoordinatesEClass;

        ::ecore::EClass_ptr m_RelativeCoordEClass;

        ::ecore::EClass_ptr m_AbsoluteCoordEClass;

        ::ecore::EClass_ptr m_ReferencedFileEClass;

        ::ecore::EClass_ptr m_SvgFileEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__owner;

        ::ecore::EReference_ptr m_Element__target;

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__position;

        ::ecore::EReference_ptr m_Element__size;

        ::ecore::EReference_ptr m_Element__root;

        ::ecore::EAttribute_ptr m_Element__fill;

        ::ecore::EAttribute_ptr m_Element__viewBox;

        ::ecore::EReference_ptr m_Element__group;

        ::ecore::EAttribute_ptr m_Element__identifier;

        ::ecore::EReference_ptr m_Element__drawsMarker;

        ::ecore::EReference_ptr m_Image__referee;

        ::ecore::EReference_ptr m_Svg__owner_SVG;

        ::ecore::EReference_ptr m_Svg__children;

        ::ecore::EAttribute_ptr m_Svg__namespace;

        ::ecore::EAttribute_ptr m_Svg__version;

        ::ecore::EAttribute_ptr m_Svg__baseProfile;

        ::ecore::EReference_ptr m_GroupingElement__groupContent;

        ::ecore::EAttribute_ptr m_G__name;

        ::ecore::EReference_ptr m_Use__use;

        ::ecore::EAttribute_ptr m_GraphicalElement__stroke;

        ::ecore::EAttribute_ptr m_TextElement__rotate;

        ::ecore::EAttribute_ptr m_TextElement__textLength;

        ::ecore::EAttribute_ptr m_TextElement__fontSize;

        ::ecore::EAttribute_ptr m_Rect__rx;

        ::ecore::EAttribute_ptr m_Rect__ry;

        ::ecore::EReference_ptr m_Line__between;

        ::ecore::EAttribute_ptr m_Line__markerEnd;

        ::ecore::EAttribute_ptr m_Line__markerStart;

        ::ecore::EReference_ptr m_Polyline__waypoints;

        ::ecore::EAttribute_ptr m_Polyline__strokeDashArray;

        ::ecore::EAttribute_ptr m_Polyline__markerEnd;

        ::ecore::EAttribute_ptr m_Polyline__markerStart;

        ::ecore::EReference_ptr m_Polygon__waypoints;

        ::ecore::EAttribute_ptr m_Polygon__markerEnd;

        ::ecore::EAttribute_ptr m_Polygon__markerStart;

        ::ecore::EAttribute_ptr m_Path__pathLength;

        ::ecore::EAttribute_ptr m_Path__d;

        ::ecore::EAttribute_ptr m_Path__markerEnd;

        ::ecore::EAttribute_ptr m_Path__markerStart;

        ::ecore::EAttribute_ptr m_Marker__markerUnits;

        ::ecore::EAttribute_ptr m_Marker__refX;

        ::ecore::EAttribute_ptr m_Marker__refY;

        ::ecore::EAttribute_ptr m_Marker__markerWidth;

        ::ecore::EAttribute_ptr m_Marker__markerHeight;

        ::ecore::EAttribute_ptr m_Marker__orient;

        ::ecore::EReference_ptr m_Marker__drawing;

        ::ecore::EAttribute_ptr m_Text__lengthAdjust;

        ::ecore::EAttribute_ptr m_Text__content;

        ::ecore::EAttribute_ptr m_Tspan__content;

        ::ecore::EReference_ptr m_Tref__xlinkHref;

        ::ecore::EReference_ptr m_Attribute__attOwner;

        ::ecore::EAttribute_ptr m_Scale__sx;

        ::ecore::EAttribute_ptr m_Scale__sy;

        ::ecore::EAttribute_ptr m_Translate__tx;

        ::ecore::EAttribute_ptr m_Translate__ty;

        ::ecore::EAttribute_ptr m_Rotate__angle;

        ::ecore::EAttribute_ptr m_Rotate__cx;

        ::ecore::EAttribute_ptr m_Rotate__cy;

        ::ecore::EAttribute_ptr m_Visibility__visible;

        ::ecore::EAttribute_ptr m_FontWeight__bold;

        ::ecore::EAttribute_ptr m_FontStyle__italic;

        ::ecore::EAttribute_ptr m_Dimension__width;

        ::ecore::EAttribute_ptr m_Dimension__height;

        ::ecore::EAttribute_ptr m_Coordinates__x;

        ::ecore::EAttribute_ptr m_Coordinates__y;

        ::ecore::EReference_ptr m_ReferencedFile__referer;

        ::ecore::EAttribute_ptr m_ReferencedFile__name;

        ::ecore::EReference_ptr m_SvgFile__tag;

        ::ecore::EReference_ptr m_SvgFile__elements;

    };

} // SVG

#endif // _SVGPACKAGE_HPP

