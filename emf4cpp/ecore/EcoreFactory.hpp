// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcoreFactory.hpp
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

#ifndef _ECOREFACTORY_HPP
#define _ECOREFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <ecore.hpp>

#include <ecore/dllEcore.hpp>

namespace ecore
{

    class EXPORT_ECORE_DLL EcoreFactory : public virtual ::ecore::EFactory
    {
    public:

        static EcoreFactory_ptr _instance();

        virtual EAttribute_ptr createEAttribute();
        virtual EAnnotation_ptr createEAnnotation();
        virtual EClass_ptr createEClass();
        virtual EClassifier_ptr createEClassifier();
        virtual EDataType_ptr createEDataType();
        virtual EEnum_ptr createEEnum();
        virtual EEnumLiteral_ptr createEEnumLiteral();
        virtual EFactory_ptr createEFactory();
        virtual EModelElement_ptr createEModelElement();
        virtual ENamedElement_ptr createENamedElement();
        virtual EObject_ptr createEObject();
        virtual EOperation_ptr createEOperation();
        virtual EPackage_ptr createEPackage();
        virtual EParameter_ptr createEParameter();
        virtual EReference_ptr createEReference();
        virtual EStructuralFeature_ptr createEStructuralFeature();
        virtual ETypedElement_ptr createETypedElement();
        virtual EStringToStringMapEntry_ptr createEStringToStringMapEntry();
        virtual EGenericType_ptr createEGenericType();
        virtual ETypeParameter_ptr createETypeParameter();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static boost::intrusive_ptr< EcoreFactory > s_holder;

        EcoreFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline boost::intrusive_ptr< T > create()
    {
        return boost::intrusive_ptr< T >();
    }

    template< > inline EAttribute_ptr create< EAttribute >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEAttribute();
    }

    template< > inline EAnnotation_ptr create< EAnnotation >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEAnnotation();
    }

    template< > inline EClass_ptr create< EClass >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEClass();
    }

    template< > inline EClassifier_ptr create< EClassifier >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEClassifier();
    }

    template< > inline EDataType_ptr create< EDataType >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEDataType();
    }

    template< > inline EEnum_ptr create< EEnum >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEEnum();
    }

    template< > inline EEnumLiteral_ptr create< EEnumLiteral >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEEnumLiteral();
    }

    template< > inline EFactory_ptr create< EFactory >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEFactory();
    }

    template< > inline EModelElement_ptr create< EModelElement >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEModelElement();
    }

    template< > inline ENamedElement_ptr create< ENamedElement >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createENamedElement();
    }

    template< > inline EObject_ptr create< EObject >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEObject();
    }

    template< > inline EOperation_ptr create< EOperation >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEOperation();
    }

    template< > inline EPackage_ptr create< EPackage >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEPackage();
    }

    template< > inline EParameter_ptr create< EParameter >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEParameter();
    }

    template< > inline EReference_ptr create< EReference >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEReference();
    }

    template< > inline EStructuralFeature_ptr create< EStructuralFeature >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEStructuralFeature();
    }

    template< > inline ETypedElement_ptr create< ETypedElement >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createETypedElement();
    }

    template< > inline EStringToStringMapEntry_ptr create<
            EStringToStringMapEntry >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEStringToStringMapEntry();
    }

    template< > inline EGenericType_ptr create< EGenericType >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createEGenericType();
    }

    template< > inline ETypeParameter_ptr create< ETypeParameter >()
    {
        auto eFactory = EcorePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EcoreFactory* >(eFactory.get());
        return packageFactory->createETypeParameter();
    }

} // ecore

#endif // _ECOREFACTORY_HPP

