// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/GraphicalElement.hpp
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

#ifndef SVG_GRAPHICALELEMENT_HPP
#define SVG_GRAPHICALELEMENT_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Element.hpp>

/*PROTECTED REGION ID(GraphicalElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class GraphicalElement: public virtual ::SVG::Element
    {
    public:
        GraphicalElement();

        virtual ~GraphicalElement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::PrimitiveTypes::String getStroke() const;
        void setStroke(::PrimitiveTypes::String _stroke);

        // References

        /*PROTECTED REGION ID(GraphicalElement) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();
        virtual void _inverseAdd(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(GraphicalElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::String m_stroke;

        // References

    };

} // SVG

#endif // SVG_GRAPHICALELEMENT_HPP

