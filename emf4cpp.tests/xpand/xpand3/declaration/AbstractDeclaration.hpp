// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/AbstractDeclaration.hpp
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

#ifndef XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP
#define XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP

#include <xpand3/declaration_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/SyntaxElement.hpp>

/*PROTECTED REGION ID(AbstractDeclaration_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL AbstractDeclaration : public virtual ::xpand3::SyntaxElement
    {
    public:
        AbstractDeclaration();

        virtual ~AbstractDeclaration();

        virtual void _initialize();

        // Operations

        // Attributes
        ::ecore::EBoolean isIsPrivate () const;
        void setIsPrivate (::ecore::EBoolean _isPrivate);

        // References
        ::xpand3::File_ptr getOwner () const;
        void setOwner (::xpand3::File_ptr _owner);

        const ::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter >& getParams () const;
        ::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter >& getParams ();

        ::xpand3::expression::AbstractExpression_ptr getGuard () const;
        void setGuard (::xpand3::expression::AbstractExpression_ptr _guard);

        /*PROTECTED REGION ID(AbstractDeclaration) START*/
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

        /*PROTECTED REGION ID(AbstractDeclarationImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EBoolean m_isPrivate;

        // References

        ::xpand3::File_ptr m_owner;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter > > m_params;

        ::xpand3::expression::AbstractExpression_ptr m_guard;

    };

}
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP

