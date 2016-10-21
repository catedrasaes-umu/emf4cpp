// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3Factory.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3FACTORY_HPP
#define _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <TopLevelPackage/Level1/Level2/Level3.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {
            namespace Level3
            {

                class EXPORT_TOPLEVELPACKAGE_DLL Level3Factory : public virtual ::ecore::EFactory
                {
                public:

                    static Level3Factory_ptr _instance();

                    virtual Level3Class_ptr createLevel3Class();

                    virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
                    virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
                    virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

                protected:

                    static std::unique_ptr< Level3Factory > s_instance;

                    Level3Factory();

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

                template< > inline Level3Class_ptr create< Level3Class >()
                {
                    auto eFactory =
                            Level3Package::_instance()->getEFactoryInstance();
                    auto packageFactory =
                            dynamic_cast< Level3Factory* >(eFactory);
                    return packageFactory->createLevel3Class();
                }

            } // Level3
        } // Level2
    } // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3FACTORY_HPP

