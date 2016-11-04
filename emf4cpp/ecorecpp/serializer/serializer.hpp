// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serializer/serializer.hpp
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

#ifndef _ECORECPPSERIALIZER_HPP
#define _ECORECPPSERIALIZER_HPP

#include <ecore/EObject.hpp>

#include "../mapping.hpp"
#include "greedy_serializer.hpp"
#include <ostream>
#include <sstream>

#include "../dllEcorecpp.hpp"

namespace ecorecpp
{
namespace serializer
{

typedef ::ecorecpp::mapping::type_definitions::string_t string_t;

class EXPORT_ECORECPP_DLL serializer
{
public:

	enum class XmiIndentMode { NoIndentation, Indentation };
    serializer(std::ostream& _ostream,
			   XmiIndentMode = XmiIndentMode::NoIndentation);

    virtual ~serializer();

    void serialize(::ecore::EObject_ptr obj);

protected:

    ::ecorecpp::mapping::type_definitions::string_t get_type(
            ::ecore::EObject_ptr obj) const;

    ::ecorecpp::mapping::type_definitions::string_t get_reference(
            ::ecore::EObject_ptr from, ::ecore::EObject_ptr to) const;

    void serialize_node(::ecore::EObject_ptr obj);

    void create_node(::ecore::EObject_ptr parent_obj,
            ::ecore::EObject_ptr child_obj, ::ecore::EStructuralFeature_ptr ef);

    std::ostream& m_out;
	XmiIndentMode m_mode;
    std::ostringstream m_internalBuffer;

    int m_level; // current_level
    ::ecore::EObject_ptr m_root_obj;

    greedy_serializer m_ser;

	std::vector<::ecore::EPackage_ptr> m_usedPackages;
};

} // serializer
} // ecorecpp

#endif  /* _ECORECPPSERIALIZER_HPP */
