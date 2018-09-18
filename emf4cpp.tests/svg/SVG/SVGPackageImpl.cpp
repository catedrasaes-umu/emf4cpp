// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGPackageImpl.cpp
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

#include <SVG/SVGPackage.hpp>
#include <SVG/SVGFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <PrimitiveTypes/PrimitiveTypesPackage.hpp>

using namespace ::SVG;

SVGPackage::SVGPackage()
{

    // Feature definitions of Element
    m_Element__fill = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Element__viewBox = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Element__identifier = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Element__owner = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__target = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__attribute = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__position = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__size = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__root = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__group = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Element__drawsMarker = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of StructuralElement

    // Feature definitions of Image
    m_Image__referee = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Svg
    m_Svg__namespace = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Svg__version = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Svg__baseProfile = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Svg__owner_SVG = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Svg__children = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of GroupingElement
    m_GroupingElement__groupContent = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of G
    m_G__name = ::ecore::Ptr < ::ecore::EAttribute > (new ::ecore::EAttribute);

    // Feature definitions of Defs

    // Feature definitions of Symbol

    // Feature definitions of Use
    m_Use__use = ::ecore::Ptr < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of GraphicalElement
    m_GraphicalElement__stroke = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Shape

    // Feature definitions of TextElement
    m_TextElement__rotate = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_TextElement__textLength = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_TextElement__fontSize = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Rect
    m_Rect__rx = ::ecore::Ptr < ::ecore::EAttribute > (new ::ecore::EAttribute);
    m_Rect__ry = ::ecore::Ptr < ::ecore::EAttribute > (new ::ecore::EAttribute);

    // Feature definitions of Circle

    // Feature definitions of Ellipse

    // Feature definitions of Line
    m_Line__markerEnd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Line__markerStart = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Line__between = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Polyline
    m_Polyline__strokeDashArray = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Polyline__markerEnd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Polyline__markerStart = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Polyline__waypoints = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Polygon
    m_Polygon__markerEnd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Polygon__markerStart = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Polygon__waypoints = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Path
    m_Path__pathLength = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Path__d = ::ecore::Ptr < ::ecore::EAttribute > (new ::ecore::EAttribute);
    m_Path__markerEnd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Path__markerStart = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Point

    // Feature definitions of Marker
    m_Marker__markerUnits = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__refX = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__refY = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__markerWidth = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__markerHeight = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__orient = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Marker__drawing = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Text
    m_Text__lengthAdjust = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Text__content = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Tspan
    m_Tspan__content = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Tref
    m_Tref__xlinkHref = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Attribute
    m_Attribute__attOwner = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Transform

    // Feature definitions of Scale
    m_Scale__sx = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Scale__sy = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Translate
    m_Translate__tx = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Translate__ty = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Rotate
    m_Rotate__angle = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Rotate__cx = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Rotate__cy = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Visibility
    m_Visibility__visible = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of FontWeight
    m_FontWeight__bold = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of FontStyle
    m_FontStyle__italic = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Dimension
    m_Dimension__width = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Dimension__height = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Coordinates
    m_Coordinates__x = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Coordinates__y = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of RelativeCoord

    // Feature definitions of AbsoluteCoord

    // Feature definitions of ReferencedFile
    m_ReferencedFile__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ReferencedFile__referer = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of SvgFile
    m_SvgFile__tag = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_SvgFile__elements = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void SVGPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = SVGFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // Element
    m_ElementEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ElementEClass->setClassifierID(ELEMENT);
    m_ElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ElementEClass);
    // m_Element__fill has already been allocated above
    m_Element__fill->setFeatureID(::SVG::SVGPackage::ELEMENT__FILL);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__fill);
    // m_Element__viewBox has already been allocated above
    m_Element__viewBox->setFeatureID(::SVG::SVGPackage::ELEMENT__VIEWBOX);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__viewBox);
    // m_Element__identifier has already been allocated above
    m_Element__identifier->setFeatureID(::SVG::SVGPackage::ELEMENT__IDENTIFIER);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__identifier);
    // m_Element__owner has already been allocated above
    m_Element__owner->setFeatureID(::SVG::SVGPackage::ELEMENT__OWNER);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__owner);
    // m_Element__target has already been allocated above
    m_Element__target->setFeatureID(::SVG::SVGPackage::ELEMENT__TARGET);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__target);
    // m_Element__attribute has already been allocated above
    m_Element__attribute->setFeatureID(::SVG::SVGPackage::ELEMENT__ATTRIBUTE);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__attribute);
    // m_Element__position has already been allocated above
    m_Element__position->setFeatureID(::SVG::SVGPackage::ELEMENT__POSITION);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__position);
    // m_Element__size has already been allocated above
    m_Element__size->setFeatureID(::SVG::SVGPackage::ELEMENT__SIZE);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__size);
    // m_Element__root has already been allocated above
    m_Element__root->setFeatureID(::SVG::SVGPackage::ELEMENT__ROOT);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__root);
    // m_Element__group has already been allocated above
    m_Element__group->setFeatureID(::SVG::SVGPackage::ELEMENT__GROUP);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__group);
    // m_Element__drawsMarker has already been allocated above
    m_Element__drawsMarker->setFeatureID(
            ::SVG::SVGPackage::ELEMENT__DRAWSMARKER);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__drawsMarker);

    // StructuralElement
    m_StructuralElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StructuralElementEClass->setClassifierID(STRUCTURALELEMENT);
    m_StructuralElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StructuralElementEClass);

    // Image
    m_ImageEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ImageEClass->setClassifierID(IMAGE);
    m_ImageEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ImageEClass);
    // m_Image__referee has already been allocated above
    m_Image__referee->setFeatureID(::SVG::SVGPackage::IMAGE__REFEREE);
    m_ImageEClass->getEStructuralFeatures().push_back(m_Image__referee);

    // Svg
    m_SvgEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_SvgEClass->setClassifierID(SVG);
    m_SvgEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SvgEClass);
    // m_Svg__namespace has already been allocated above
    m_Svg__namespace->setFeatureID(::SVG::SVGPackage::SVG__NAMESPACE);
    m_SvgEClass->getEStructuralFeatures().push_back(m_Svg__namespace);
    // m_Svg__version has already been allocated above
    m_Svg__version->setFeatureID(::SVG::SVGPackage::SVG__VERSION);
    m_SvgEClass->getEStructuralFeatures().push_back(m_Svg__version);
    // m_Svg__baseProfile has already been allocated above
    m_Svg__baseProfile->setFeatureID(::SVG::SVGPackage::SVG__BASEPROFILE);
    m_SvgEClass->getEStructuralFeatures().push_back(m_Svg__baseProfile);
    // m_Svg__owner_SVG has already been allocated above
    m_Svg__owner_SVG->setFeatureID(::SVG::SVGPackage::SVG__OWNER_SVG);
    m_SvgEClass->getEStructuralFeatures().push_back(m_Svg__owner_SVG);
    // m_Svg__children has already been allocated above
    m_Svg__children->setFeatureID(::SVG::SVGPackage::SVG__CHILDREN);
    m_SvgEClass->getEStructuralFeatures().push_back(m_Svg__children);

    // GroupingElement
    m_GroupingElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_GroupingElementEClass->setClassifierID(GROUPINGELEMENT);
    m_GroupingElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_GroupingElementEClass);
    // m_GroupingElement__groupContent has already been allocated above
    m_GroupingElement__groupContent->setFeatureID(
            ::SVG::SVGPackage::GROUPINGELEMENT__GROUPCONTENT);
    m_GroupingElementEClass->getEStructuralFeatures().push_back(
            m_GroupingElement__groupContent);

    // G
    m_GEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_GEClass->setClassifierID(G);
    m_GEClass->setEPackage(_this());
    getEClassifiers().push_back(m_GEClass);
    // m_G__name has already been allocated above
    m_G__name->setFeatureID(::SVG::SVGPackage::G__NAME);
    m_GEClass->getEStructuralFeatures().push_back(m_G__name);

    // Defs
    m_DefsEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_DefsEClass->setClassifierID(DEFS);
    m_DefsEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DefsEClass);

    // Symbol
    m_SymbolEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_SymbolEClass->setClassifierID(SYMBOL);
    m_SymbolEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SymbolEClass);

    // Use
    m_UseEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_UseEClass->setClassifierID(USE);
    m_UseEClass->setEPackage(_this());
    getEClassifiers().push_back(m_UseEClass);
    // m_Use__use has already been allocated above
    m_Use__use->setFeatureID(::SVG::SVGPackage::USE__USE);
    m_UseEClass->getEStructuralFeatures().push_back(m_Use__use);

    // GraphicalElement
    m_GraphicalElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_GraphicalElementEClass->setClassifierID(GRAPHICALELEMENT);
    m_GraphicalElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_GraphicalElementEClass);
    // m_GraphicalElement__stroke has already been allocated above
    m_GraphicalElement__stroke->setFeatureID(
            ::SVG::SVGPackage::GRAPHICALELEMENT__STROKE);
    m_GraphicalElementEClass->getEStructuralFeatures().push_back(
            m_GraphicalElement__stroke);

    // Shape
    m_ShapeEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ShapeEClass->setClassifierID(SHAPE);
    m_ShapeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ShapeEClass);

    // TextElement
    m_TextElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TextElementEClass->setClassifierID(TEXTELEMENT);
    m_TextElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TextElementEClass);
    // m_TextElement__rotate has already been allocated above
    m_TextElement__rotate->setFeatureID(::SVG::SVGPackage::TEXTELEMENT__ROTATE);
    m_TextElementEClass->getEStructuralFeatures().push_back(
            m_TextElement__rotate);
    // m_TextElement__textLength has already been allocated above
    m_TextElement__textLength->setFeatureID(
            ::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH);
    m_TextElementEClass->getEStructuralFeatures().push_back(
            m_TextElement__textLength);
    // m_TextElement__fontSize has already been allocated above
    m_TextElement__fontSize->setFeatureID(
            ::SVG::SVGPackage::TEXTELEMENT__FONTSIZE);
    m_TextElementEClass->getEStructuralFeatures().push_back(
            m_TextElement__fontSize);

    // Rect
    m_RectEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_RectEClass->setClassifierID(RECT);
    m_RectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RectEClass);
    // m_Rect__rx has already been allocated above
    m_Rect__rx->setFeatureID(::SVG::SVGPackage::RECT__RX);
    m_RectEClass->getEStructuralFeatures().push_back(m_Rect__rx);
    // m_Rect__ry has already been allocated above
    m_Rect__ry->setFeatureID(::SVG::SVGPackage::RECT__RY);
    m_RectEClass->getEStructuralFeatures().push_back(m_Rect__ry);

    // Circle
    m_CircleEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_CircleEClass->setClassifierID(CIRCLE);
    m_CircleEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CircleEClass);

    // Ellipse
    m_EllipseEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_EllipseEClass->setClassifierID(ELLIPSE);
    m_EllipseEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EllipseEClass);

    // Line
    m_LineEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_LineEClass->setClassifierID(LINE);
    m_LineEClass->setEPackage(_this());
    getEClassifiers().push_back(m_LineEClass);
    // m_Line__markerEnd has already been allocated above
    m_Line__markerEnd->setFeatureID(::SVG::SVGPackage::LINE__MARKEREND);
    m_LineEClass->getEStructuralFeatures().push_back(m_Line__markerEnd);
    // m_Line__markerStart has already been allocated above
    m_Line__markerStart->setFeatureID(::SVG::SVGPackage::LINE__MARKERSTART);
    m_LineEClass->getEStructuralFeatures().push_back(m_Line__markerStart);
    // m_Line__between has already been allocated above
    m_Line__between->setFeatureID(::SVG::SVGPackage::LINE__BETWEEN);
    m_LineEClass->getEStructuralFeatures().push_back(m_Line__between);

    // Polyline
    m_PolylineEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_PolylineEClass->setClassifierID(POLYLINE);
    m_PolylineEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PolylineEClass);
    // m_Polyline__strokeDashArray has already been allocated above
    m_Polyline__strokeDashArray->setFeatureID(
            ::SVG::SVGPackage::POLYLINE__STROKEDASHARRAY);
    m_PolylineEClass->getEStructuralFeatures().push_back(
            m_Polyline__strokeDashArray);
    // m_Polyline__markerEnd has already been allocated above
    m_Polyline__markerEnd->setFeatureID(::SVG::SVGPackage::POLYLINE__MARKEREND);
    m_PolylineEClass->getEStructuralFeatures().push_back(m_Polyline__markerEnd);
    // m_Polyline__markerStart has already been allocated above
    m_Polyline__markerStart->setFeatureID(
            ::SVG::SVGPackage::POLYLINE__MARKERSTART);
    m_PolylineEClass->getEStructuralFeatures().push_back(
            m_Polyline__markerStart);
    // m_Polyline__waypoints has already been allocated above
    m_Polyline__waypoints->setFeatureID(::SVG::SVGPackage::POLYLINE__WAYPOINTS);
    m_PolylineEClass->getEStructuralFeatures().push_back(m_Polyline__waypoints);

    // Polygon
    m_PolygonEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_PolygonEClass->setClassifierID(POLYGON);
    m_PolygonEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PolygonEClass);
    // m_Polygon__markerEnd has already been allocated above
    m_Polygon__markerEnd->setFeatureID(::SVG::SVGPackage::POLYGON__MARKEREND);
    m_PolygonEClass->getEStructuralFeatures().push_back(m_Polygon__markerEnd);
    // m_Polygon__markerStart has already been allocated above
    m_Polygon__markerStart->setFeatureID(
            ::SVG::SVGPackage::POLYGON__MARKERSTART);
    m_PolygonEClass->getEStructuralFeatures().push_back(m_Polygon__markerStart);
    // m_Polygon__waypoints has already been allocated above
    m_Polygon__waypoints->setFeatureID(::SVG::SVGPackage::POLYGON__WAYPOINTS);
    m_PolygonEClass->getEStructuralFeatures().push_back(m_Polygon__waypoints);

    // Path
    m_PathEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_PathEClass->setClassifierID(PATH);
    m_PathEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PathEClass);
    // m_Path__pathLength has already been allocated above
    m_Path__pathLength->setFeatureID(::SVG::SVGPackage::PATH__PATHLENGTH);
    m_PathEClass->getEStructuralFeatures().push_back(m_Path__pathLength);
    // m_Path__d has already been allocated above
    m_Path__d->setFeatureID(::SVG::SVGPackage::PATH__D);
    m_PathEClass->getEStructuralFeatures().push_back(m_Path__d);
    // m_Path__markerEnd has already been allocated above
    m_Path__markerEnd->setFeatureID(::SVG::SVGPackage::PATH__MARKEREND);
    m_PathEClass->getEStructuralFeatures().push_back(m_Path__markerEnd);
    // m_Path__markerStart has already been allocated above
    m_Path__markerStart->setFeatureID(::SVG::SVGPackage::PATH__MARKERSTART);
    m_PathEClass->getEStructuralFeatures().push_back(m_Path__markerStart);

    // Point
    m_PointEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_PointEClass->setClassifierID(POINT);
    m_PointEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PointEClass);

    // Marker
    m_MarkerEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_MarkerEClass->setClassifierID(MARKER);
    m_MarkerEClass->setEPackage(_this());
    getEClassifiers().push_back(m_MarkerEClass);
    // m_Marker__markerUnits has already been allocated above
    m_Marker__markerUnits->setFeatureID(::SVG::SVGPackage::MARKER__MARKERUNITS);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__markerUnits);
    // m_Marker__refX has already been allocated above
    m_Marker__refX->setFeatureID(::SVG::SVGPackage::MARKER__REFX);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__refX);
    // m_Marker__refY has already been allocated above
    m_Marker__refY->setFeatureID(::SVG::SVGPackage::MARKER__REFY);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__refY);
    // m_Marker__markerWidth has already been allocated above
    m_Marker__markerWidth->setFeatureID(::SVG::SVGPackage::MARKER__MARKERWIDTH);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__markerWidth);
    // m_Marker__markerHeight has already been allocated above
    m_Marker__markerHeight->setFeatureID(
            ::SVG::SVGPackage::MARKER__MARKERHEIGHT);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__markerHeight);
    // m_Marker__orient has already been allocated above
    m_Marker__orient->setFeatureID(::SVG::SVGPackage::MARKER__ORIENT);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__orient);
    // m_Marker__drawing has already been allocated above
    m_Marker__drawing->setFeatureID(::SVG::SVGPackage::MARKER__DRAWING);
    m_MarkerEClass->getEStructuralFeatures().push_back(m_Marker__drawing);

    // Text
    m_TextEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TextEClass->setClassifierID(TEXT);
    m_TextEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TextEClass);
    // m_Text__lengthAdjust has already been allocated above
    m_Text__lengthAdjust->setFeatureID(::SVG::SVGPackage::TEXT__LENGTHADJUST);
    m_TextEClass->getEStructuralFeatures().push_back(m_Text__lengthAdjust);
    // m_Text__content has already been allocated above
    m_Text__content->setFeatureID(::SVG::SVGPackage::TEXT__CONTENT);
    m_TextEClass->getEStructuralFeatures().push_back(m_Text__content);

    // Tspan
    m_TspanEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TspanEClass->setClassifierID(TSPAN);
    m_TspanEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TspanEClass);
    // m_Tspan__content has already been allocated above
    m_Tspan__content->setFeatureID(::SVG::SVGPackage::TSPAN__CONTENT);
    m_TspanEClass->getEStructuralFeatures().push_back(m_Tspan__content);

    // Tref
    m_TrefEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TrefEClass->setClassifierID(TREF);
    m_TrefEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TrefEClass);
    // m_Tref__xlinkHref has already been allocated above
    m_Tref__xlinkHref->setFeatureID(::SVG::SVGPackage::TREF__XLINKHREF);
    m_TrefEClass->getEStructuralFeatures().push_back(m_Tref__xlinkHref);

    // Attribute
    m_AttributeEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_AttributeEClass->setClassifierID(ATTRIBUTE);
    m_AttributeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AttributeEClass);
    // m_Attribute__attOwner has already been allocated above
    m_Attribute__attOwner->setFeatureID(::SVG::SVGPackage::ATTRIBUTE__ATTOWNER);
    m_AttributeEClass->getEStructuralFeatures().push_back(
            m_Attribute__attOwner);

    // Transform
    m_TransformEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TransformEClass->setClassifierID(TRANSFORM);
    m_TransformEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TransformEClass);

    // Scale
    m_ScaleEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ScaleEClass->setClassifierID(SCALE);
    m_ScaleEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ScaleEClass);
    // m_Scale__sx has already been allocated above
    m_Scale__sx->setFeatureID(::SVG::SVGPackage::SCALE__SX);
    m_ScaleEClass->getEStructuralFeatures().push_back(m_Scale__sx);
    // m_Scale__sy has already been allocated above
    m_Scale__sy->setFeatureID(::SVG::SVGPackage::SCALE__SY);
    m_ScaleEClass->getEStructuralFeatures().push_back(m_Scale__sy);

    // Translate
    m_TranslateEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TranslateEClass->setClassifierID(TRANSLATE);
    m_TranslateEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TranslateEClass);
    // m_Translate__tx has already been allocated above
    m_Translate__tx->setFeatureID(::SVG::SVGPackage::TRANSLATE__TX);
    m_TranslateEClass->getEStructuralFeatures().push_back(m_Translate__tx);
    // m_Translate__ty has already been allocated above
    m_Translate__ty->setFeatureID(::SVG::SVGPackage::TRANSLATE__TY);
    m_TranslateEClass->getEStructuralFeatures().push_back(m_Translate__ty);

    // Rotate
    m_RotateEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_RotateEClass->setClassifierID(ROTATE);
    m_RotateEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RotateEClass);
    // m_Rotate__angle has already been allocated above
    m_Rotate__angle->setFeatureID(::SVG::SVGPackage::ROTATE__ANGLE);
    m_RotateEClass->getEStructuralFeatures().push_back(m_Rotate__angle);
    // m_Rotate__cx has already been allocated above
    m_Rotate__cx->setFeatureID(::SVG::SVGPackage::ROTATE__CX);
    m_RotateEClass->getEStructuralFeatures().push_back(m_Rotate__cx);
    // m_Rotate__cy has already been allocated above
    m_Rotate__cy->setFeatureID(::SVG::SVGPackage::ROTATE__CY);
    m_RotateEClass->getEStructuralFeatures().push_back(m_Rotate__cy);

    // Visibility
    m_VisibilityEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_VisibilityEClass->setClassifierID(VISIBILITY);
    m_VisibilityEClass->setEPackage(_this());
    getEClassifiers().push_back(m_VisibilityEClass);
    // m_Visibility__visible has already been allocated above
    m_Visibility__visible->setFeatureID(::SVG::SVGPackage::VISIBILITY__VISIBLE);
    m_VisibilityEClass->getEStructuralFeatures().push_back(
            m_Visibility__visible);

    // FontWeight
    m_FontWeightEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_FontWeightEClass->setClassifierID(FONTWEIGHT);
    m_FontWeightEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FontWeightEClass);
    // m_FontWeight__bold has already been allocated above
    m_FontWeight__bold->setFeatureID(::SVG::SVGPackage::FONTWEIGHT__BOLD);
    m_FontWeightEClass->getEStructuralFeatures().push_back(m_FontWeight__bold);

    // FontStyle
    m_FontStyleEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_FontStyleEClass->setClassifierID(FONTSTYLE);
    m_FontStyleEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FontStyleEClass);
    // m_FontStyle__italic has already been allocated above
    m_FontStyle__italic->setFeatureID(::SVG::SVGPackage::FONTSTYLE__ITALIC);
    m_FontStyleEClass->getEStructuralFeatures().push_back(m_FontStyle__italic);

    // Dimension
    m_DimensionEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_DimensionEClass->setClassifierID(DIMENSION);
    m_DimensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DimensionEClass);
    // m_Dimension__width has already been allocated above
    m_Dimension__width->setFeatureID(::SVG::SVGPackage::DIMENSION__WIDTH);
    m_DimensionEClass->getEStructuralFeatures().push_back(m_Dimension__width);
    // m_Dimension__height has already been allocated above
    m_Dimension__height->setFeatureID(::SVG::SVGPackage::DIMENSION__HEIGHT);
    m_DimensionEClass->getEStructuralFeatures().push_back(m_Dimension__height);

    // Coordinates
    m_CoordinatesEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CoordinatesEClass->setClassifierID(COORDINATES);
    m_CoordinatesEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CoordinatesEClass);
    // m_Coordinates__x has already been allocated above
    m_Coordinates__x->setFeatureID(::SVG::SVGPackage::COORDINATES__X);
    m_CoordinatesEClass->getEStructuralFeatures().push_back(m_Coordinates__x);
    // m_Coordinates__y has already been allocated above
    m_Coordinates__y->setFeatureID(::SVG::SVGPackage::COORDINATES__Y);
    m_CoordinatesEClass->getEStructuralFeatures().push_back(m_Coordinates__y);

    // RelativeCoord
    m_RelativeCoordEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RelativeCoordEClass->setClassifierID(RELATIVECOORD);
    m_RelativeCoordEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RelativeCoordEClass);

    // AbsoluteCoord
    m_AbsoluteCoordEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbsoluteCoordEClass->setClassifierID(ABSOLUTECOORD);
    m_AbsoluteCoordEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbsoluteCoordEClass);

    // ReferencedFile
    m_ReferencedFileEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ReferencedFileEClass->setClassifierID(REFERENCEDFILE);
    m_ReferencedFileEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ReferencedFileEClass);
    // m_ReferencedFile__name has already been allocated above
    m_ReferencedFile__name->setFeatureID(
            ::SVG::SVGPackage::REFERENCEDFILE__NAME);
    m_ReferencedFileEClass->getEStructuralFeatures().push_back(
            m_ReferencedFile__name);
    // m_ReferencedFile__referer has already been allocated above
    m_ReferencedFile__referer->setFeatureID(
            ::SVG::SVGPackage::REFERENCEDFILE__REFERER);
    m_ReferencedFileEClass->getEStructuralFeatures().push_back(
            m_ReferencedFile__referer);

    // SvgFile
    m_SvgFileEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_SvgFileEClass->setClassifierID(SVGFILE);
    m_SvgFileEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SvgFileEClass);
    // m_SvgFile__tag has already been allocated above
    m_SvgFile__tag->setFeatureID(::SVG::SVGPackage::SVGFILE__TAG);
    m_SvgFileEClass->getEStructuralFeatures().push_back(m_SvgFile__tag);
    // m_SvgFile__elements has already been allocated above
    m_SvgFile__elements->setFeatureID(::SVG::SVGPackage::SVGFILE__ELEMENTS);
    m_SvgFileEClass->getEStructuralFeatures().push_back(m_SvgFile__elements);

    // Create enums

    // Create data types

    // Initialize package
    setName("SVG");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_StructuralElementEClass->getESuperTypes().push_back(m_ElementEClass);
    m_ImageEClass->getESuperTypes().push_back(m_StructuralElementEClass);
    m_SvgEClass->getESuperTypes().push_back(m_StructuralElementEClass);
    m_GroupingElementEClass->getESuperTypes().push_back(
            m_StructuralElementEClass);
    m_GEClass->getESuperTypes().push_back(m_GroupingElementEClass);
    m_DefsEClass->getESuperTypes().push_back(m_GroupingElementEClass);
    m_SymbolEClass->getESuperTypes().push_back(m_GroupingElementEClass);
    m_UseEClass->getESuperTypes().push_back(m_StructuralElementEClass);
    m_GraphicalElementEClass->getESuperTypes().push_back(m_ElementEClass);
    m_ShapeEClass->getESuperTypes().push_back(m_GraphicalElementEClass);
    m_TextElementEClass->getESuperTypes().push_back(m_GraphicalElementEClass);
    m_RectEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_CircleEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_EllipseEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_LineEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_PolylineEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_PolygonEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_PathEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_PointEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_MarkerEClass->getESuperTypes().push_back(m_ShapeEClass);
    m_TextEClass->getESuperTypes().push_back(m_TextElementEClass);
    m_TspanEClass->getESuperTypes().push_back(m_TextElementEClass);
    m_TrefEClass->getESuperTypes().push_back(m_TextElementEClass);
    m_TransformEClass->getESuperTypes().push_back(m_AttributeEClass);
    m_ScaleEClass->getESuperTypes().push_back(m_TransformEClass);
    m_TranslateEClass->getESuperTypes().push_back(m_TransformEClass);
    m_RotateEClass->getESuperTypes().push_back(m_TransformEClass);
    m_VisibilityEClass->getESuperTypes().push_back(m_AttributeEClass);
    m_FontWeightEClass->getESuperTypes().push_back(m_AttributeEClass);
    m_FontStyleEClass->getESuperTypes().push_back(m_AttributeEClass);
    m_RelativeCoordEClass->getESuperTypes().push_back(m_CoordinatesEClass);
    m_AbsoluteCoordEClass->getESuperTypes().push_back(m_CoordinatesEClass);
    m_SvgFileEClass->getESuperTypes().push_back(m_ReferencedFileEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Element
    m_ElementEClass->setName("Element");
    m_ElementEClass->setAbstract(true);
    m_ElementEClass->setInterface(false);
    m_Element__fill->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Element__fill->setName("fill");
    m_Element__fill->setDefaultValueLiteral("");
    m_Element__fill->setLowerBound(0);
    m_Element__fill->setUpperBound(1);
    m_Element__fill->setTransient(false);
    m_Element__fill->setVolatile(false);
    m_Element__fill->setChangeable(true);
    m_Element__fill->setUnsettable(false);
    m_Element__fill->setID(false);
    m_Element__fill->setUnique(false);
    m_Element__fill->setDerived(false);
    m_Element__fill->setOrdered(false);
    m_Element__viewBox->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Element__viewBox->setName("viewBox");
    m_Element__viewBox->setDefaultValueLiteral("");
    m_Element__viewBox->setLowerBound(0);
    m_Element__viewBox->setUpperBound(1);
    m_Element__viewBox->setTransient(false);
    m_Element__viewBox->setVolatile(false);
    m_Element__viewBox->setChangeable(true);
    m_Element__viewBox->setUnsettable(false);
    m_Element__viewBox->setID(false);
    m_Element__viewBox->setUnique(false);
    m_Element__viewBox->setDerived(false);
    m_Element__viewBox->setOrdered(false);
    m_Element__identifier->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Element__identifier->setName("identifier");
    m_Element__identifier->setDefaultValueLiteral("");
    m_Element__identifier->setLowerBound(0);
    m_Element__identifier->setUpperBound(1);
    m_Element__identifier->setTransient(false);
    m_Element__identifier->setVolatile(false);
    m_Element__identifier->setChangeable(true);
    m_Element__identifier->setUnsettable(false);
    m_Element__identifier->setID(false);
    m_Element__identifier->setUnique(false);
    m_Element__identifier->setDerived(false);
    m_Element__identifier->setOrdered(false);
    m_Element__owner->setEType(m_SvgFileEClass);
    m_Element__owner->setName("owner");
    m_Element__owner->setDefaultValueLiteral("");
    m_Element__owner->setLowerBound(0);
    m_Element__owner->setUpperBound(-1);
    m_Element__owner->setTransient(false);
    m_Element__owner->setVolatile(false);
    m_Element__owner->setChangeable(true);
    m_Element__owner->setContainment(false);
    m_Element__owner->setResolveProxies(true);
    m_Element__owner->setUnique(true);
    m_Element__owner->setDerived(false);
    m_Element__owner->setOrdered(false);
    m_Element__owner->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_SvgFileEClass->getEStructuralFeatures()[1]));
    m_Element__target->setEType(m_UseEClass);
    m_Element__target->setName("target");
    m_Element__target->setDefaultValueLiteral("");
    m_Element__target->setLowerBound(0);
    m_Element__target->setUpperBound(-1);
    m_Element__target->setTransient(false);
    m_Element__target->setVolatile(false);
    m_Element__target->setChangeable(true);
    m_Element__target->setContainment(false);
    m_Element__target->setResolveProxies(true);
    m_Element__target->setUnique(true);
    m_Element__target->setDerived(false);
    m_Element__target->setOrdered(false);
    m_Element__target->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_UseEClass->getEStructuralFeatures()[0]));
    m_Element__attribute->setEType(m_AttributeEClass);
    m_Element__attribute->setName("attribute");
    m_Element__attribute->setDefaultValueLiteral("");
    m_Element__attribute->setLowerBound(0);
    m_Element__attribute->setUpperBound(-1);
    m_Element__attribute->setTransient(false);
    m_Element__attribute->setVolatile(false);
    m_Element__attribute->setChangeable(true);
    m_Element__attribute->setContainment(false);
    m_Element__attribute->setResolveProxies(true);
    m_Element__attribute->setUnique(true);
    m_Element__attribute->setDerived(false);
    m_Element__attribute->setOrdered(false);
    m_Element__attribute->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_AttributeEClass->getEStructuralFeatures()[0]));
    m_Element__position->setEType(m_CoordinatesEClass);
    m_Element__position->setName("position");
    m_Element__position->setDefaultValueLiteral("");
    m_Element__position->setLowerBound(0);
    m_Element__position->setUpperBound(1);
    m_Element__position->setTransient(false);
    m_Element__position->setVolatile(false);
    m_Element__position->setChangeable(true);
    m_Element__position->setContainment(true);
    m_Element__position->setResolveProxies(true);
    m_Element__position->setUnique(true);
    m_Element__position->setDerived(false);
    m_Element__position->setOrdered(false);
    m_Element__size->setEType(m_DimensionEClass);
    m_Element__size->setName("size");
    m_Element__size->setDefaultValueLiteral("");
    m_Element__size->setLowerBound(0);
    m_Element__size->setUpperBound(1);
    m_Element__size->setTransient(false);
    m_Element__size->setVolatile(false);
    m_Element__size->setChangeable(true);
    m_Element__size->setContainment(true);
    m_Element__size->setResolveProxies(true);
    m_Element__size->setUnique(true);
    m_Element__size->setDerived(false);
    m_Element__size->setOrdered(false);
    m_Element__root->setEType(m_SvgEClass);
    m_Element__root->setName("root");
    m_Element__root->setDefaultValueLiteral("");
    m_Element__root->setLowerBound(0);
    m_Element__root->setUpperBound(1);
    m_Element__root->setTransient(false);
    m_Element__root->setVolatile(false);
    m_Element__root->setChangeable(true);
    m_Element__root->setContainment(false);
    m_Element__root->setResolveProxies(true);
    m_Element__root->setUnique(true);
    m_Element__root->setDerived(false);
    m_Element__root->setOrdered(false);
    m_Element__root->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_SvgEClass->getEStructuralFeatures()[4]));
    m_Element__group->setEType(m_GroupingElementEClass);
    m_Element__group->setName("group");
    m_Element__group->setDefaultValueLiteral("");
    m_Element__group->setLowerBound(0);
    m_Element__group->setUpperBound(1);
    m_Element__group->setTransient(false);
    m_Element__group->setVolatile(false);
    m_Element__group->setChangeable(true);
    m_Element__group->setContainment(false);
    m_Element__group->setResolveProxies(true);
    m_Element__group->setUnique(true);
    m_Element__group->setDerived(false);
    m_Element__group->setOrdered(false);
    m_Element__group->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_GroupingElementEClass->getEStructuralFeatures()[0]));
    m_Element__drawsMarker->setEType(m_MarkerEClass);
    m_Element__drawsMarker->setName("drawsMarker");
    m_Element__drawsMarker->setDefaultValueLiteral("");
    m_Element__drawsMarker->setLowerBound(0);
    m_Element__drawsMarker->setUpperBound(1);
    m_Element__drawsMarker->setTransient(false);
    m_Element__drawsMarker->setVolatile(false);
    m_Element__drawsMarker->setChangeable(true);
    m_Element__drawsMarker->setContainment(false);
    m_Element__drawsMarker->setResolveProxies(true);
    m_Element__drawsMarker->setUnique(true);
    m_Element__drawsMarker->setDerived(false);
    m_Element__drawsMarker->setOrdered(false);
    m_Element__drawsMarker->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_MarkerEClass->getEStructuralFeatures()[6]));
    // StructuralElement
    m_StructuralElementEClass->setName("StructuralElement");
    m_StructuralElementEClass->setAbstract(true);
    m_StructuralElementEClass->setInterface(false);
    // Image
    m_ImageEClass->setName("Image");
    m_ImageEClass->setAbstract(false);
    m_ImageEClass->setInterface(false);
    m_Image__referee->setEType(m_ReferencedFileEClass);
    m_Image__referee->setName("referee");
    m_Image__referee->setDefaultValueLiteral("");
    m_Image__referee->setLowerBound(0);
    m_Image__referee->setUpperBound(-1);
    m_Image__referee->setTransient(false);
    m_Image__referee->setVolatile(false);
    m_Image__referee->setChangeable(true);
    m_Image__referee->setContainment(false);
    m_Image__referee->setResolveProxies(true);
    m_Image__referee->setUnique(true);
    m_Image__referee->setDerived(false);
    m_Image__referee->setOrdered(false);
    m_Image__referee->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ReferencedFileEClass->getEStructuralFeatures()[1]));
    // Svg
    m_SvgEClass->setName("Svg");
    m_SvgEClass->setAbstract(false);
    m_SvgEClass->setInterface(false);
    m_Svg__namespace->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Svg__namespace->setName("namespace");
    m_Svg__namespace->setDefaultValueLiteral("");
    m_Svg__namespace->setLowerBound(0);
    m_Svg__namespace->setUpperBound(1);
    m_Svg__namespace->setTransient(false);
    m_Svg__namespace->setVolatile(false);
    m_Svg__namespace->setChangeable(true);
    m_Svg__namespace->setUnsettable(false);
    m_Svg__namespace->setID(false);
    m_Svg__namespace->setUnique(false);
    m_Svg__namespace->setDerived(false);
    m_Svg__namespace->setOrdered(false);
    m_Svg__version->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Svg__version->setName("version");
    m_Svg__version->setDefaultValueLiteral("");
    m_Svg__version->setLowerBound(0);
    m_Svg__version->setUpperBound(1);
    m_Svg__version->setTransient(false);
    m_Svg__version->setVolatile(false);
    m_Svg__version->setChangeable(true);
    m_Svg__version->setUnsettable(false);
    m_Svg__version->setID(false);
    m_Svg__version->setUnique(false);
    m_Svg__version->setDerived(false);
    m_Svg__version->setOrdered(false);
    m_Svg__baseProfile->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Svg__baseProfile->setName("baseProfile");
    m_Svg__baseProfile->setDefaultValueLiteral("");
    m_Svg__baseProfile->setLowerBound(0);
    m_Svg__baseProfile->setUpperBound(1);
    m_Svg__baseProfile->setTransient(false);
    m_Svg__baseProfile->setVolatile(false);
    m_Svg__baseProfile->setChangeable(true);
    m_Svg__baseProfile->setUnsettable(false);
    m_Svg__baseProfile->setID(false);
    m_Svg__baseProfile->setUnique(false);
    m_Svg__baseProfile->setDerived(false);
    m_Svg__baseProfile->setOrdered(false);
    m_Svg__owner_SVG->setEType(m_SvgFileEClass);
    m_Svg__owner_SVG->setName("owner_SVG");
    m_Svg__owner_SVG->setDefaultValueLiteral("");
    m_Svg__owner_SVG->setLowerBound(0);
    m_Svg__owner_SVG->setUpperBound(-1);
    m_Svg__owner_SVG->setTransient(false);
    m_Svg__owner_SVG->setVolatile(false);
    m_Svg__owner_SVG->setChangeable(true);
    m_Svg__owner_SVG->setContainment(false);
    m_Svg__owner_SVG->setResolveProxies(true);
    m_Svg__owner_SVG->setUnique(true);
    m_Svg__owner_SVG->setDerived(false);
    m_Svg__owner_SVG->setOrdered(false);
    m_Svg__owner_SVG->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_SvgFileEClass->getEStructuralFeatures()[0]));
    m_Svg__children->setEType(m_ElementEClass);
    m_Svg__children->setName("children");
    m_Svg__children->setDefaultValueLiteral("");
    m_Svg__children->setLowerBound(0);
    m_Svg__children->setUpperBound(-1);
    m_Svg__children->setTransient(false);
    m_Svg__children->setVolatile(false);
    m_Svg__children->setChangeable(true);
    m_Svg__children->setContainment(true);
    m_Svg__children->setResolveProxies(true);
    m_Svg__children->setUnique(true);
    m_Svg__children->setDerived(false);
    m_Svg__children->setOrdered(true);
    m_Svg__children->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[8]));
    // GroupingElement
    m_GroupingElementEClass->setName("GroupingElement");
    m_GroupingElementEClass->setAbstract(true);
    m_GroupingElementEClass->setInterface(false);
    m_GroupingElement__groupContent->setEType(m_ElementEClass);
    m_GroupingElement__groupContent->setName("groupContent");
    m_GroupingElement__groupContent->setDefaultValueLiteral("");
    m_GroupingElement__groupContent->setLowerBound(0);
    m_GroupingElement__groupContent->setUpperBound(-1);
    m_GroupingElement__groupContent->setTransient(false);
    m_GroupingElement__groupContent->setVolatile(false);
    m_GroupingElement__groupContent->setChangeable(true);
    m_GroupingElement__groupContent->setContainment(true);
    m_GroupingElement__groupContent->setResolveProxies(true);
    m_GroupingElement__groupContent->setUnique(true);
    m_GroupingElement__groupContent->setDerived(false);
    m_GroupingElement__groupContent->setOrdered(true);
    m_GroupingElement__groupContent->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[9]));
    // G
    m_GEClass->setName("G");
    m_GEClass->setAbstract(false);
    m_GEClass->setInterface(false);
    m_G__name->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_G__name->setName("name");
    m_G__name->setDefaultValueLiteral("");
    m_G__name->setLowerBound(0);
    m_G__name->setUpperBound(1);
    m_G__name->setTransient(false);
    m_G__name->setVolatile(false);
    m_G__name->setChangeable(true);
    m_G__name->setUnsettable(false);
    m_G__name->setID(false);
    m_G__name->setUnique(false);
    m_G__name->setDerived(false);
    m_G__name->setOrdered(false);
    // Defs
    m_DefsEClass->setName("Defs");
    m_DefsEClass->setAbstract(false);
    m_DefsEClass->setInterface(false);
    // Symbol
    m_SymbolEClass->setName("Symbol");
    m_SymbolEClass->setAbstract(false);
    m_SymbolEClass->setInterface(false);
    // Use
    m_UseEClass->setName("Use");
    m_UseEClass->setAbstract(false);
    m_UseEClass->setInterface(false);
    m_Use__use->setEType(m_ElementEClass);
    m_Use__use->setName("use");
    m_Use__use->setDefaultValueLiteral("");
    m_Use__use->setLowerBound(0);
    m_Use__use->setUpperBound(-1);
    m_Use__use->setTransient(false);
    m_Use__use->setVolatile(false);
    m_Use__use->setChangeable(true);
    m_Use__use->setContainment(false);
    m_Use__use->setResolveProxies(true);
    m_Use__use->setUnique(true);
    m_Use__use->setDerived(false);
    m_Use__use->setOrdered(false);
    m_Use__use->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[4]));
    // GraphicalElement
    m_GraphicalElementEClass->setName("GraphicalElement");
    m_GraphicalElementEClass->setAbstract(true);
    m_GraphicalElementEClass->setInterface(false);
    m_GraphicalElement__stroke->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_GraphicalElement__stroke->setName("stroke");
    m_GraphicalElement__stroke->setDefaultValueLiteral("");
    m_GraphicalElement__stroke->setLowerBound(0);
    m_GraphicalElement__stroke->setUpperBound(1);
    m_GraphicalElement__stroke->setTransient(false);
    m_GraphicalElement__stroke->setVolatile(false);
    m_GraphicalElement__stroke->setChangeable(true);
    m_GraphicalElement__stroke->setUnsettable(false);
    m_GraphicalElement__stroke->setID(false);
    m_GraphicalElement__stroke->setUnique(false);
    m_GraphicalElement__stroke->setDerived(false);
    m_GraphicalElement__stroke->setOrdered(false);
    // Shape
    m_ShapeEClass->setName("Shape");
    m_ShapeEClass->setAbstract(true);
    m_ShapeEClass->setInterface(false);
    // TextElement
    m_TextElementEClass->setName("TextElement");
    m_TextElementEClass->setAbstract(true);
    m_TextElementEClass->setInterface(false);
    m_TextElement__rotate->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_TextElement__rotate->setName("rotate");
    m_TextElement__rotate->setDefaultValueLiteral("");
    m_TextElement__rotate->setLowerBound(0);
    m_TextElement__rotate->setUpperBound(1);
    m_TextElement__rotate->setTransient(false);
    m_TextElement__rotate->setVolatile(false);
    m_TextElement__rotate->setChangeable(true);
    m_TextElement__rotate->setUnsettable(false);
    m_TextElement__rotate->setID(false);
    m_TextElement__rotate->setUnique(false);
    m_TextElement__rotate->setDerived(false);
    m_TextElement__rotate->setOrdered(false);
    m_TextElement__textLength->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_TextElement__textLength->setName("textLength");
    m_TextElement__textLength->setDefaultValueLiteral("");
    m_TextElement__textLength->setLowerBound(0);
    m_TextElement__textLength->setUpperBound(1);
    m_TextElement__textLength->setTransient(false);
    m_TextElement__textLength->setVolatile(false);
    m_TextElement__textLength->setChangeable(true);
    m_TextElement__textLength->setUnsettable(false);
    m_TextElement__textLength->setID(false);
    m_TextElement__textLength->setUnique(false);
    m_TextElement__textLength->setDerived(false);
    m_TextElement__textLength->setOrdered(false);
    m_TextElement__fontSize->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_TextElement__fontSize->setName("fontSize");
    m_TextElement__fontSize->setDefaultValueLiteral("");
    m_TextElement__fontSize->setLowerBound(0);
    m_TextElement__fontSize->setUpperBound(1);
    m_TextElement__fontSize->setTransient(false);
    m_TextElement__fontSize->setVolatile(false);
    m_TextElement__fontSize->setChangeable(true);
    m_TextElement__fontSize->setUnsettable(false);
    m_TextElement__fontSize->setID(false);
    m_TextElement__fontSize->setUnique(false);
    m_TextElement__fontSize->setDerived(false);
    m_TextElement__fontSize->setOrdered(false);
    // Rect
    m_RectEClass->setName("Rect");
    m_RectEClass->setAbstract(false);
    m_RectEClass->setInterface(false);
    m_Rect__rx->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Rect__rx->setName("rx");
    m_Rect__rx->setDefaultValueLiteral("");
    m_Rect__rx->setLowerBound(0);
    m_Rect__rx->setUpperBound(1);
    m_Rect__rx->setTransient(false);
    m_Rect__rx->setVolatile(false);
    m_Rect__rx->setChangeable(true);
    m_Rect__rx->setUnsettable(false);
    m_Rect__rx->setID(false);
    m_Rect__rx->setUnique(false);
    m_Rect__rx->setDerived(false);
    m_Rect__rx->setOrdered(false);
    m_Rect__ry->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Rect__ry->setName("ry");
    m_Rect__ry->setDefaultValueLiteral("");
    m_Rect__ry->setLowerBound(0);
    m_Rect__ry->setUpperBound(1);
    m_Rect__ry->setTransient(false);
    m_Rect__ry->setVolatile(false);
    m_Rect__ry->setChangeable(true);
    m_Rect__ry->setUnsettable(false);
    m_Rect__ry->setID(false);
    m_Rect__ry->setUnique(false);
    m_Rect__ry->setDerived(false);
    m_Rect__ry->setOrdered(false);
    // Circle
    m_CircleEClass->setName("Circle");
    m_CircleEClass->setAbstract(false);
    m_CircleEClass->setInterface(false);
    // Ellipse
    m_EllipseEClass->setName("Ellipse");
    m_EllipseEClass->setAbstract(false);
    m_EllipseEClass->setInterface(false);
    // Line
    m_LineEClass->setName("Line");
    m_LineEClass->setAbstract(false);
    m_LineEClass->setInterface(false);
    m_Line__markerEnd->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Line__markerEnd->setName("markerEnd");
    m_Line__markerEnd->setDefaultValueLiteral("");
    m_Line__markerEnd->setLowerBound(0);
    m_Line__markerEnd->setUpperBound(1);
    m_Line__markerEnd->setTransient(false);
    m_Line__markerEnd->setVolatile(false);
    m_Line__markerEnd->setChangeable(true);
    m_Line__markerEnd->setUnsettable(false);
    m_Line__markerEnd->setID(false);
    m_Line__markerEnd->setUnique(false);
    m_Line__markerEnd->setDerived(false);
    m_Line__markerEnd->setOrdered(false);
    m_Line__markerStart->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Line__markerStart->setName("markerStart");
    m_Line__markerStart->setDefaultValueLiteral("");
    m_Line__markerStart->setLowerBound(0);
    m_Line__markerStart->setUpperBound(1);
    m_Line__markerStart->setTransient(false);
    m_Line__markerStart->setVolatile(false);
    m_Line__markerStart->setChangeable(true);
    m_Line__markerStart->setUnsettable(false);
    m_Line__markerStart->setID(false);
    m_Line__markerStart->setUnique(false);
    m_Line__markerStart->setDerived(false);
    m_Line__markerStart->setOrdered(false);
    m_Line__between->setEType(m_PointEClass);
    m_Line__between->setName("between");
    m_Line__between->setDefaultValueLiteral("");
    m_Line__between->setLowerBound(2);
    m_Line__between->setUpperBound(2);
    m_Line__between->setTransient(false);
    m_Line__between->setVolatile(false);
    m_Line__between->setChangeable(true);
    m_Line__between->setContainment(false);
    m_Line__between->setResolveProxies(true);
    m_Line__between->setUnique(true);
    m_Line__between->setDerived(false);
    m_Line__between->setOrdered(false);
    // Polyline
    m_PolylineEClass->setName("Polyline");
    m_PolylineEClass->setAbstract(false);
    m_PolylineEClass->setInterface(false);
    m_Polyline__strokeDashArray->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Polyline__strokeDashArray->setName("strokeDashArray");
    m_Polyline__strokeDashArray->setDefaultValueLiteral("");
    m_Polyline__strokeDashArray->setLowerBound(0);
    m_Polyline__strokeDashArray->setUpperBound(1);
    m_Polyline__strokeDashArray->setTransient(false);
    m_Polyline__strokeDashArray->setVolatile(false);
    m_Polyline__strokeDashArray->setChangeable(true);
    m_Polyline__strokeDashArray->setUnsettable(false);
    m_Polyline__strokeDashArray->setID(false);
    m_Polyline__strokeDashArray->setUnique(false);
    m_Polyline__strokeDashArray->setDerived(false);
    m_Polyline__strokeDashArray->setOrdered(false);
    m_Polyline__markerEnd->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Polyline__markerEnd->setName("markerEnd");
    m_Polyline__markerEnd->setDefaultValueLiteral("");
    m_Polyline__markerEnd->setLowerBound(0);
    m_Polyline__markerEnd->setUpperBound(1);
    m_Polyline__markerEnd->setTransient(false);
    m_Polyline__markerEnd->setVolatile(false);
    m_Polyline__markerEnd->setChangeable(true);
    m_Polyline__markerEnd->setUnsettable(false);
    m_Polyline__markerEnd->setID(false);
    m_Polyline__markerEnd->setUnique(false);
    m_Polyline__markerEnd->setDerived(false);
    m_Polyline__markerEnd->setOrdered(false);
    m_Polyline__markerStart->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Polyline__markerStart->setName("markerStart");
    m_Polyline__markerStart->setDefaultValueLiteral("");
    m_Polyline__markerStart->setLowerBound(0);
    m_Polyline__markerStart->setUpperBound(1);
    m_Polyline__markerStart->setTransient(false);
    m_Polyline__markerStart->setVolatile(false);
    m_Polyline__markerStart->setChangeable(true);
    m_Polyline__markerStart->setUnsettable(false);
    m_Polyline__markerStart->setID(false);
    m_Polyline__markerStart->setUnique(false);
    m_Polyline__markerStart->setDerived(false);
    m_Polyline__markerStart->setOrdered(false);
    m_Polyline__waypoints->setEType(m_PointEClass);
    m_Polyline__waypoints->setName("waypoints");
    m_Polyline__waypoints->setDefaultValueLiteral("");
    m_Polyline__waypoints->setLowerBound(0);
    m_Polyline__waypoints->setUpperBound(-1);
    m_Polyline__waypoints->setTransient(false);
    m_Polyline__waypoints->setVolatile(false);
    m_Polyline__waypoints->setChangeable(true);
    m_Polyline__waypoints->setContainment(true);
    m_Polyline__waypoints->setResolveProxies(true);
    m_Polyline__waypoints->setUnique(true);
    m_Polyline__waypoints->setDerived(false);
    m_Polyline__waypoints->setOrdered(true);
    // Polygon
    m_PolygonEClass->setName("Polygon");
    m_PolygonEClass->setAbstract(false);
    m_PolygonEClass->setInterface(false);
    m_Polygon__markerEnd->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Polygon__markerEnd->setName("markerEnd");
    m_Polygon__markerEnd->setDefaultValueLiteral("");
    m_Polygon__markerEnd->setLowerBound(0);
    m_Polygon__markerEnd->setUpperBound(1);
    m_Polygon__markerEnd->setTransient(false);
    m_Polygon__markerEnd->setVolatile(false);
    m_Polygon__markerEnd->setChangeable(true);
    m_Polygon__markerEnd->setUnsettable(false);
    m_Polygon__markerEnd->setID(false);
    m_Polygon__markerEnd->setUnique(false);
    m_Polygon__markerEnd->setDerived(false);
    m_Polygon__markerEnd->setOrdered(false);
    m_Polygon__markerStart->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Polygon__markerStart->setName("markerStart");
    m_Polygon__markerStart->setDefaultValueLiteral("");
    m_Polygon__markerStart->setLowerBound(0);
    m_Polygon__markerStart->setUpperBound(1);
    m_Polygon__markerStart->setTransient(false);
    m_Polygon__markerStart->setVolatile(false);
    m_Polygon__markerStart->setChangeable(true);
    m_Polygon__markerStart->setUnsettable(false);
    m_Polygon__markerStart->setID(false);
    m_Polygon__markerStart->setUnique(false);
    m_Polygon__markerStart->setDerived(false);
    m_Polygon__markerStart->setOrdered(false);
    m_Polygon__waypoints->setEType(m_PointEClass);
    m_Polygon__waypoints->setName("waypoints");
    m_Polygon__waypoints->setDefaultValueLiteral("");
    m_Polygon__waypoints->setLowerBound(0);
    m_Polygon__waypoints->setUpperBound(-1);
    m_Polygon__waypoints->setTransient(false);
    m_Polygon__waypoints->setVolatile(false);
    m_Polygon__waypoints->setChangeable(true);
    m_Polygon__waypoints->setContainment(false);
    m_Polygon__waypoints->setResolveProxies(true);
    m_Polygon__waypoints->setUnique(true);
    m_Polygon__waypoints->setDerived(false);
    m_Polygon__waypoints->setOrdered(true);
    // Path
    m_PathEClass->setName("Path");
    m_PathEClass->setAbstract(false);
    m_PathEClass->setInterface(false);
    m_Path__pathLength->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Path__pathLength->setName("pathLength");
    m_Path__pathLength->setDefaultValueLiteral("");
    m_Path__pathLength->setLowerBound(0);
    m_Path__pathLength->setUpperBound(1);
    m_Path__pathLength->setTransient(false);
    m_Path__pathLength->setVolatile(false);
    m_Path__pathLength->setChangeable(true);
    m_Path__pathLength->setUnsettable(false);
    m_Path__pathLength->setID(false);
    m_Path__pathLength->setUnique(false);
    m_Path__pathLength->setDerived(false);
    m_Path__pathLength->setOrdered(false);
    m_Path__d->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Path__d->setName("d");
    m_Path__d->setDefaultValueLiteral("");
    m_Path__d->setLowerBound(1);
    m_Path__d->setUpperBound(1);
    m_Path__d->setTransient(false);
    m_Path__d->setVolatile(false);
    m_Path__d->setChangeable(true);
    m_Path__d->setUnsettable(false);
    m_Path__d->setID(false);
    m_Path__d->setUnique(false);
    m_Path__d->setDerived(false);
    m_Path__d->setOrdered(false);
    m_Path__markerEnd->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Path__markerEnd->setName("markerEnd");
    m_Path__markerEnd->setDefaultValueLiteral("");
    m_Path__markerEnd->setLowerBound(0);
    m_Path__markerEnd->setUpperBound(1);
    m_Path__markerEnd->setTransient(false);
    m_Path__markerEnd->setVolatile(false);
    m_Path__markerEnd->setChangeable(true);
    m_Path__markerEnd->setUnsettable(false);
    m_Path__markerEnd->setID(false);
    m_Path__markerEnd->setUnique(false);
    m_Path__markerEnd->setDerived(false);
    m_Path__markerEnd->setOrdered(false);
    m_Path__markerStart->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Path__markerStart->setName("markerStart");
    m_Path__markerStart->setDefaultValueLiteral("");
    m_Path__markerStart->setLowerBound(0);
    m_Path__markerStart->setUpperBound(1);
    m_Path__markerStart->setTransient(false);
    m_Path__markerStart->setVolatile(false);
    m_Path__markerStart->setChangeable(true);
    m_Path__markerStart->setUnsettable(false);
    m_Path__markerStart->setID(false);
    m_Path__markerStart->setUnique(false);
    m_Path__markerStart->setDerived(false);
    m_Path__markerStart->setOrdered(false);
    // Point
    m_PointEClass->setName("Point");
    m_PointEClass->setAbstract(false);
    m_PointEClass->setInterface(false);
    // Marker
    m_MarkerEClass->setName("Marker");
    m_MarkerEClass->setAbstract(false);
    m_MarkerEClass->setInterface(false);
    m_Marker__markerUnits->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Marker__markerUnits->setName("markerUnits");
    m_Marker__markerUnits->setDefaultValueLiteral("");
    m_Marker__markerUnits->setLowerBound(0);
    m_Marker__markerUnits->setUpperBound(1);
    m_Marker__markerUnits->setTransient(false);
    m_Marker__markerUnits->setVolatile(false);
    m_Marker__markerUnits->setChangeable(true);
    m_Marker__markerUnits->setUnsettable(false);
    m_Marker__markerUnits->setID(false);
    m_Marker__markerUnits->setUnique(false);
    m_Marker__markerUnits->setDerived(false);
    m_Marker__markerUnits->setOrdered(false);
    m_Marker__refX->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Marker__refX->setName("refX");
    m_Marker__refX->setDefaultValueLiteral("");
    m_Marker__refX->setLowerBound(0);
    m_Marker__refX->setUpperBound(1);
    m_Marker__refX->setTransient(false);
    m_Marker__refX->setVolatile(false);
    m_Marker__refX->setChangeable(true);
    m_Marker__refX->setUnsettable(false);
    m_Marker__refX->setID(false);
    m_Marker__refX->setUnique(false);
    m_Marker__refX->setDerived(false);
    m_Marker__refX->setOrdered(false);
    m_Marker__refY->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Marker__refY->setName("refY");
    m_Marker__refY->setDefaultValueLiteral("");
    m_Marker__refY->setLowerBound(0);
    m_Marker__refY->setUpperBound(1);
    m_Marker__refY->setTransient(false);
    m_Marker__refY->setVolatile(false);
    m_Marker__refY->setChangeable(true);
    m_Marker__refY->setUnsettable(false);
    m_Marker__refY->setID(false);
    m_Marker__refY->setUnique(false);
    m_Marker__refY->setDerived(false);
    m_Marker__refY->setOrdered(false);
    m_Marker__markerWidth->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Marker__markerWidth->setName("markerWidth");
    m_Marker__markerWidth->setDefaultValueLiteral("");
    m_Marker__markerWidth->setLowerBound(0);
    m_Marker__markerWidth->setUpperBound(1);
    m_Marker__markerWidth->setTransient(false);
    m_Marker__markerWidth->setVolatile(false);
    m_Marker__markerWidth->setChangeable(true);
    m_Marker__markerWidth->setUnsettable(false);
    m_Marker__markerWidth->setID(false);
    m_Marker__markerWidth->setUnique(false);
    m_Marker__markerWidth->setDerived(false);
    m_Marker__markerWidth->setOrdered(false);
    m_Marker__markerHeight->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Marker__markerHeight->setName("markerHeight");
    m_Marker__markerHeight->setDefaultValueLiteral("");
    m_Marker__markerHeight->setLowerBound(0);
    m_Marker__markerHeight->setUpperBound(1);
    m_Marker__markerHeight->setTransient(false);
    m_Marker__markerHeight->setVolatile(false);
    m_Marker__markerHeight->setChangeable(true);
    m_Marker__markerHeight->setUnsettable(false);
    m_Marker__markerHeight->setID(false);
    m_Marker__markerHeight->setUnique(false);
    m_Marker__markerHeight->setDerived(false);
    m_Marker__markerHeight->setOrdered(false);
    m_Marker__orient->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Marker__orient->setName("orient");
    m_Marker__orient->setDefaultValueLiteral("");
    m_Marker__orient->setLowerBound(0);
    m_Marker__orient->setUpperBound(1);
    m_Marker__orient->setTransient(false);
    m_Marker__orient->setVolatile(false);
    m_Marker__orient->setChangeable(true);
    m_Marker__orient->setUnsettable(false);
    m_Marker__orient->setID(false);
    m_Marker__orient->setUnique(false);
    m_Marker__orient->setDerived(false);
    m_Marker__orient->setOrdered(false);
    m_Marker__drawing->setEType(m_ElementEClass);
    m_Marker__drawing->setName("drawing");
    m_Marker__drawing->setDefaultValueLiteral("");
    m_Marker__drawing->setLowerBound(0);
    m_Marker__drawing->setUpperBound(-1);
    m_Marker__drawing->setTransient(false);
    m_Marker__drawing->setVolatile(false);
    m_Marker__drawing->setChangeable(true);
    m_Marker__drawing->setContainment(true);
    m_Marker__drawing->setResolveProxies(true);
    m_Marker__drawing->setUnique(true);
    m_Marker__drawing->setDerived(false);
    m_Marker__drawing->setOrdered(false);
    m_Marker__drawing->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[10]));
    // Text
    m_TextEClass->setName("Text");
    m_TextEClass->setAbstract(false);
    m_TextEClass->setInterface(false);
    m_Text__lengthAdjust->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Text__lengthAdjust->setName("lengthAdjust");
    m_Text__lengthAdjust->setDefaultValueLiteral("");
    m_Text__lengthAdjust->setLowerBound(0);
    m_Text__lengthAdjust->setUpperBound(1);
    m_Text__lengthAdjust->setTransient(false);
    m_Text__lengthAdjust->setVolatile(false);
    m_Text__lengthAdjust->setChangeable(true);
    m_Text__lengthAdjust->setUnsettable(false);
    m_Text__lengthAdjust->setID(false);
    m_Text__lengthAdjust->setUnique(false);
    m_Text__lengthAdjust->setDerived(false);
    m_Text__lengthAdjust->setOrdered(false);
    m_Text__content->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Text__content->setName("content");
    m_Text__content->setDefaultValueLiteral("");
    m_Text__content->setLowerBound(1);
    m_Text__content->setUpperBound(1);
    m_Text__content->setTransient(false);
    m_Text__content->setVolatile(false);
    m_Text__content->setChangeable(true);
    m_Text__content->setUnsettable(false);
    m_Text__content->setID(false);
    m_Text__content->setUnique(false);
    m_Text__content->setDerived(false);
    m_Text__content->setOrdered(false);
    // Tspan
    m_TspanEClass->setName("Tspan");
    m_TspanEClass->setAbstract(false);
    m_TspanEClass->setInterface(false);
    m_Tspan__content->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_Tspan__content->setName("content");
    m_Tspan__content->setDefaultValueLiteral("");
    m_Tspan__content->setLowerBound(0);
    m_Tspan__content->setUpperBound(1);
    m_Tspan__content->setTransient(false);
    m_Tspan__content->setVolatile(false);
    m_Tspan__content->setChangeable(true);
    m_Tspan__content->setUnsettable(false);
    m_Tspan__content->setID(false);
    m_Tspan__content->setUnique(false);
    m_Tspan__content->setDerived(false);
    m_Tspan__content->setOrdered(false);
    // Tref
    m_TrefEClass->setName("Tref");
    m_TrefEClass->setAbstract(false);
    m_TrefEClass->setInterface(false);
    m_Tref__xlinkHref->setEType(m_TextElementEClass);
    m_Tref__xlinkHref->setName("xlinkHref");
    m_Tref__xlinkHref->setDefaultValueLiteral("");
    m_Tref__xlinkHref->setLowerBound(1);
    m_Tref__xlinkHref->setUpperBound(1);
    m_Tref__xlinkHref->setTransient(false);
    m_Tref__xlinkHref->setVolatile(false);
    m_Tref__xlinkHref->setChangeable(true);
    m_Tref__xlinkHref->setContainment(false);
    m_Tref__xlinkHref->setResolveProxies(true);
    m_Tref__xlinkHref->setUnique(true);
    m_Tref__xlinkHref->setDerived(false);
    m_Tref__xlinkHref->setOrdered(false);
    // Attribute
    m_AttributeEClass->setName("Attribute");
    m_AttributeEClass->setAbstract(true);
    m_AttributeEClass->setInterface(false);
    m_Attribute__attOwner->setEType(m_ElementEClass);
    m_Attribute__attOwner->setName("attOwner");
    m_Attribute__attOwner->setDefaultValueLiteral("");
    m_Attribute__attOwner->setLowerBound(0);
    m_Attribute__attOwner->setUpperBound(-1);
    m_Attribute__attOwner->setTransient(false);
    m_Attribute__attOwner->setVolatile(false);
    m_Attribute__attOwner->setChangeable(true);
    m_Attribute__attOwner->setContainment(false);
    m_Attribute__attOwner->setResolveProxies(true);
    m_Attribute__attOwner->setUnique(true);
    m_Attribute__attOwner->setDerived(false);
    m_Attribute__attOwner->setOrdered(false);
    m_Attribute__attOwner->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[5]));
    // Transform
    m_TransformEClass->setName("Transform");
    m_TransformEClass->setAbstract(true);
    m_TransformEClass->setInterface(false);
    // Scale
    m_ScaleEClass->setName("Scale");
    m_ScaleEClass->setAbstract(false);
    m_ScaleEClass->setInterface(false);
    m_Scale__sx->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Scale__sx->setName("sx");
    m_Scale__sx->setDefaultValueLiteral("");
    m_Scale__sx->setLowerBound(1);
    m_Scale__sx->setUpperBound(1);
    m_Scale__sx->setTransient(false);
    m_Scale__sx->setVolatile(false);
    m_Scale__sx->setChangeable(true);
    m_Scale__sx->setUnsettable(false);
    m_Scale__sx->setID(false);
    m_Scale__sx->setUnique(false);
    m_Scale__sx->setDerived(false);
    m_Scale__sx->setOrdered(false);
    m_Scale__sy->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Scale__sy->setName("sy");
    m_Scale__sy->setDefaultValueLiteral("");
    m_Scale__sy->setLowerBound(1);
    m_Scale__sy->setUpperBound(1);
    m_Scale__sy->setTransient(false);
    m_Scale__sy->setVolatile(false);
    m_Scale__sy->setChangeable(true);
    m_Scale__sy->setUnsettable(false);
    m_Scale__sy->setID(false);
    m_Scale__sy->setUnique(false);
    m_Scale__sy->setDerived(false);
    m_Scale__sy->setOrdered(false);
    // Translate
    m_TranslateEClass->setName("Translate");
    m_TranslateEClass->setAbstract(false);
    m_TranslateEClass->setInterface(false);
    m_Translate__tx->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Translate__tx->setName("tx");
    m_Translate__tx->setDefaultValueLiteral("");
    m_Translate__tx->setLowerBound(1);
    m_Translate__tx->setUpperBound(1);
    m_Translate__tx->setTransient(false);
    m_Translate__tx->setVolatile(false);
    m_Translate__tx->setChangeable(true);
    m_Translate__tx->setUnsettable(false);
    m_Translate__tx->setID(false);
    m_Translate__tx->setUnique(false);
    m_Translate__tx->setDerived(false);
    m_Translate__tx->setOrdered(false);
    m_Translate__ty->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Translate__ty->setName("ty");
    m_Translate__ty->setDefaultValueLiteral("");
    m_Translate__ty->setLowerBound(1);
    m_Translate__ty->setUpperBound(1);
    m_Translate__ty->setTransient(false);
    m_Translate__ty->setVolatile(false);
    m_Translate__ty->setChangeable(true);
    m_Translate__ty->setUnsettable(false);
    m_Translate__ty->setID(false);
    m_Translate__ty->setUnique(false);
    m_Translate__ty->setDerived(false);
    m_Translate__ty->setOrdered(false);
    // Rotate
    m_RotateEClass->setName("Rotate");
    m_RotateEClass->setAbstract(false);
    m_RotateEClass->setInterface(false);
    m_Rotate__angle->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Rotate__angle->setName("angle");
    m_Rotate__angle->setDefaultValueLiteral("");
    m_Rotate__angle->setLowerBound(1);
    m_Rotate__angle->setUpperBound(1);
    m_Rotate__angle->setTransient(false);
    m_Rotate__angle->setVolatile(false);
    m_Rotate__angle->setChangeable(true);
    m_Rotate__angle->setUnsettable(false);
    m_Rotate__angle->setID(false);
    m_Rotate__angle->setUnique(false);
    m_Rotate__angle->setDerived(false);
    m_Rotate__angle->setOrdered(false);
    m_Rotate__cx->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Rotate__cx->setName("cx");
    m_Rotate__cx->setDefaultValueLiteral("");
    m_Rotate__cx->setLowerBound(1);
    m_Rotate__cx->setUpperBound(1);
    m_Rotate__cx->setTransient(false);
    m_Rotate__cx->setVolatile(false);
    m_Rotate__cx->setChangeable(true);
    m_Rotate__cx->setUnsettable(false);
    m_Rotate__cx->setID(false);
    m_Rotate__cx->setUnique(false);
    m_Rotate__cx->setDerived(false);
    m_Rotate__cx->setOrdered(false);
    m_Rotate__cy->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Rotate__cy->setName("cy");
    m_Rotate__cy->setDefaultValueLiteral("");
    m_Rotate__cy->setLowerBound(1);
    m_Rotate__cy->setUpperBound(1);
    m_Rotate__cy->setTransient(false);
    m_Rotate__cy->setVolatile(false);
    m_Rotate__cy->setChangeable(true);
    m_Rotate__cy->setUnsettable(false);
    m_Rotate__cy->setID(false);
    m_Rotate__cy->setUnique(false);
    m_Rotate__cy->setDerived(false);
    m_Rotate__cy->setOrdered(false);
    // Visibility
    m_VisibilityEClass->setName("Visibility");
    m_VisibilityEClass->setAbstract(false);
    m_VisibilityEClass->setInterface(false);
    m_Visibility__visible->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getBoolean());
    m_Visibility__visible->setName("visible");
    m_Visibility__visible->setDefaultValueLiteral("");
    m_Visibility__visible->setLowerBound(1);
    m_Visibility__visible->setUpperBound(1);
    m_Visibility__visible->setTransient(false);
    m_Visibility__visible->setVolatile(false);
    m_Visibility__visible->setChangeable(true);
    m_Visibility__visible->setUnsettable(false);
    m_Visibility__visible->setID(false);
    m_Visibility__visible->setUnique(false);
    m_Visibility__visible->setDerived(false);
    m_Visibility__visible->setOrdered(false);
    // FontWeight
    m_FontWeightEClass->setName("FontWeight");
    m_FontWeightEClass->setAbstract(false);
    m_FontWeightEClass->setInterface(false);
    m_FontWeight__bold->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getBoolean());
    m_FontWeight__bold->setName("bold");
    m_FontWeight__bold->setDefaultValueLiteral("");
    m_FontWeight__bold->setLowerBound(1);
    m_FontWeight__bold->setUpperBound(1);
    m_FontWeight__bold->setTransient(false);
    m_FontWeight__bold->setVolatile(false);
    m_FontWeight__bold->setChangeable(true);
    m_FontWeight__bold->setUnsettable(false);
    m_FontWeight__bold->setID(false);
    m_FontWeight__bold->setUnique(false);
    m_FontWeight__bold->setDerived(false);
    m_FontWeight__bold->setOrdered(false);
    // FontStyle
    m_FontStyleEClass->setName("FontStyle");
    m_FontStyleEClass->setAbstract(false);
    m_FontStyleEClass->setInterface(false);
    m_FontStyle__italic->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getBoolean());
    m_FontStyle__italic->setName("italic");
    m_FontStyle__italic->setDefaultValueLiteral("");
    m_FontStyle__italic->setLowerBound(1);
    m_FontStyle__italic->setUpperBound(1);
    m_FontStyle__italic->setTransient(false);
    m_FontStyle__italic->setVolatile(false);
    m_FontStyle__italic->setChangeable(true);
    m_FontStyle__italic->setUnsettable(false);
    m_FontStyle__italic->setID(false);
    m_FontStyle__italic->setUnique(false);
    m_FontStyle__italic->setDerived(false);
    m_FontStyle__italic->setOrdered(false);
    // Dimension
    m_DimensionEClass->setName("Dimension");
    m_DimensionEClass->setAbstract(false);
    m_DimensionEClass->setInterface(false);
    m_Dimension__width->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Dimension__width->setName("width");
    m_Dimension__width->setDefaultValueLiteral("");
    m_Dimension__width->setLowerBound(1);
    m_Dimension__width->setUpperBound(1);
    m_Dimension__width->setTransient(false);
    m_Dimension__width->setVolatile(false);
    m_Dimension__width->setChangeable(true);
    m_Dimension__width->setUnsettable(false);
    m_Dimension__width->setID(false);
    m_Dimension__width->setUnique(false);
    m_Dimension__width->setDerived(false);
    m_Dimension__width->setOrdered(false);
    m_Dimension__height->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Dimension__height->setName("height");
    m_Dimension__height->setDefaultValueLiteral("");
    m_Dimension__height->setLowerBound(1);
    m_Dimension__height->setUpperBound(1);
    m_Dimension__height->setTransient(false);
    m_Dimension__height->setVolatile(false);
    m_Dimension__height->setChangeable(true);
    m_Dimension__height->setUnsettable(false);
    m_Dimension__height->setID(false);
    m_Dimension__height->setUnique(false);
    m_Dimension__height->setDerived(false);
    m_Dimension__height->setOrdered(false);
    // Coordinates
    m_CoordinatesEClass->setName("Coordinates");
    m_CoordinatesEClass->setAbstract(true);
    m_CoordinatesEClass->setInterface(false);
    m_Coordinates__x->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Coordinates__x->setName("x");
    m_Coordinates__x->setDefaultValueLiteral("");
    m_Coordinates__x->setLowerBound(1);
    m_Coordinates__x->setUpperBound(1);
    m_Coordinates__x->setTransient(false);
    m_Coordinates__x->setVolatile(false);
    m_Coordinates__x->setChangeable(true);
    m_Coordinates__x->setUnsettable(false);
    m_Coordinates__x->setID(false);
    m_Coordinates__x->setUnique(false);
    m_Coordinates__x->setDerived(false);
    m_Coordinates__x->setOrdered(false);
    m_Coordinates__y->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getDouble());
    m_Coordinates__y->setName("y");
    m_Coordinates__y->setDefaultValueLiteral("");
    m_Coordinates__y->setLowerBound(1);
    m_Coordinates__y->setUpperBound(1);
    m_Coordinates__y->setTransient(false);
    m_Coordinates__y->setVolatile(false);
    m_Coordinates__y->setChangeable(true);
    m_Coordinates__y->setUnsettable(false);
    m_Coordinates__y->setID(false);
    m_Coordinates__y->setUnique(false);
    m_Coordinates__y->setDerived(false);
    m_Coordinates__y->setOrdered(false);
    // RelativeCoord
    m_RelativeCoordEClass->setName("RelativeCoord");
    m_RelativeCoordEClass->setAbstract(false);
    m_RelativeCoordEClass->setInterface(false);
    // AbsoluteCoord
    m_AbsoluteCoordEClass->setName("AbsoluteCoord");
    m_AbsoluteCoordEClass->setAbstract(false);
    m_AbsoluteCoordEClass->setInterface(false);
    // ReferencedFile
    m_ReferencedFileEClass->setName("ReferencedFile");
    m_ReferencedFileEClass->setAbstract(true);
    m_ReferencedFileEClass->setInterface(false);
    m_ReferencedFile__name->setEType(
            dynamic_cast< ::PrimitiveTypes::PrimitiveTypesPackage* >(::PrimitiveTypes::PrimitiveTypesPackage::_instance().get())->getString());
    m_ReferencedFile__name->setName("name");
    m_ReferencedFile__name->setDefaultValueLiteral("");
    m_ReferencedFile__name->setLowerBound(1);
    m_ReferencedFile__name->setUpperBound(1);
    m_ReferencedFile__name->setTransient(false);
    m_ReferencedFile__name->setVolatile(false);
    m_ReferencedFile__name->setChangeable(true);
    m_ReferencedFile__name->setUnsettable(false);
    m_ReferencedFile__name->setID(false);
    m_ReferencedFile__name->setUnique(false);
    m_ReferencedFile__name->setDerived(false);
    m_ReferencedFile__name->setOrdered(false);
    m_ReferencedFile__referer->setEType(m_ImageEClass);
    m_ReferencedFile__referer->setName("referer");
    m_ReferencedFile__referer->setDefaultValueLiteral("");
    m_ReferencedFile__referer->setLowerBound(0);
    m_ReferencedFile__referer->setUpperBound(-1);
    m_ReferencedFile__referer->setTransient(false);
    m_ReferencedFile__referer->setVolatile(false);
    m_ReferencedFile__referer->setChangeable(true);
    m_ReferencedFile__referer->setContainment(false);
    m_ReferencedFile__referer->setResolveProxies(true);
    m_ReferencedFile__referer->setUnique(true);
    m_ReferencedFile__referer->setDerived(false);
    m_ReferencedFile__referer->setOrdered(false);
    m_ReferencedFile__referer->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ImageEClass->getEStructuralFeatures()[0]));
    // SvgFile
    m_SvgFileEClass->setName("SvgFile");
    m_SvgFileEClass->setAbstract(false);
    m_SvgFileEClass->setInterface(false);
    m_SvgFile__tag->setEType(m_SvgEClass);
    m_SvgFile__tag->setName("tag");
    m_SvgFile__tag->setDefaultValueLiteral("");
    m_SvgFile__tag->setLowerBound(1);
    m_SvgFile__tag->setUpperBound(1);
    m_SvgFile__tag->setTransient(false);
    m_SvgFile__tag->setVolatile(false);
    m_SvgFile__tag->setChangeable(true);
    m_SvgFile__tag->setContainment(false);
    m_SvgFile__tag->setResolveProxies(true);
    m_SvgFile__tag->setUnique(true);
    m_SvgFile__tag->setDerived(false);
    m_SvgFile__tag->setOrdered(false);
    m_SvgFile__tag->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_SvgEClass->getEStructuralFeatures()[3]));
    m_SvgFile__elements->setEType(m_ElementEClass);
    m_SvgFile__elements->setName("elements");
    m_SvgFile__elements->setDefaultValueLiteral("");
    m_SvgFile__elements->setLowerBound(0);
    m_SvgFile__elements->setUpperBound(-1);
    m_SvgFile__elements->setTransient(false);
    m_SvgFile__elements->setVolatile(false);
    m_SvgFile__elements->setChangeable(true);
    m_SvgFile__elements->setContainment(false);
    m_SvgFile__elements->setResolveProxies(true);
    m_SvgFile__elements->setUnique(true);
    m_SvgFile__elements->setDerived(false);
    m_SvgFile__elements->setOrdered(false);
    m_SvgFile__elements->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ElementEClass->getEStructuralFeatures()[3]));

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr SVGPackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr SVGPackage::getStructuralElement()
{
    return m_StructuralElementEClass;
}
::ecore::EClass_ptr SVGPackage::getImage()
{
    return m_ImageEClass;
}
::ecore::EClass_ptr SVGPackage::getSvg()
{
    return m_SvgEClass;
}
::ecore::EClass_ptr SVGPackage::getGroupingElement()
{
    return m_GroupingElementEClass;
}
::ecore::EClass_ptr SVGPackage::getG()
{
    return m_GEClass;
}
::ecore::EClass_ptr SVGPackage::getDefs()
{
    return m_DefsEClass;
}
::ecore::EClass_ptr SVGPackage::getSymbol()
{
    return m_SymbolEClass;
}
::ecore::EClass_ptr SVGPackage::getUse()
{
    return m_UseEClass;
}
::ecore::EClass_ptr SVGPackage::getGraphicalElement()
{
    return m_GraphicalElementEClass;
}
::ecore::EClass_ptr SVGPackage::getShape()
{
    return m_ShapeEClass;
}
::ecore::EClass_ptr SVGPackage::getTextElement()
{
    return m_TextElementEClass;
}
::ecore::EClass_ptr SVGPackage::getRect()
{
    return m_RectEClass;
}
::ecore::EClass_ptr SVGPackage::getCircle()
{
    return m_CircleEClass;
}
::ecore::EClass_ptr SVGPackage::getEllipse()
{
    return m_EllipseEClass;
}
::ecore::EClass_ptr SVGPackage::getLine()
{
    return m_LineEClass;
}
::ecore::EClass_ptr SVGPackage::getPolyline()
{
    return m_PolylineEClass;
}
::ecore::EClass_ptr SVGPackage::getPolygon()
{
    return m_PolygonEClass;
}
::ecore::EClass_ptr SVGPackage::getPath()
{
    return m_PathEClass;
}
::ecore::EClass_ptr SVGPackage::getPoint()
{
    return m_PointEClass;
}
::ecore::EClass_ptr SVGPackage::getMarker()
{
    return m_MarkerEClass;
}
::ecore::EClass_ptr SVGPackage::getText()
{
    return m_TextEClass;
}
::ecore::EClass_ptr SVGPackage::getTspan()
{
    return m_TspanEClass;
}
::ecore::EClass_ptr SVGPackage::getTref()
{
    return m_TrefEClass;
}
::ecore::EClass_ptr SVGPackage::getAttribute()
{
    return m_AttributeEClass;
}
::ecore::EClass_ptr SVGPackage::getTransform()
{
    return m_TransformEClass;
}
::ecore::EClass_ptr SVGPackage::getScale()
{
    return m_ScaleEClass;
}
::ecore::EClass_ptr SVGPackage::getTranslate()
{
    return m_TranslateEClass;
}
::ecore::EClass_ptr SVGPackage::getRotate()
{
    return m_RotateEClass;
}
::ecore::EClass_ptr SVGPackage::getVisibility()
{
    return m_VisibilityEClass;
}
::ecore::EClass_ptr SVGPackage::getFontWeight()
{
    return m_FontWeightEClass;
}
::ecore::EClass_ptr SVGPackage::getFontStyle()
{
    return m_FontStyleEClass;
}
::ecore::EClass_ptr SVGPackage::getDimension()
{
    return m_DimensionEClass;
}
::ecore::EClass_ptr SVGPackage::getCoordinates()
{
    return m_CoordinatesEClass;
}
::ecore::EClass_ptr SVGPackage::getRelativeCoord()
{
    return m_RelativeCoordEClass;
}
::ecore::EClass_ptr SVGPackage::getAbsoluteCoord()
{
    return m_AbsoluteCoordEClass;
}
::ecore::EClass_ptr SVGPackage::getReferencedFile()
{
    return m_ReferencedFileEClass;
}
::ecore::EClass_ptr SVGPackage::getSvgFile()
{
    return m_SvgFileEClass;
}

::ecore::EReference_ptr SVGPackage::getElement__owner()
{
    return m_Element__owner;
}
::ecore::EReference_ptr SVGPackage::getElement__target()
{
    return m_Element__target;
}
::ecore::EReference_ptr SVGPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr SVGPackage::getElement__position()
{
    return m_Element__position;
}
::ecore::EReference_ptr SVGPackage::getElement__size()
{
    return m_Element__size;
}
::ecore::EReference_ptr SVGPackage::getElement__root()
{
    return m_Element__root;
}
::ecore::EAttribute_ptr SVGPackage::getElement__fill()
{
    return m_Element__fill;
}
::ecore::EAttribute_ptr SVGPackage::getElement__viewBox()
{
    return m_Element__viewBox;
}
::ecore::EReference_ptr SVGPackage::getElement__group()
{
    return m_Element__group;
}
::ecore::EAttribute_ptr SVGPackage::getElement__identifier()
{
    return m_Element__identifier;
}
::ecore::EReference_ptr SVGPackage::getElement__drawsMarker()
{
    return m_Element__drawsMarker;
}
::ecore::EReference_ptr SVGPackage::getImage__referee()
{
    return m_Image__referee;
}
::ecore::EReference_ptr SVGPackage::getSvg__owner_SVG()
{
    return m_Svg__owner_SVG;
}
::ecore::EReference_ptr SVGPackage::getSvg__children()
{
    return m_Svg__children;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__namespace()
{
    return m_Svg__namespace;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__version()
{
    return m_Svg__version;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__baseProfile()
{
    return m_Svg__baseProfile;
}
::ecore::EReference_ptr SVGPackage::getGroupingElement__groupContent()
{
    return m_GroupingElement__groupContent;
}
::ecore::EAttribute_ptr SVGPackage::getG__name()
{
    return m_G__name;
}
::ecore::EReference_ptr SVGPackage::getUse__use()
{
    return m_Use__use;
}
::ecore::EAttribute_ptr SVGPackage::getGraphicalElement__stroke()
{
    return m_GraphicalElement__stroke;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__rotate()
{
    return m_TextElement__rotate;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__textLength()
{
    return m_TextElement__textLength;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__fontSize()
{
    return m_TextElement__fontSize;
}
::ecore::EAttribute_ptr SVGPackage::getRect__rx()
{
    return m_Rect__rx;
}
::ecore::EAttribute_ptr SVGPackage::getRect__ry()
{
    return m_Rect__ry;
}
::ecore::EReference_ptr SVGPackage::getLine__between()
{
    return m_Line__between;
}
::ecore::EAttribute_ptr SVGPackage::getLine__markerEnd()
{
    return m_Line__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getLine__markerStart()
{
    return m_Line__markerStart;
}
::ecore::EReference_ptr SVGPackage::getPolyline__waypoints()
{
    return m_Polyline__waypoints;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__strokeDashArray()
{
    return m_Polyline__strokeDashArray;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__markerEnd()
{
    return m_Polyline__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__markerStart()
{
    return m_Polyline__markerStart;
}
::ecore::EReference_ptr SVGPackage::getPolygon__waypoints()
{
    return m_Polygon__waypoints;
}
::ecore::EAttribute_ptr SVGPackage::getPolygon__markerEnd()
{
    return m_Polygon__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPolygon__markerStart()
{
    return m_Polygon__markerStart;
}
::ecore::EAttribute_ptr SVGPackage::getPath__pathLength()
{
    return m_Path__pathLength;
}
::ecore::EAttribute_ptr SVGPackage::getPath__d()
{
    return m_Path__d;
}
::ecore::EAttribute_ptr SVGPackage::getPath__markerEnd()
{
    return m_Path__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPath__markerStart()
{
    return m_Path__markerStart;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerUnits()
{
    return m_Marker__markerUnits;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__refX()
{
    return m_Marker__refX;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__refY()
{
    return m_Marker__refY;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerWidth()
{
    return m_Marker__markerWidth;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerHeight()
{
    return m_Marker__markerHeight;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__orient()
{
    return m_Marker__orient;
}
::ecore::EReference_ptr SVGPackage::getMarker__drawing()
{
    return m_Marker__drawing;
}
::ecore::EAttribute_ptr SVGPackage::getText__lengthAdjust()
{
    return m_Text__lengthAdjust;
}
::ecore::EAttribute_ptr SVGPackage::getText__content()
{
    return m_Text__content;
}
::ecore::EAttribute_ptr SVGPackage::getTspan__content()
{
    return m_Tspan__content;
}
::ecore::EReference_ptr SVGPackage::getTref__xlinkHref()
{
    return m_Tref__xlinkHref;
}
::ecore::EReference_ptr SVGPackage::getAttribute__attOwner()
{
    return m_Attribute__attOwner;
}
::ecore::EAttribute_ptr SVGPackage::getScale__sx()
{
    return m_Scale__sx;
}
::ecore::EAttribute_ptr SVGPackage::getScale__sy()
{
    return m_Scale__sy;
}
::ecore::EAttribute_ptr SVGPackage::getTranslate__tx()
{
    return m_Translate__tx;
}
::ecore::EAttribute_ptr SVGPackage::getTranslate__ty()
{
    return m_Translate__ty;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__angle()
{
    return m_Rotate__angle;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__cx()
{
    return m_Rotate__cx;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__cy()
{
    return m_Rotate__cy;
}
::ecore::EAttribute_ptr SVGPackage::getVisibility__visible()
{
    return m_Visibility__visible;
}
::ecore::EAttribute_ptr SVGPackage::getFontWeight__bold()
{
    return m_FontWeight__bold;
}
::ecore::EAttribute_ptr SVGPackage::getFontStyle__italic()
{
    return m_FontStyle__italic;
}
::ecore::EAttribute_ptr SVGPackage::getDimension__width()
{
    return m_Dimension__width;
}
::ecore::EAttribute_ptr SVGPackage::getDimension__height()
{
    return m_Dimension__height;
}
::ecore::EAttribute_ptr SVGPackage::getCoordinates__x()
{
    return m_Coordinates__x;
}
::ecore::EAttribute_ptr SVGPackage::getCoordinates__y()
{
    return m_Coordinates__y;
}
::ecore::EReference_ptr SVGPackage::getReferencedFile__referer()
{
    return m_ReferencedFile__referer;
}
::ecore::EAttribute_ptr SVGPackage::getReferencedFile__name()
{
    return m_ReferencedFile__name;
}
::ecore::EReference_ptr SVGPackage::getSvgFile__tag()
{
    return m_SvgFile__tag;
}
::ecore::EReference_ptr SVGPackage::getSvgFile__elements()
{
    return m_SvgFile__elements;
}

