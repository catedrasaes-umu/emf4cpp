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

#include <cstddef>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <boost/intrusive_ptr.hpp>

namespace ecore {
class EObject;
using EObject_ptr = boost::intrusive_ptr<EObject>;
void intrusive_ptr_release(EObject*);
} // namespace ecore

namespace ecorecpp
{
namespace mapping
{

/** Poor man's any class.
 *
 * Special support is implemented to wrap pointers to ecore classes: While
 * anything is stored as value and can only be returned in its original type,
 * ecore instances are usually wrapped a smart pointers. They can be returned
 * in both the original pointer type and as an ::ecore::EObject_ptr.
 */
struct any
{
    struct bad_any_cast: std::runtime_error
    {
        bad_any_cast(const std::string& of, const std::string& to) :
            std::runtime_error("any::bad_any_cast of '" + of + "' to '" + to + "'.\n")
        {}
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

	/** Default behavior if T is not ::ecore::EObject_ptr: Return the wrapped object. */
    template< typename T >
    static
	typename std::enable_if<
        ! std::is_same< T, ::ecore::EObject_ptr >::value,
        T >::type&
	any_cast(any const& a)
    {
        if (typeid(T) != a.type())
            throw bad_any_cast(std::string(a.type().name()), std::string(typeid(T).name()));

        return dynamic_cast< holder< T >* > (a.store_)->v_;
    }

	/** Specialization if T is ::ecore::EObject_ptr. In that case and if the
	 * wrapped object is a (smart) pointer to a class U, which is derived from
	 * EObject, a (smart) pointer to EObject is returned. */
	template< typename T >
	static
	typename std::enable_if<
        std::is_same< T, ::ecore::EObject_ptr >::value,
        ::ecore::EObject_ptr >::type
	any_cast(any const& a)
	{
		return a.store_->eObject();
	}

	/** Default behavior if T is not ::ecore::EObject_ptr: Compare the types. */
    template< typename T >
    static
	typename std::enable_if<
        ! std::is_same< T, ::ecore::EObject_ptr >::value,
        bool >::type
    is_a(any const& a)
    {
        return typeid(T) == a.type();
    }

	/** Specialization if T is ::ecore::EObject_ptr.
	 * \sa any_cast<::ecore::EObject_ptr>(). */
    template< typename T >
    static
	typename std::enable_if<
        std::is_same< T, ::ecore::EObject_ptr >::value,
        bool >::type
    is_a(any const& a)
    {
        return (bool)a.store_->eObject();
    }

    // Inner classes
    struct holder_base
    {
        virtual ~holder_base() = default;
        virtual const std::type_info& type__id() const = 0;
        virtual holder_base* copy() const = 0;
		virtual ::ecore::EObject_ptr eObject() const = 0;
    };

	/** The default case. Used for any wrapped typed, execpt if T can be
	 * converted into a (smart) pointers to ::ecore::EObject. */
    template< typename T, class Enable = void >
    struct holder: holder_base
    {
        holder(T const& v) : v_(v) { }
		const std::type_info& type__id() const override { return typeid(T); }
        holder_base* copy() const override { return new holder< T > (v_); }
		::ecore::EObject_ptr eObject() const override { return ::ecore::EObject_ptr(); }

        T v_; // Value
    };

	/** Specialization if T is a (smart) pointer to U and U is derived
	 * ::ecore::EObject. In that case T is convertible into
	 * ::ecore::EObject_ptr. */
    template< typename T >
    struct holder< T, typename std::enable_if<
						  std::is_convertible< T, ::ecore::EObject_ptr >::value >::type
				   > : holder_base
    {
        holder(T const& v) : v_(v) { }
		const std::type_info& type__id() const { return typeid(T); }
        holder_base* copy() const { return new holder< T > (v_); }
		::ecore::EObject_ptr eObject() const override { return ::ecore::EObject_ptr(v_); }

        T v_; // Value
    };

    // storage
    holder_base* store_;
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ANY_HPP
