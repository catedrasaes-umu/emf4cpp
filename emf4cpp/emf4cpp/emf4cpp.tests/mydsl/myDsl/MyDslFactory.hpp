// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslFactory.hpp
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

#ifndef _MYDSLFACTORY_HPP
#define _MYDSLFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <myDsl.hpp>

namespace myDsl
{

    class MyDslFactory: public virtual ::ecore::EFactory
    {
    public:

        static MyDslFactory_ptr _instance();

        virtual Model_ptr createModel();
        virtual Import_ptr createImport();
        virtual Type_ptr createType();
        virtual SimpleType_ptr createSimpleType();
        virtual Entity_ptr createEntity();
        virtual Property_ptr createProperty();

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::auto_ptr< MyDslFactory > s_instance;

        MyDslFactory();

    };

} // myDsl


#endif // _MYDSLFACTORY_HPP
