// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositeFactory.hpp
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

#ifndef _EOPPOSITEFACTORY_HPP
#define _EOPPOSITEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <eopposite.hpp>

#include <eopposite/dllEopposite.hpp>

namespace eopposite
{

    class EXPORT_EOPPOSITE_DLL EoppositeFactory : public virtual ::ecore::EFactory
    {
    public:

        static EoppositeFactory_ptr _instance();

        virtual TopLevel_ptr createTopLevel();
        virtual NamedObject_ptr createNamedObject();
        virtual LeftHand_ptr createLeftHand();
        virtual RightHand_ptr createRightHand();
        virtual RightMultiple_ptr createRightMultiple();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< EoppositeFactory > s_instance;

        EoppositeFactory();

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

    template< > inline TopLevel_ptr create< TopLevel >()
    {
        auto eFactory = EoppositePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EoppositeFactory* >(eFactory);
        return packageFactory->createTopLevel();
    }
    template< > inline NamedObject_ptr create< NamedObject >()
    {
        auto eFactory = EoppositePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EoppositeFactory* >(eFactory);
        return packageFactory->createNamedObject();
    }
    template< > inline LeftHand_ptr create< LeftHand >()
    {
        auto eFactory = EoppositePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EoppositeFactory* >(eFactory);
        return packageFactory->createLeftHand();
    }
    template< > inline RightHand_ptr create< RightHand >()
    {
        auto eFactory = EoppositePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EoppositeFactory* >(eFactory);
        return packageFactory->createRightHand();
    }
    template< > inline RightMultiple_ptr create< RightMultiple >()
    {
        auto eFactory = EoppositePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< EoppositeFactory* >(eFactory);
        return packageFactory->createRightMultiple();
    }

} // eopposite

#endif // _EOPPOSITEFACTORY_HPP

