// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmFactory.hpp
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

#ifndef _IDLMMFACTORY_HPP
#define _IDLMMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <idlmm.hpp>

#include <idlmm/dllIdlmm.hpp>

namespace idlmm
{

    class EXPORT_IDLMM_DLL IdlmmFactory : public virtual ::ecore::EFactory
    {
    public:

        static IdlmmFactory_ptr _instance();

        virtual Container_ptr createContainer();
        virtual Contained_ptr createContained();
        virtual InterfaceDef_ptr createInterfaceDef();
        virtual ModuleDef_ptr createModuleDef();
        virtual IDLType_ptr createIDLType();
        virtual OperationDef_ptr createOperationDef();
        virtual AttributeDef_ptr createAttributeDef();
        virtual ConstantDef_ptr createConstantDef();
        virtual Typed_ptr createTyped();
        virtual ParameterDef_ptr createParameterDef();
        virtual PrimitiveDef_ptr createPrimitiveDef();
        virtual ExceptionDef_ptr createExceptionDef();
        virtual Field_ptr createField();
        virtual FixedDef_ptr createFixedDef();
        virtual WstringDef_ptr createWstringDef();
        virtual StringDef_ptr createStringDef();
        virtual AliasDef_ptr createAliasDef();
        virtual ArrayDef_ptr createArrayDef();
        virtual SequenceDef_ptr createSequenceDef();
        virtual UnionField_ptr createUnionField();
        virtual TypedefDef_ptr createTypedefDef();
        virtual UnionDef_ptr createUnionDef();
        virtual EnumDef_ptr createEnumDef();
        virtual StructDef_ptr createStructDef();
        virtual TranslationUnit_ptr createTranslationUnit();
        virtual Include_ptr createInclude();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< IdlmmFactory > s_instance;

        IdlmmFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline T* create()
    {
        return (T*) nullptr;
    }

    template< > inline Container_ptr create< Container >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createContainer();
    }
    template< > inline Contained_ptr create< Contained >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createContained();
    }
    template< > inline InterfaceDef_ptr create< InterfaceDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createInterfaceDef();
    }
    template< > inline ModuleDef_ptr create< ModuleDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createModuleDef();
    }
    template< > inline IDLType_ptr create< IDLType >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createIDLType();
    }
    template< > inline OperationDef_ptr create< OperationDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createOperationDef();
    }
    template< > inline AttributeDef_ptr create< AttributeDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createAttributeDef();
    }
    template< > inline ConstantDef_ptr create< ConstantDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createConstantDef();
    }
    template< > inline Typed_ptr create< Typed >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createTyped();
    }
    template< > inline ParameterDef_ptr create< ParameterDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createParameterDef();
    }
    template< > inline PrimitiveDef_ptr create< PrimitiveDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createPrimitiveDef();
    }
    template< > inline ExceptionDef_ptr create< ExceptionDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createExceptionDef();
    }
    template< > inline Field_ptr create< Field >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createField();
    }
    template< > inline FixedDef_ptr create< FixedDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createFixedDef();
    }
    template< > inline WstringDef_ptr create< WstringDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createWstringDef();
    }
    template< > inline StringDef_ptr create< StringDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createStringDef();
    }
    template< > inline AliasDef_ptr create< AliasDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createAliasDef();
    }
    template< > inline ArrayDef_ptr create< ArrayDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createArrayDef();
    }
    template< > inline SequenceDef_ptr create< SequenceDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createSequenceDef();
    }
    template< > inline UnionField_ptr create< UnionField >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createUnionField();
    }
    template< > inline TypedefDef_ptr create< TypedefDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createTypedefDef();
    }
    template< > inline UnionDef_ptr create< UnionDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createUnionDef();
    }
    template< > inline EnumDef_ptr create< EnumDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createEnumDef();
    }
    template< > inline StructDef_ptr create< StructDef >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createStructDef();
    }
    template< > inline TranslationUnit_ptr create< TranslationUnit >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createTranslationUnit();
    }
    template< > inline Include_ptr create< Include >()
    {
        auto eFactory = IdlmmPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< IdlmmFactory* >(eFactory);
        return packageFactory->createInclude();
    }

} // idlmm

#endif // _IDLMMFACTORY_HPP

