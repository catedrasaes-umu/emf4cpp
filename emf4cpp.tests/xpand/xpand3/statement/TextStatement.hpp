// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/TextStatement.hpp
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

#ifndef XPAND3_STATEMENT_TEXTSTATEMENT_HPP
#define XPAND3_STATEMENT_TEXTSTATEMENT_HPP

#include <xpand3/statement_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>

#include <ecore_forward.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

/*PROTECTED REGION ID(TextStatement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace statement
    {

    class EXPORT_XPAND3_DLL TextStatement : public virtual ::xpand3::statement::AbstractStatement
    {
    public:
        TextStatement();

        virtual ~TextStatement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::ecore::EString const& getValue () const;
        void setValue (::ecore::EString const& _value);

        ::ecore::EBoolean isDeleteLine () const;
        void setDeleteLine (::ecore::EBoolean _deleteLine);

        // References

        /*PROTECTED REGION ID(TextStatement) START*/
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

        /*PROTECTED REGION ID(TextStatementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EString m_value;

        ::ecore::EBoolean m_deleteLine;

        // References

    };

}
 // statement
}// xpand3

#endif // XPAND3_STATEMENT_TEXTSTATEMENT_HPP

