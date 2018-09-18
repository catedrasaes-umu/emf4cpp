// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ExpandStatement.hpp
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

#ifndef XPAND3_STATEMENT_EXPANDSTATEMENT_HPP
#define XPAND3_STATEMENT_EXPANDSTATEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>
#include <xpand3/statement_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include "StatementPackage.hpp"

/*PROTECTED REGION ID(ExpandStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace statement
    {

    class EXPORT_XPAND3_DLL ExpandStatement : public virtual ::xpand3::statement::AbstractStatement
    {
    public:
        ExpandStatement();

        virtual ~ExpandStatement();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::ecore::EBoolean isForeach () const;
        virtual void setForeach (::ecore::EBoolean _foreach);

        // References
        virtual const ::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression_ptr >& getParameters () const;
        virtual ::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression_ptr >& getParameters ();

        virtual ::xpand3::expression::AbstractExpression_ptr getSeparator () const;
        virtual void setSeparator (::xpand3::expression::AbstractExpression_ptr _separator);

        virtual ::xpand3::expression::AbstractExpression_ptr getTarget () const;
        virtual void setTarget (::xpand3::expression::AbstractExpression_ptr _target);

        virtual ::xpand3::Identifier_ptr getDefinition () const;
        virtual void setDefinition (::xpand3::Identifier_ptr _definition);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = StatementPackage::EXPANDSTATEMENT;

        /*PROTECTED REGION ID(ExpandStatement) START*/
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

        /*PROTECTED REGION ID(ExpandStatementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        ExpandStatement_ptr _this()
        {   return ExpandStatement_ptr(this);}

        // Attributes

        ::ecore::EBoolean m_foreach;

        // References

        std::shared_ptr<::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression_ptr >> m_parameters;

        ::xpand3::expression::AbstractExpression_ptr m_separator;

        ::xpand3::expression::AbstractExpression_ptr m_target;

        ::xpand3::Identifier_ptr m_definition;

    };

}
 // statement
}// xpand3

#endif // XPAND3_STATEMENT_EXPANDSTATEMENT_HPP

