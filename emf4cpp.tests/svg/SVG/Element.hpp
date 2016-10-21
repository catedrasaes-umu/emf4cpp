// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Element.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <SVG/dllSVG.hpp>

#include <PrimitiveTypes_forward.hpp>

#include <ecore/EObject.hpp>

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
    ::PrimitiveTypes::String getFill () const;
    void setFill (::PrimitiveTypes::String _fill);

    ::PrimitiveTypes::String getViewBox () const;
    void setViewBox (::PrimitiveTypes::String _viewBox);

    ::PrimitiveTypes::String getIdentifier () const;
    void setIdentifier (::PrimitiveTypes::String _identifier);

    // References
    ::ecorecpp::mapping::EList< ::SVG::SvgFile >& getOwner ();

    ::ecorecpp::mapping::EList< ::SVG::Use >& getTarget ();

    ::ecorecpp::mapping::EList< ::SVG::Attribute >& getAttribute ();

    ::SVG::Coordinates_ptr getPosition ();
    void setPosition (::SVG::Coordinates_ptr _position);

    ::SVG::Dimension_ptr getSize ();
    void setSize (::SVG::Dimension_ptr _size);

    ::SVG::Svg_ptr getRoot ();
    void setRoot (::SVG::Svg_ptr _root);
    ::SVG::Svg_ptr basicgetRoot ();
    void basicsetRoot (::SVG::Svg_ptr _root);

    ::SVG::GroupingElement_ptr getGroup ();
    void setGroup (::SVG::GroupingElement_ptr _group);
    ::SVG::GroupingElement_ptr basicgetGroup ();
    void basicsetGroup (::SVG::GroupingElement_ptr _group);

    ::SVG::Marker_ptr getDrawsMarker ();
    void setDrawsMarker (::SVG::Marker_ptr _drawsMarker);
    ::SVG::Marker_ptr basicgetDrawsMarker ();
    void basicsetDrawsMarker (::SVG::Marker_ptr _drawsMarker);

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
    // Attributes

    ::PrimitiveTypes::String m_fill;

    ::PrimitiveTypes::String m_viewBox;

    ::PrimitiveTypes::String m_identifier;

    // References

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::SVG::SvgFile > > m_owner;

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::SVG::Use > > m_target;

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::SVG::Attribute > > m_attribute;

    ::SVG::Coordinates_ptr m_position;

    ::SVG::Dimension_ptr m_size;

    ::SVG::Svg_ptr m_root;

    ::SVG::GroupingElement_ptr m_group;

    ::SVG::Marker_ptr m_drawsMarker;

};

}
 // SVG

#endif // SVG_ELEMENT_HPP

