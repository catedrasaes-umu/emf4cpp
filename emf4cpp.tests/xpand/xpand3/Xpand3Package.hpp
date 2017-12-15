// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/Xpand3Package.hpp
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

#ifndef _XPAND3PACKAGE_HPP
#define _XPAND3PACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{

class EXPORT_XPAND3_DLL Xpand3Package : public virtual ::ecore::EPackage
{
public:

    static Xpand3Package_ptr _instance();
    static Xpand3Package_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int DECLAREDPARAMETER = 0;

    static const int FILE = 1;

    static const int IDENTIFIER = 2;

    static const int IMPORTSTATEMENT = 3;

    static const int SYNTAXELEMENT = 4;

    static const int SYNTAXELEMENT__LINE = 0;

    static const int SYNTAXELEMENT__START = 1;

    static const int SYNTAXELEMENT__END = 2;

    static const int SYNTAXELEMENT__FILENAME = 3;

    static const int FILE__IMPORTS = 4;

    static const int FILE__DECLARATIONS = 5;

    static const int IMPORTSTATEMENT__IMPORTEDID = 6;

    static const int IMPORTSTATEMENT__EXPORTED = 7;

    static const int IDENTIFIER__VALUE = 8;

    static const int DECLAREDPARAMETER__NAME = 9;

    static const int DECLAREDPARAMETER__TYPE = 10;

    // IDs for classifiers for class DeclaredParameter 

    static const int DECLAREDPARAMETER__LINE = SYNTAXELEMENT__LINE;

    static const int DECLAREDPARAMETER__START = SYNTAXELEMENT__START;

    static const int DECLAREDPARAMETER__END = SYNTAXELEMENT__END;

    static const int DECLAREDPARAMETER__FILENAME = SYNTAXELEMENT__FILENAME;

    // IDs for classifiers for class File 

    static const int FILE__LINE = SYNTAXELEMENT__LINE;

    static const int FILE__START = SYNTAXELEMENT__START;

    static const int FILE__END = SYNTAXELEMENT__END;

    static const int FILE__FILENAME = SYNTAXELEMENT__FILENAME;

    // IDs for classifiers for class Identifier 

    static const int IDENTIFIER__LINE = SYNTAXELEMENT__LINE;

    static const int IDENTIFIER__START = SYNTAXELEMENT__START;

    static const int IDENTIFIER__END = SYNTAXELEMENT__END;

    static const int IDENTIFIER__FILENAME = SYNTAXELEMENT__FILENAME;

    // IDs for classifiers for class ImportStatement 

    static const int IMPORTSTATEMENT__LINE = SYNTAXELEMENT__LINE;

    static const int IMPORTSTATEMENT__START = SYNTAXELEMENT__START;

    static const int IMPORTSTATEMENT__END = SYNTAXELEMENT__END;

    static const int IMPORTSTATEMENT__FILENAME = SYNTAXELEMENT__FILENAME;

    // IDs for classifiers for class SyntaxElement 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getSyntaxElement();

    virtual ::ecore::EClass_ptr getFile();

    virtual ::ecore::EClass_ptr getImportStatement();

    virtual ::ecore::EClass_ptr getIdentifier();

    virtual ::ecore::EClass_ptr getDeclaredParameter();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getSyntaxElement__line();

    virtual ::ecore::EAttribute_ptr getSyntaxElement__start();

    virtual ::ecore::EAttribute_ptr getSyntaxElement__end();

    virtual ::ecore::EAttribute_ptr getSyntaxElement__fileName();

    virtual ::ecore::EReference_ptr getFile__imports();

    virtual ::ecore::EReference_ptr getFile__declarations();

    virtual ::ecore::EReference_ptr getImportStatement__importedId();

    virtual ::ecore::EAttribute_ptr getImportStatement__exported();

    virtual ::ecore::EAttribute_ptr getIdentifier__value();

    virtual ::ecore::EReference_ptr getDeclaredParameter__name();

    virtual ::ecore::EReference_ptr getDeclaredParameter__type();

protected:

    static boost::intrusive_ptr< Xpand3Package > s_instance;

    Xpand3Package();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_SyntaxElementEClass;

    ::ecore::EClass_ptr m_FileEClass;

    ::ecore::EClass_ptr m_ImportStatementEClass;

    ::ecore::EClass_ptr m_IdentifierEClass;

    ::ecore::EClass_ptr m_DeclaredParameterEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_SyntaxElement__line;

    ::ecore::EAttribute_ptr m_SyntaxElement__start;

    ::ecore::EAttribute_ptr m_SyntaxElement__end;

    ::ecore::EAttribute_ptr m_SyntaxElement__fileName;

    ::ecore::EReference_ptr m_File__imports;

    ::ecore::EReference_ptr m_File__declarations;

    ::ecore::EReference_ptr m_ImportStatement__importedId;

    ::ecore::EAttribute_ptr m_ImportStatement__exported;

    ::ecore::EAttribute_ptr m_Identifier__value;

    ::ecore::EReference_ptr m_DeclaredParameter__name;

    ::ecore::EReference_ptr m_DeclaredParameter__type;

};

}
 // xpand3

#endif // _XPAND3PACKAGE_HPP

