// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EDate.hpp
 * Copyright (C) INCHRON GmbH 2018 <soeren.henning@inchron.com>
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

#ifndef ECORECPP_MAPPING_EDATE_HPP
#define ECORECPP_MAPPING_EDATE_HPP

#include <ctime>

#include "../../ecore/dllEcore.hpp"
#include "type_definitions.hpp"

namespace ecorecpp
{
namespace mapping
{

/** Represents a date and time information.
 *
 * Where the interface uses time_t, the Unix Time (i.e., time since 00:00:00
 * Coordinated Universal Time (UTC), Thursday, 1 January 1970, not counting
 * leap seconds) is expected.
 */
struct EXPORT_ECORE_DLL EDate : public std::tm {
	static EDate fromISOString(const type_definitions::string_t&);
	static type_definitions::string_t toISOString(const EDate&);

	EDate();
	EDate(const std::tm&);
	EDate(const std::time_t& utc);
	EDate(const type_definitions::string_t&);

	std::time_t mktime() const;

	int msec = 0;  // milliseconds
#if defined(__WIN32__) || defined(_WIN32)
	int tm_gmtoff = 0;
#endif
};

bool EXPORT_ECORE_DLL operator==(const EDate& a, const EDate& b);
bool EXPORT_ECORE_DLL operator!=(const EDate& a, const EDate& b);

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_EDATE_HPP
