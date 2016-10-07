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

        static std::unique_ptr< SVGFactory > s_instance;

        SVGFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline T* create()
    {
        return (T*) nullptr;
    }

    template< > inline Element_ptr create< Element >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createElement();
    }
    template< > inline StructuralElement_ptr create< StructuralElement >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createStructuralElement();
    }
    template< > inline Image_ptr create< Image >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createImage();
    }
    template< > inline Svg_ptr create< Svg >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createSvg();
    }
    template< > inline GroupingElement_ptr create< GroupingElement >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createGroupingElement();
    }
    template< > inline G_ptr create< G >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createG();
    }
    template< > inline Defs_ptr create< Defs >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createDefs();
    }
    template< > inline Symbol_ptr create< Symbol >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createSymbol();
    }
    template< > inline Use_ptr create< Use >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createUse();
    }
    template< > inline GraphicalElement_ptr create< GraphicalElement >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createGraphicalElement();
    }
    template< > inline Shape_ptr create< Shape >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createShape();
    }
    template< > inline TextElement_ptr create< TextElement >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createTextElement();
    }
    template< > inline Rect_ptr create< Rect >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createRect();
    }
    template< > inline Circle_ptr create< Circle >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createCircle();
    }
    template< > inline Ellipse_ptr create< Ellipse >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createEllipse();
    }
    template< > inline Line_ptr create< Line >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createLine();
    }
    template< > inline Polyline_ptr create< Polyline >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createPolyline();
    }
    template< > inline Polygon_ptr create< Polygon >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createPolygon();
    }
    template< > inline Path_ptr create< Path >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createPath();
    }
    template< > inline Point_ptr create< Point >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createPoint();
    }
    template< > inline Marker_ptr create< Marker >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createMarker();
    }
    template< > inline Text_ptr create< Text >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createText();
    }
    template< > inline Tspan_ptr create< Tspan >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createTspan();
    }
    template< > inline Tref_ptr create< Tref >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createTref();
    }
    template< > inline Attribute_ptr create< Attribute >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createAttribute();
    }
    template< > inline Transform_ptr create< Transform >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createTransform();
    }
    template< > inline Scale_ptr create< Scale >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createScale();
    }
    template< > inline Translate_ptr create< Translate >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createTranslate();
    }
    template< > inline Rotate_ptr create< Rotate >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createRotate();
    }
    template< > inline Visibility_ptr create< Visibility >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createVisibility();
    }
    template< > inline FontWeight_ptr create< FontWeight >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createFontWeight();
    }
    template< > inline FontStyle_ptr create< FontStyle >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createFontStyle();
    }
    template< > inline Dimension_ptr create< Dimension >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createDimension();
    }
    template< > inline Coordinates_ptr create< Coordinates >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createCoordinates();
    }
    template< > inline RelativeCoord_ptr create< RelativeCoord >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createRelativeCoord();
    }
    template< > inline AbsoluteCoord_ptr create< AbsoluteCoord >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createAbsoluteCoord();
    }
    template< > inline ReferencedFile_ptr create< ReferencedFile >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createReferencedFile();
    }
    template< > inline SvgFile_ptr create< SvgFile >()
    {
        auto eFactory = SVGPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< SVGFactory* >(eFactory);
        return packageFactory->createSvgFile();
    }

} // SVG

#endif // _SVGFACTORY_HPP

