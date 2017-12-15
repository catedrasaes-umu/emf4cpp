// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level2Factory.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1_LEVEL2FACTORY_HPP
#define _TOPLEVELPACKAGE_LEVEL1_LEVEL2FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <TopLevelPackage/Level1/Level2.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {

            class EXPORT_TOPLEVELPACKAGE_DLL Level2Factory : public virtual ::ecore::EFactory
            {
            public:

                static Level2Factory_ptr _instance();

                virtual Level2Class_ptr createLevel2Class();

                virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
                virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
                virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

            protected:

                static boost::intrusive_ptr< Level2Factory > s_holder;

                Level2Factory();

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

            template< > inline Level2Class_ptr create< Level2Class >()
            {
                auto eFactory =
                        Level2Package::_instance()->getEFactoryInstance();
                auto packageFactory =
                        dynamic_cast< Level2Factory* >(eFactory.get());
                return packageFactory->createLevel2Class();
            }

        } // Level2
    } // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1_LEVEL2FACTORY_HPP

