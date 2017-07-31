// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ProtectStatement.hpp
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

#ifndef XPAND3_STATEMENT_PROTECTSTATEMENT_HPP
#define XPAND3_STATEMENT_PROTECTSTATEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>
#include <xpand3/statement_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include "StatementPackage.hpp"

/*PROTECTED REGION ID(ProtectStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace statement
    {

    class EXPORT_XPAND3_DLL ProtectStatement : public virtual ::xpand3::statement::AbstractStatementWithBody
    {
    public:
        ProtectStatement();

        virtual ~ProtectStatement();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::ecore::EBoolean isDisable () const;
        virtual void setDisable (::ecore::EBoolean _disable);

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getCommentStart () const;
        virtual void setCommentStart (::xpand3::expression::AbstractExpression_ptr _commentStart);

        virtual ::xpand3::expression::AbstractExpression_ptr getCommentEnd () const;
        virtual void setCommentEnd (::xpand3::expression::AbstractExpression_ptr _commentEnd);

        virtual ::xpand3::expression::AbstractExpression_ptr getId () const;
        virtual void setId (::xpand3::expression::AbstractExpression_ptr _id);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = StatementPackage::PROTECTSTATEMENT;

        /*PROTECTED REGION ID(ProtectStatement) START*/
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

        /*PROTECTED REGION ID(ProtectStatementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EBoolean m_disable;

        // References

        ::xpand3::expression::AbstractExpression_ptr m_commentStart;

        ::xpand3::expression::AbstractExpression_ptr m_commentEnd;

        ::xpand3::expression::AbstractExpression_ptr m_id;

    };

}
 // statement
}// xpand3

#endif // XPAND3_STATEMENT_PROTECTSTATEMENT_HPP

