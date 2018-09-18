// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/any_traits.hpp
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

#ifndef ECORECPP_MAPPING_ANYTRAITS_HPP
#define    ECORECPP_MAPPING_ANYTRAITS_HPP

#include <type_traits>
#include <typeinfo>
#include "type_definitions.hpp"

namespace ecorecpp
{
namespace mapping
{

template< typename T >
struct any_traits
{
    static inline void fromAny(const any& _any, T& _t)
    {
        _t = fromAnyHelper<T>(_any);
	}

	static inline void toAny(any& _any, const T& _t)
    {
		_any = toAnyHelper<T>(_t);
    }

	/* The function templates toAnyHelper()/fromAnyHelper() use the SFINAE ('Substitution
	 * failure is not an arror') technique to offer a special treatment
	 * for c++ enums.
	 */
	template <class U>
	static inline
	auto toAnyHelper(const U& _t)
		-> typename std::enable_if<std::is_enum<U>::value, int>::type {
		return static_cast<int>(_t);
	}

	template <class U>
	static inline
	auto toAnyHelper(const U& _t)
		-> typename std::enable_if<!std::is_enum<U>::value, U>::type {
		return _t;
	}

	template <class U>
	static inline
	auto fromAnyHelper(const any& _any)
		-> typename std::enable_if<std::is_enum<U>::value, U>::type {
		return static_cast<U>(any::any_cast<int>(_any));
	}

	template <class U>
	static inline
	auto fromAnyHelper(const any& _any)
		-> typename std::enable_if<!std::is_enum<U>::value, U>::type {
		return any::any_cast<U>(_any);
	}
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ANYTRAITS_HPP
