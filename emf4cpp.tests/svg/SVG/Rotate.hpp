// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Rotate.hpp
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

#ifndef SVG_ROTATE_HPP
#define SVG_ROTATE_HPP

#include <SVG_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Transform.hpp>

/*PROTECTED REGION ID(Rotate_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

    class Rotate: public virtual ::SVG::Transform
    {
    public:
        Rotate();

        virtual ~Rotate();

        virtual void _initialize();

        // Operations

        // Attributes
        ::PrimitiveTypes::Double getAngle() const;
        void setAngle(::PrimitiveTypes::Double _angle);

        ::PrimitiveTypes::Double getCx() const;
        void setCx(::PrimitiveTypes::Double _cx);

        ::PrimitiveTypes::Double getCy() const;
        void setCy(::PrimitiveTypes::Double _cy);

        // References

        /*PROTECTED REGION ID(Rotate) START*/
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

        /*PROTECTED REGION ID(RotateImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::PrimitiveTypes::Double m_angle;

        ::PrimitiveTypes::Double m_cx;

        ::PrimitiveTypes::Double m_cy;

        // References

    };

} // SVG

#endif // SVG_ROTATE_HPP

