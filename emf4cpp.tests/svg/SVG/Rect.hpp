// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Rect.hpp
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

#ifndef SVG_RECT_HPP
#define SVG_RECT_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

/*PROTECTED REGION ID(Rect_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class Rect: public virtual ::SVG::Shape
    {
    public:
        Rect();

        virtual ~Rect();

        virtual void _initialize();

        // Operations

        // Attributes
        ::PrimitiveTypes::Double getRx() const;
        void setRx(::PrimitiveTypes::Double _rx);

        ::PrimitiveTypes::Double getRy() const;
        void setRy(::PrimitiveTypes::Double _ry);

        // References

        /*PROTECTED REGION ID(Rect) START*/
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

        /*PROTECTED REGION ID(RectImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::Double m_rx;

        ::PrimitiveTypes::Double m_ry;

        // References

    };

} // SVG

#endif // SVG_RECT_HPP

