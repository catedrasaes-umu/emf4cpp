// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CoreFactory.hpp
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

#ifndef _KDM_COREFACTORY_HPP
#define _KDM_COREFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/core.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace core
    {

        class EXPORT_KDM_DLL CoreFactory : public virtual ::ecore::EFactory
        {
        public:

            static CoreFactory_ptr _instance();

            virtual Element_ptr createElement();
            virtual ModelElement_ptr createModelElement();
            virtual KDMEntity_ptr createKDMEntity();
            virtual KDMRelationship_ptr createKDMRelationship();
            virtual AggregatedRelationship_ptr createAggregatedRelationship();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static std::unique_ptr< CoreFactory > s_instance;

            CoreFactory();

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

        template< > inline Element_ptr create< Element >()
        {
            auto eFactory = CorePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CoreFactory* >(eFactory);
            return packageFactory->createElement();
        }
        template< > inline ModelElement_ptr create< ModelElement >()
        {
            auto eFactory = CorePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CoreFactory* >(eFactory);
            return packageFactory->createModelElement();
        }
        template< > inline KDMEntity_ptr create< KDMEntity >()
        {
            auto eFactory = CorePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CoreFactory* >(eFactory);
            return packageFactory->createKDMEntity();
        }
        template< > inline KDMRelationship_ptr create< KDMRelationship >()
        {
            auto eFactory = CorePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CoreFactory* >(eFactory);
            return packageFactory->createKDMRelationship();
        }
        template< > inline AggregatedRelationship_ptr create<
                AggregatedRelationship >()
        {
            auto eFactory = CorePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< CoreFactory* >(eFactory);
            return packageFactory->createAggregatedRelationship();
        }

    } // core
} // kdm

#endif // _KDM_COREFACTORY_HPP

