// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * any.hpp
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

#ifndef ECORECPP_MAPPING_ANY_HPP
#define ECORECPP_MAPPING_ANY_HPP

#include <stdexcept>
#include <string>
#include <cstddef>
#include <typeinfo>

namespace ecorecpp
{
namespace mapping
{

// Poor man's any class
struct any
{
    struct bad_any_cast: std::runtime_error
    {
        bad_any_cast() :
            std::runtime_error("any::bad_any_cast: failed conversion.")
        {
        }
    };

    any() :
        store_(0)
    {
    }

    template< typename T >
    any(T const& a)
    {
        store_ = new holder< T > (a);
    }

    any(any const& a) :
        store_(a.store_->copy())
    {
    }

    ~any()
    {
        delete store_;
    }

    any& operator=(any const& a)
    {
        delete store_;
        store_ = a.store_->copy();
        return *this;
    }

    template< typename T >
    any& operator=(T const& t)
    {
        delete store_;
        store_ = new holder< T > (t);
        return *this;
    }

    void swap(any& a)
    {
        holder_base* tmp = store_;
        store_ = a.store_;
        a.store_ = tmp;
    }

    bool empty() const
    {
        return store_ == 0;
    }

    const std::type_info& type() const
    {
        if (!store_)
            return typeid(nullptr);
        return store_->type__id();
    }

    template< typename T >
    static T&
    any_cast(any const& a)
    {
        if (typeid(T) != a.type())
            throw bad_any_cast();

        return dynamic_cast< holder< T >* > (a.store_)->v_;
    }

    template< typename T >
    static bool
    is_a(any const& a)
    {
        return typeid(T) == a.type();
    }

    // Inner classes
    struct holder_base
    {
        virtual ~holder_base()
        {
        }

        virtual const std::type_info& type__id() const = 0;
        virtual holder_base* copy() const = 0;
    };

    template< typename T >
    struct holder: holder_base
    {
        holder(T const& v) :
            v_(v)
        {
        }

        const std::type_info& type__id() const
        {
            return typeid(T);
        }

        holder_base* copy() const
        {
            return new holder< T > (v_);
        }

        // Value
        T v_;
    };

    // storage
    holder_base* store_;
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ANY_HPP
