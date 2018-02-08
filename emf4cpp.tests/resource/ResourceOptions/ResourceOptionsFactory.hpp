// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceOptions/ResourceOptionsFactory.hpp
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

#ifndef _RESOURCEOPTIONSFACTORY_HPP
#define _RESOURCEOPTIONSFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <ResourceOptions.hpp>

#include <ResourceOptions/dllResourceOptions.hpp>

namespace ResourceOptions
{

    class EXPORT_RESOURCEOPTIONS_DLL ResourceOptionsFactory : public virtual ::ecore::EFactory
    {
    public:

        static ResourceOptionsFactory_ptr _instance();

        virtual ETypes_ptr createETypes();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static boost::intrusive_ptr< ResourceOptionsFactory > s_holder;

        ResourceOptionsFactory();

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

    template< > inline ETypes_ptr create< ETypes >()
    {
        auto eFactory =
                ResourceOptionsPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ResourceOptionsFactory* >(eFactory.get());
        return packageFactory->createETypes();
    }

} // ResourceOptions

#endif // _RESOURCEOPTIONSFACTORY_HPP

