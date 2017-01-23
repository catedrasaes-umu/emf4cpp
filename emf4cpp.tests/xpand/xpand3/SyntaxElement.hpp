// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/SyntaxElement.hpp
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

#ifndef XPAND3_SYNTAXELEMENT_HPP
#define XPAND3_SYNTAXELEMENT_HPP

#include <xpand3_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(SyntaxElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{

class EXPORT_XPAND3_DLL SyntaxElement : public virtual ::ecore::EObject

{
public:
    SyntaxElement();

    virtual ~SyntaxElement();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getLine () const;
    virtual void setLine (::ecore::EInt _line);

    virtual ::ecore::EInt getStart () const;
    virtual void setStart (::ecore::EInt _start);

    virtual ::ecore::EInt getEnd () const;
    virtual void setEnd (::ecore::EInt _end);

    virtual ::ecore::EString const& getFileName () const;
    virtual void setFileName (::ecore::EString const& _fileName);

    // References

    /*PROTECTED REGION ID(SyntaxElement) START*/
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

    /*PROTECTED REGION ID(SyntaxElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EInt m_line;

    ::ecore::EInt m_start;

    ::ecore::EInt m_end;

    ::ecore::EString m_fileName;

    // References

};

}
 // xpand3

#endif // XPAND3_SYNTAXELEMENT_HPP

