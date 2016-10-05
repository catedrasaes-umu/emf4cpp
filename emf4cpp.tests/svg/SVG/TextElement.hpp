// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/TextElement.hpp
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

#ifndef SVG_TEXTELEMENT_HPP
#define SVG_TEXTELEMENT_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/GraphicalElement.hpp>

/*PROTECTED REGION ID(TextElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class TextElement: public virtual ::SVG::GraphicalElement
    {
    public:
        TextElement();

        virtual ~TextElement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::PrimitiveTypes::Double getRotate() const;
        void setRotate(::PrimitiveTypes::Double _rotate);

        ::PrimitiveTypes::String getTextLength() const;
        void setTextLength(::PrimitiveTypes::String _textLength);

        ::PrimitiveTypes::String getFontSize() const;
        void setFontSize(::PrimitiveTypes::String _fontSize);

        // References

        /*PROTECTED REGION ID(TextElement) START*/
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

        /*PROTECTED REGION ID(TextElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::Double m_rotate;

        ::PrimitiveTypes::String m_textLength;

        ::PrimitiveTypes::String m_fontSize;

        // References

    };

} // SVG

#endif // SVG_TEXTELEMENT_HPP

