// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EDate.cpp
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

#include "EDate.hpp"

#include <ctime>
#include <iomanip>

#if defined(__WIN32__) || defined(_WIN32)
#include <windows.h>
#endif

namespace ecorecpp
{
namespace mapping
{
/** Possible time formats (EMF EDate)
 *
 *  SafeSimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss'.'SSSZ"),
 *  SafeSimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss'.'SSS"),
 *  SafeSimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss"),
 *  SafeSimpleDateFormat("yyyy-MM-dd'T'HH:mm"),
 *  SafeSimpleDateFormat("yyyy-MM-dd")
 */
EDate EDate::fromISOString(const type_definitions::string_t& str) {
	type_definitions::stringstream_t ss(str);
	const type_definitions::string_t format("%Y-%m-%dT%H:%M:%S");

	EDate date;

	ss >> std::get_time(&date, format.c_str());

	if (ss.fail())
		throw std::logic_error("Could not parse date string '" + str + "'.");

	// Set isdst explicitly, because is is undefined after calling get_time()
	date.tm_isdst = -1;

	float msec = 0.;
	ss >> msec;
	if (ss.fail())
		date.msec = 0;
	else
		date.msec = msec * 1000;

	char sign;
	ss >> sign;
	int tempValue = 0;
	for (int factor = 1000; factor > 0; factor /= 10) {
		char c;
		ss >> c;
		if (ss.fail())
			return date;

		int value = c - '0';
		if (value >= 0 && value < 10)
			tempValue += factor * value;
		else
			return date;
	}

	if (!ss.fail()) {
		int timezone = (tempValue / 100) * 3600;
		timezone += (tempValue%100)*60;
		timezone *= (sign == '-' ? -1 : 1);

		date.tm_gmtoff = timezone;
	}

	return date;
}

type_definitions::string_t EDate::toISOString(const EDate& ed) {
	type_definitions::stringstream_t ss;
	const type_definitions::string_t format("%Y-%m-%dT%H:%M:%S");
	ss << std::put_time(&ed, format.c_str());

	if (ed.msec == 0 && ed.tm_gmtoff == 0)
		return ss.str();

	ss << '.' << std::setw(3) << std::setfill('0') << ed.msec;

	if (ed.tm_gmtoff == 0)
		return ss.str();

	const char sign = (ed.tm_gmtoff < 0) ? '-' : '+';
	const int value = std::abs(ed.tm_gmtoff);
	const int hours = value/3600;
	const int minutes = value/60 - hours*60;

	ss << sign << std::setw(2) << std::setfill('0') << hours
		   << std::setw(2) << std::setfill('0') << minutes;

	return ss.str();
}

EDate::EDate()
	: std::tm{} { }

EDate::EDate(const std::tm& src)
	: std::tm(src) {
}

EDate::EDate(const std::time_t& utc)
	: std::tm(*localtime(&utc)) {
#if defined(__WIN32__) || defined(_WIN32)
	TIME_ZONE_INFORMATION tz;
	GetTimeZoneInformation(&tz);
	// UTC = local time + bias
	this->tm_gmtoff = -tz.Bias*60;
#endif
}

EDate::EDate(const type_definitions::string_t& str)
	: EDate(fromISOString(str)) { }

std::time_t EDate::mktime() const {
	EDate date(*this);

	// Correct given GMT offset by local GMT offset
#if defined(__WIN32__) || defined(_WIN32)
	TIME_ZONE_INFORMATION tz;
	GetTimeZoneInformation(&tz);

	// UTC = local time + bias
	date.tm_gmtoff += tz.Bias*60;
#else
	std::time_t localTime = time(nullptr);
	std::tm local = *localtime(&localTime);
	date.tm_gmtoff -= local.tm_gmtoff;
#endif
	// Correct time by effective offset
	int hour = (date.tm_gmtoff / 3600);
	int  min = (date.tm_gmtoff - 3600*hour) / 60;
	int  sec = (date.tm_gmtoff - 3600*hour - 60*min);
	date.tm_hour -= hour;
	date.tm_min  -= min;
	date.tm_sec  -= sec;

	// Set new GMT offset to local GMT offset
#if defined(__WIN32__) || defined(_WIN32)
	date.tm_gmtoff = -tz.Bias*60;
#else
	date.tm_gmtoff = local.tm_gmtoff;
#endif
	// Convert correct, local time to POSIX std::time_t.
	auto retVal = ::mktime(&date);

	return retVal;
}

bool operator==(const EDate& a, const EDate& b) {
	return a.tm_sec  == b.tm_sec
		&& a.tm_min  == b.tm_min
		&& a.tm_hour == b.tm_hour
		&& a.tm_mday == b.tm_mday
		&& a.tm_mon  == b.tm_mon
		&& a.tm_year == b.tm_year
		&& a.tm_wday == b.tm_wday
		&& a.tm_yday == b.tm_yday
		&& a.tm_gmtoff == b.tm_gmtoff
		&& a.msec    == b.msec;
}

bool operator!=(const EDate& a, const EDate& b) {
	return !(a==b);
}

} // mapping
} // ecorecpp
