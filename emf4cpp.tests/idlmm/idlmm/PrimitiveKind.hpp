// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/PrimitiveKind.hpp
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

#ifndef IDLMM_PRIMITIVEKIND_HPP
#define IDLMM_PRIMITIVEKIND_HPP

namespace idlmm
{

    enum class PrimitiveKind
    {
        PK_NULL = 0,
        PK_VOID = 1,
        PK_SHORT = 2,
        PK_LONG = 3,
        PK_USHORT = 4,
        PK_ULONG = 5,
        PK_FLOAT = 6,
        PK_DOUBLE = 7,
        PK_BOOLEAN = 8,
        PK_CHAR = 9,
        PK_OCTET = 10,
        PK_ANY = 11,
        PK_LONGDOUBLE = 12,
        PK_WSTRING = 13,
        PK_TYPECODE = 14,
        PK_WCHAR = 15,
        PK_PRINCIPAL = 16,
        PK_STRING = 17,
        PK_ULONGLONG = 18,
        PK_OBJREF = 19,
        PK_LONGLONG = 20

    };

} // idlmm

#endif
