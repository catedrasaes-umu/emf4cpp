// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Element.hpp
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

#ifndef SVG_ELEMENT_HPP
#define SVG_ELEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Element_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Element : public virtual ::ecore::EObject
{
public:
    Element();

    virtual ~Element();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getFill () const;
    virtual void setFill (::PrimitiveTypes::String _fill);

    virtual ::PrimitiveTypes::String getViewBox () const;
    virtual void setViewBox (::PrimitiveTypes::String _viewBox);

    virtual ::PrimitiveTypes::String getIdentifier () const;
    virtual void setIdentifier (::PrimitiveTypes::String _identifier);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& getOwner () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& getOwner ();

    virtual const ::ecorecpp::mapping::EList< ::SVG::Use_ptr >& getTarget () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Use_ptr >& getTarget ();

    virtual const ::ecorecpp::mapping::EList< ::SVG::Attribute_ptr >& getAttribute () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Attribute_ptr >& getAttribute ();

    virtual ::SVG::Coordinates_ptr getPosition () const;
    virtual void setPosition (::SVG::Coordinates_ptr _position);

    virtual ::SVG::Dimension_ptr getSize () const;
    virtual void setSize (::SVG::Dimension_ptr _size);

    virtual ::SVG::Svg_ptr getRoot () const;
    virtual void setRoot (::SVG::Svg_ptr _root);
    virtual ::SVG::Svg_ptr basicgetRoot ();
    virtual void basicsetRoot (::SVG::Svg_ptr _root);

    virtual ::SVG::GroupingElement_ptr getGroup () const;
    virtual void setGroup (::SVG::GroupingElement_ptr _group);
    virtual ::SVG::GroupingElement_ptr basicgetGroup ();
    virtual void basicsetGroup (::SVG::GroupingElement_ptr _group);

    virtual ::SVG::Marker_ptr getDrawsMarker () const;
    virtual void setDrawsMarker (::SVG::Marker_ptr _drawsMarker);
    virtual ::SVG::Marker_ptr basicgetDrawsMarker ();
    virtual void basicsetDrawsMarker (::SVG::Marker_ptr _drawsMarker);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::ELEMENT;

    /*PROTECTED REGION ID(Element) START*/
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

    /*PROTECTED REGION ID(ElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Element_ptr _this()
    {   return Element_ptr(this);}

    // Attributes

    ::PrimitiveTypes::String m_fill;

    ::PrimitiveTypes::String m_viewBox;

    ::PrimitiveTypes::String m_identifier;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >> m_owner;

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Use_ptr >> m_target;

    std::shared_ptr<::ecorecpp::mapping::EList< ::SVG::Attribute_ptr >> m_attribute;

    ::SVG::Coordinates_ptr m_position;

    ::SVG::Dimension_ptr m_size;

    ::SVG::Svg_ptr m_root;

    ::SVG::GroupingElement_ptr m_group;

    ::SVG::Marker_ptr m_drawsMarker;

};

}
 // SVG

#endif // SVG_ELEMENT_HPP

