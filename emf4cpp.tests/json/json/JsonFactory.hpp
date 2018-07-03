// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonFactory.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

namespace json
{

    class JsonFactory: public virtual ::ecore::EFactory
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

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< JsonFactory > s_instance;

        JsonFactory();

    };

} // json

#endif // _JSONFACTORY_HPP

