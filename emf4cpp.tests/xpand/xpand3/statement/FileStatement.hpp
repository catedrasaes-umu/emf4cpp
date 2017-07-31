// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/FileStatement.hpp
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

#ifndef XPAND3_STATEMENT_FILESTATEMENT_HPP
#define XPAND3_STATEMENT_FILESTATEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>
#include <xpand3/statement_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include "StatementPackage.hpp"

/*PROTECTED REGION ID(FileStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace statement
    {

    class EXPORT_XPAND3_DLL FileStatement : public virtual ::xpand3::statement::AbstractStatementWithBody
    {
    public:
        FileStatement();

        virtual ~FileStatement();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::ecore::EBoolean isOnce () const;
        virtual void setOnce (::ecore::EBoolean _once);

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getFileNameExpression () const;
        virtual void setFileNameExpression (::xpand3::expression::AbstractExpression_ptr _fileNameExpression);

        virtual ::xpand3::Identifier_ptr getOutletNameIdentifier () const;
        virtual void setOutletNameIdentifier (::xpand3::Identifier_ptr _outletNameIdentifier);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = StatementPackage::FILESTATEMENT;

        /*PROTECTED REGION ID(FileStatement) START*/
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

        /*PROTECTED REGION ID(FileStatementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EBoolean m_once;

        // References

        ::xpand3::expression::AbstractExpression_ptr m_fileNameExpression;

        ::xpand3::Identifier_ptr m_outletNameIdentifier;

    };

}
 // statement
}// xpand3

#endif // XPAND3_STATEMENT_FILESTATEMENT_HPP

