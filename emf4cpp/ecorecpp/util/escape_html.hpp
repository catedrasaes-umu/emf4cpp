// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serializer/html_encode.hpp
 * Copyright (C) INCHRON GmbH 2016 <matthias.doerfel@inchron.com>
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

#ifndef _ECORECPPESCAPE_HTML_HPP
#define _ECORECPPESCAPE_HTML_HPP

#include <string>

namespace ecorecpp
{
namespace util
{

void unescape_html(std::string& data);
void escape_html(std::string& data);

} // util
} // ecorecpp

#endif // ifndef _ECORECPPESCAPE_HTML_HPP
