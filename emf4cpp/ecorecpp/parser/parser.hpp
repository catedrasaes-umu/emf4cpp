// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/parser.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#ifndef _ECORECPPPARSER_HPP
#define _ECORECPPPARSER_HPP

#include <ecore.hpp>

#include "../dllEcorecpp.hpp"

namespace ecorecpp
{
namespace parser
{

class EXPORT_ECORECPP_DLL parser
{
public:

    parser();

    virtual ~parser();

    ::ecore::EObject_ptr load(const char* _file);
    ::ecore::EObject_ptr load_str(const ::ecorecpp::mapping::type_definitions::char_t* buffer,
                                  int length);
};

} // parser
} // ecorecpp

#endif    /* _ECORECPPPARSER_HPP */
