// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationPackage.hpp
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

#ifndef _XPAND3_DECLARATIONPACKAGE_HPP
#define _XPAND3_DECLARATIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3/declaration_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/Xpand3Package.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL DeclarationPackage : public virtual ::ecore::EPackage
    {
    public:

        static DeclarationPackage_ptr _instance();
        static DeclarationPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int ABSTRACTASPECT = 0;

        static const int ABSTRACTDECLARATION = 1;

        static const int ABSTRACTNAMEDDECLARATION = 2;

        static const int CHECK = 3;

        static const int CREATEEXTENSION = 4;

        static const int DEFINITION = 5;

        static const int DEFINITIONASPECT = 6;

        static const int EXTENSION = 7;

        static const int EXTENSIONASPECT = 8;

        static const int JAVAEXTENSION = 9;

        static const int ABSTRACTDECLARATION__OWNER = 66;

        static const int ABSTRACTDECLARATION__PARAMS = 67;

        static const int ABSTRACTDECLARATION__ISPRIVATE = 68;

        static const int ABSTRACTDECLARATION__GUARD = 69;

        static const int ABSTRACTNAMEDDECLARATION__NAME = 70;

        static const int DEFINITION__BODY = 71;

        static const int EXTENSION__CACHED = 72;

        static const int EXTENSION__BODY = 73;

        static const int EXTENSION__RETURNTYPE = 74;

        static const int ABSTRACTASPECT__POINTCUT = 75;

        static const int ABSTRACTASPECT__WILDPARAMS = 76;

        static const int EXTENSIONASPECT__EXPRESSION = 77;

        static const int DEFINITIONASPECT__BODY = 78;

        static const int CHECK__ERRORSEVERITY = 79;

        static const int CHECK__MSG = 80;

        static const int CHECK__CONSTRAINT = 81;

        static const int CHECK__FEATURE = 82;

        static const int CREATEEXTENSION__TOBECREATED = 83;

        static const int JAVAEXTENSION__JAVATYPE = 84;

        static const int JAVAEXTENSION__JAVAMETHOD = 85;

        static const int JAVAEXTENSION__JAVAPARAMTYPES = 86;

        // IDs for classifiers for class AbstractAspect 

        static const int ABSTRACTASPECT__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int ABSTRACTASPECT__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int ABSTRACTASPECT__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int ABSTRACTASPECT__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int ABSTRACTASPECT__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int ABSTRACTASPECT__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int ABSTRACTASPECT__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int ABSTRACTASPECT__GUARD = ABSTRACTDECLARATION__GUARD;

        // IDs for classifiers for class AbstractDeclaration 

        static const int ABSTRACTDECLARATION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int ABSTRACTDECLARATION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int ABSTRACTDECLARATION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int ABSTRACTDECLARATION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        // IDs for classifiers for class AbstractNamedDeclaration 

        static const int ABSTRACTNAMEDDECLARATION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int ABSTRACTNAMEDDECLARATION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int ABSTRACTNAMEDDECLARATION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int ABSTRACTNAMEDDECLARATION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int ABSTRACTNAMEDDECLARATION__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int ABSTRACTNAMEDDECLARATION__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int ABSTRACTNAMEDDECLARATION__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int ABSTRACTNAMEDDECLARATION__GUARD = ABSTRACTDECLARATION__GUARD;

        // IDs for classifiers for class Check 

        static const int CHECK__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CHECK__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CHECK__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CHECK__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int CHECK__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int CHECK__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int CHECK__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int CHECK__GUARD = ABSTRACTDECLARATION__GUARD;

        // IDs for classifiers for class CreateExtension 

        static const int CREATEEXTENSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int CREATEEXTENSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int CREATEEXTENSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int CREATEEXTENSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int CREATEEXTENSION__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int CREATEEXTENSION__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int CREATEEXTENSION__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int CREATEEXTENSION__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int CREATEEXTENSION__NAME = ABSTRACTNAMEDDECLARATION__NAME;

        static const int CREATEEXTENSION__CACHED = EXTENSION__CACHED;

        static const int CREATEEXTENSION__BODY = EXTENSION__BODY;

        static const int CREATEEXTENSION__RETURNTYPE = EXTENSION__RETURNTYPE;

        // IDs for classifiers for class Definition 

        static const int DEFINITION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int DEFINITION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int DEFINITION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int DEFINITION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int DEFINITION__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int DEFINITION__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int DEFINITION__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int DEFINITION__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int DEFINITION__NAME = ABSTRACTNAMEDDECLARATION__NAME;

        // IDs for classifiers for class DefinitionAspect 

        static const int DEFINITIONASPECT__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int DEFINITIONASPECT__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int DEFINITIONASPECT__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int DEFINITIONASPECT__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int DEFINITIONASPECT__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int DEFINITIONASPECT__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int DEFINITIONASPECT__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int DEFINITIONASPECT__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int DEFINITIONASPECT__POINTCUT = ABSTRACTASPECT__POINTCUT;

        static const int DEFINITIONASPECT__WILDPARAMS = ABSTRACTASPECT__WILDPARAMS;

        // IDs for classifiers for class Extension 

        static const int EXTENSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int EXTENSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int EXTENSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int EXTENSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int EXTENSION__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int EXTENSION__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int EXTENSION__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int EXTENSION__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int EXTENSION__NAME = ABSTRACTNAMEDDECLARATION__NAME;

        // IDs for classifiers for class ExtensionAspect 

        static const int EXTENSIONASPECT__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int EXTENSIONASPECT__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int EXTENSIONASPECT__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int EXTENSIONASPECT__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int EXTENSIONASPECT__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int EXTENSIONASPECT__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int EXTENSIONASPECT__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int EXTENSIONASPECT__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int EXTENSIONASPECT__POINTCUT = ABSTRACTASPECT__POINTCUT;

        static const int EXTENSIONASPECT__WILDPARAMS = ABSTRACTASPECT__WILDPARAMS;

        // IDs for classifiers for class JavaExtension 

        static const int JAVAEXTENSION__LINE = ::xpand3::Xpand3Package::SYNTAXELEMENT__LINE;

        static const int JAVAEXTENSION__START = ::xpand3::Xpand3Package::SYNTAXELEMENT__START;

        static const int JAVAEXTENSION__END = ::xpand3::Xpand3Package::SYNTAXELEMENT__END;

        static const int JAVAEXTENSION__FILENAME = ::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME;

        static const int JAVAEXTENSION__OWNER = ABSTRACTDECLARATION__OWNER;

        static const int JAVAEXTENSION__PARAMS = ABSTRACTDECLARATION__PARAMS;

        static const int JAVAEXTENSION__ISPRIVATE = ABSTRACTDECLARATION__ISPRIVATE;

        static const int JAVAEXTENSION__GUARD = ABSTRACTDECLARATION__GUARD;

        static const int JAVAEXTENSION__NAME = ABSTRACTNAMEDDECLARATION__NAME;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractDeclaration();

        virtual ::ecore::EClass_ptr getAbstractNamedDeclaration();

        virtual ::ecore::EClass_ptr getDefinition();

        virtual ::ecore::EClass_ptr getExtension();

        virtual ::ecore::EClass_ptr getAbstractAspect();

        virtual ::ecore::EClass_ptr getExtensionAspect();

        virtual ::ecore::EClass_ptr getDefinitionAspect();

        virtual ::ecore::EClass_ptr getCheck();

        virtual ::ecore::EClass_ptr getCreateExtension();

        virtual ::ecore::EClass_ptr getJavaExtension();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getSyntaxElement__line();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__start();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__end();

        virtual ::ecore::EAttribute_ptr getSyntaxElement__fileName();

        virtual ::ecore::EReference_ptr getAbstractDeclaration__owner();

        virtual ::ecore::EReference_ptr getAbstractDeclaration__params();

        virtual ::ecore::EAttribute_ptr getAbstractDeclaration__isPrivate();

        virtual ::ecore::EReference_ptr getAbstractDeclaration__guard();

        virtual ::ecore::EReference_ptr getAbstractNamedDeclaration__name();

        virtual ::ecore::EReference_ptr getDefinition__body();

        virtual ::ecore::EAttribute_ptr getExtension__cached();

        virtual ::ecore::EReference_ptr getExtension__body();

        virtual ::ecore::EReference_ptr getExtension__returnType();

        virtual ::ecore::EReference_ptr getAbstractAspect__pointcut();

        virtual ::ecore::EAttribute_ptr getAbstractAspect__wildparams();

        virtual ::ecore::EReference_ptr getExtensionAspect__expression();

        virtual ::ecore::EReference_ptr getDefinitionAspect__body();

        virtual ::ecore::EAttribute_ptr getCheck__errorSeverity();

        virtual ::ecore::EReference_ptr getCheck__msg();

        virtual ::ecore::EReference_ptr getCheck__constraint();

        virtual ::ecore::EAttribute_ptr getCheck__feature();

        virtual ::ecore::EReference_ptr getCreateExtension__toBeCreated();

        virtual ::ecore::EReference_ptr getJavaExtension__javaType();

        virtual ::ecore::EReference_ptr getJavaExtension__javaMethod();

        virtual ::ecore::EReference_ptr getJavaExtension__javaParamTypes();

    protected:

        static boost::intrusive_ptr< DeclarationPackage > s_instance;

        DeclarationPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AbstractDeclarationEClass;

        ::ecore::EClass_ptr m_AbstractNamedDeclarationEClass;

        ::ecore::EClass_ptr m_DefinitionEClass;

        ::ecore::EClass_ptr m_ExtensionEClass;

        ::ecore::EClass_ptr m_AbstractAspectEClass;

        ::ecore::EClass_ptr m_ExtensionAspectEClass;

        ::ecore::EClass_ptr m_DefinitionAspectEClass;

        ::ecore::EClass_ptr m_CheckEClass;

        ::ecore::EClass_ptr m_CreateExtensionEClass;

        ::ecore::EClass_ptr m_JavaExtensionEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_SyntaxElement__line;

        ::ecore::EAttribute_ptr m_SyntaxElement__start;

        ::ecore::EAttribute_ptr m_SyntaxElement__end;

        ::ecore::EAttribute_ptr m_SyntaxElement__fileName;

        ::ecore::EReference_ptr m_AbstractDeclaration__owner;

        ::ecore::EReference_ptr m_AbstractDeclaration__params;

        ::ecore::EAttribute_ptr m_AbstractDeclaration__isPrivate;

        ::ecore::EReference_ptr m_AbstractDeclaration__guard;

        ::ecore::EReference_ptr m_AbstractNamedDeclaration__name;

        ::ecore::EReference_ptr m_Definition__body;

        ::ecore::EAttribute_ptr m_Extension__cached;

        ::ecore::EReference_ptr m_Extension__body;

        ::ecore::EReference_ptr m_Extension__returnType;

        ::ecore::EReference_ptr m_AbstractAspect__pointcut;

        ::ecore::EAttribute_ptr m_AbstractAspect__wildparams;

        ::ecore::EReference_ptr m_ExtensionAspect__expression;

        ::ecore::EReference_ptr m_DefinitionAspect__body;

        ::ecore::EAttribute_ptr m_Check__errorSeverity;

        ::ecore::EReference_ptr m_Check__msg;

        ::ecore::EReference_ptr m_Check__constraint;

        ::ecore::EAttribute_ptr m_Check__feature;

        ::ecore::EReference_ptr m_CreateExtension__toBeCreated;

        ::ecore::EReference_ptr m_JavaExtension__javaType;

        ::ecore::EReference_ptr m_JavaExtension__javaMethod;

        ::ecore::EReference_ptr m_JavaExtension__javaParamTypes;

    };

}
 // declaration
}// xpand3

#endif // _XPAND3_DECLARATIONPACKAGE_HPP

