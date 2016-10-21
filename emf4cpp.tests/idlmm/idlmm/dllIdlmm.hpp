// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/dllIdlmm.hpp
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

#ifndef _DLL_IDLMM_HPP
#define _DLL_IDLMM_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_IDLMM_DLL  set to 1 when building the dll, else unset
 * - USE_IDLMM_DLL    set to 1 when using the dll, else unset
 * - EXPORT_IDLMM_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_IDLMM_DLL)
#       if defined(USE_IDLMM_DLL)
#           undef USE_IDLMM_DLL
#       endif

#       define EXPORT_IDLMM_DLL __declspec(dllexport)
#       define EXTERN_IDLMM_DLL __declspec(dllimport)

#   else
#       if !defined(USE_IDLMM_DLL)
#           define USE_IDLMM_DLL 1
#       endif

#       define EXPORT_IDLMM_DLL __declspec(dllimport)
#       define EXTERN_IDLMM_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_IDLMM_DLL
#   define EXTERN_IDLMM_DLL

#endif

#endif // _IDLMM_HPP

