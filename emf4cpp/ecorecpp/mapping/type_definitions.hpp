// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/type_definitions.hpp
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

#ifndef ECORECPP_MAPPING_TYPEDEFS_HPP
#define    ECORECPP_MAPPING_TYPEDEFS_HPP

#include <string>
#include <sstream>

namespace ecorecpp
{
namespace mapping
{
namespace type_definitions
{

#ifdef ECORECPP_USE_WSTRING
  typedef std::wstring string_t;
  typedef wchar_t      char_t;
  typedef std::wstringstream stringstream_t;
  typedef std::wostringstream ostringstream_t;
#define E_COUT std::cout
#else // ECORECPP_USE_STRING (default)
  typedef std::string  string_t;
  typedef char         char_t;
  typedef std::stringstream stringstream_t;
  typedef std::ostringstream ostringstream_t;
#define E_COUT std::cout
#endif

} // type_definitions
} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_TYPEDEFS_HPP
