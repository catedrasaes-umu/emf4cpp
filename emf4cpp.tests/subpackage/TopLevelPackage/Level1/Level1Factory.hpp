// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level1Factory.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1FACTORY_HPP
#define _TOPLEVELPACKAGE_LEVEL1FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <TopLevelPackage/Level1.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{
    namespace Level1
    {

        class EXPORT_TOPLEVELPACKAGE_DLL Level1Factory : public virtual ::ecore::EFactory
        {
        public:

            static Level1Factory_ptr _instance();

            virtual Level1Class_ptr createLevel1Class();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< Level1Factory > s_holder;

            Level1Factory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline ::ecore::Ptr< T > create()
        {
            return ::ecore::Ptr< T >();
        }

        template< > inline Level1Class_ptr create< Level1Class >()
        {
            auto eFactory = Level1Package::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< Level1Factory* >(eFactory.get());
            return packageFactory->createLevel1Class();
        }

    } // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1FACTORY_HPP

