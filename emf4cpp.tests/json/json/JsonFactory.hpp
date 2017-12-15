// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonFactory.hpp
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

#ifndef _JSONFACTORY_HPP
#define _JSONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <json.hpp>

#include <json/dllJson.hpp>

namespace json
{

    class EXPORT_JSON_DLL JsonFactory : public virtual ::ecore::EFactory
    {
    public:

        static JsonFactory_ptr _instance();

        virtual ObjectValue_ptr createObjectValue();
        virtual NVPair_ptr createNVPair();
        virtual Value_ptr createValue();
        virtual StringValue_ptr createStringValue();
        virtual NumberValue_ptr createNumberValue();
        virtual BooleanValue_ptr createBooleanValue();
        virtual ArrayValue_ptr createArrayValue();
        virtual NullValue_ptr createNullValue();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static boost::intrusive_ptr< JsonFactory > s_holder;

        JsonFactory();

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

    template< > inline ObjectValue_ptr create< ObjectValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createObjectValue();
    }

    template< > inline NVPair_ptr create< NVPair >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createNVPair();
    }

    template< > inline Value_ptr create< Value >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createValue();
    }

    template< > inline StringValue_ptr create< StringValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createStringValue();
    }

    template< > inline NumberValue_ptr create< NumberValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createNumberValue();
    }

    template< > inline BooleanValue_ptr create< BooleanValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createBooleanValue();
    }

    template< > inline ArrayValue_ptr create< ArrayValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createArrayValue();
    }

    template< > inline NullValue_ptr create< NullValue >()
    {
        auto eFactory = JsonPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< JsonFactory* >(eFactory.get());
        return packageFactory->createNullValue();
    }

} // json

#endif // _JSONFACTORY_HPP

