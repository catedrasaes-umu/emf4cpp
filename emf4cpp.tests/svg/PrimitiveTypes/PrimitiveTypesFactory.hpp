// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * PrimitiveTypes/PrimitiveTypesFactory.hpp
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

#ifndef _PRIMITIVETYPESFACTORY_HPP
#define _PRIMITIVETYPESFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <PrimitiveTypes.hpp>

namespace PrimitiveTypes
{

    class PrimitiveTypesFactory: public virtual ::ecore::EFactory
    {
    public:

        static PrimitiveTypesFactory_ptr _instance();

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::unique_ptr< PrimitiveTypesFactory > s_instance;

        PrimitiveTypesFactory();

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

} // PrimitiveTypes

#endif // _PRIMITIVETYPESFACTORY_HPP

