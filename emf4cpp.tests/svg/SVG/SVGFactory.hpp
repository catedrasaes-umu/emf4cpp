// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGFactory.hpp
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

#ifndef _SVGFACTORY_HPP
#define _SVGFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <SVG.hpp>

namespace SVG
{

    class SVGFactory: public virtual ::ecore::EFactory
    {
    public:

        static SVGFactory_ptr _instance();

        virtual Element_ptr createElement();
        virtual StructuralElement_ptr createStructuralElement();
        virtual Image_ptr createImage();
        virtual Svg_ptr createSvg();
        virtual GroupingElement_ptr createGroupingElement();
        virtual G_ptr createG();
        virtual Defs_ptr createDefs();
        virtual Symbol_ptr createSymbol();
        virtual Use_ptr createUse();
        virtual GraphicalElement_ptr createGraphicalElement();
        virtual Shape_ptr createShape();
        virtual TextElement_ptr createTextElement();
        virtual Rect_ptr createRect();
        virtual Circle_ptr createCircle();
        virtual Ellipse_ptr createEllipse();
        virtual Line_ptr createLine();
        virtual Polyline_ptr createPolyline();
        virtual Polygon_ptr createPolygon();
        virtual Path_ptr createPath();
        virtual Point_ptr createPoint();
        virtual Marker_ptr createMarker();
        virtual Text_ptr createText();
        virtual Tspan_ptr createTspan();
        virtual Tref_ptr createTref();
        virtual Attribute_ptr createAttribute();
        virtual Transform_ptr createTransform();
        virtual Scale_ptr createScale();
        virtual Translate_ptr createTranslate();
        virtual Rotate_ptr createRotate();
        virtual Visibility_ptr createVisibility();
        virtual FontWeight_ptr createFontWeight();
        virtual FontStyle_ptr createFontStyle();
        virtual Dimension_ptr createDimension();
        virtual Coordinates_ptr createCoordinates();
        virtual RelativeCoord_ptr createRelativeCoord();
        virtual AbsoluteCoord_ptr createAbsoluteCoord();
        virtual ReferencedFile_ptr createReferencedFile();
        virtual SvgFile_ptr createSvgFile();

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::auto_ptr< SVGFactory > s_instance;

        SVGFactory();

    };

} // SVG

#endif // _SVGFACTORY_HPP

