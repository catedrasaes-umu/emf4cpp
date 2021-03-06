// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serializer/greedy_serializer.hpp
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

#ifndef _ECORECPPGREEDY_SERIALIZER_HPP
#define _ECORECPPGREEDY_SERIALIZER_HPP

#include <ecore/EObject.hpp>
#include <iostream>
#include <list>
#include <cassert>

#include "../mapping.hpp"
#include "../util/escape_html.hpp"

namespace ecorecpp
{
namespace serializer
{

using ::ecorecpp::mapping::type_definitions::string_t;
using ::ecorecpp::mapping::type_definitions::char_t;
using ::ecorecpp::util::escape_html;

static const char_t *_indent_precalc[] = {
    "",
    "  ",
    "    ",
    "      ",
    "        ",
    "          ",
    "            ",
    "              ",
    "                ",
    "                  ",
    "                    ",
    "                      ",
    "                        ",
    "                          ",
    "                            ",
    "                              ",
// (dotimes (i 16) (insert "\"" (make-string (* 2 i) #x20)  "\"," #xA))
};

struct greedy_serializer
{
private:
    std::ostream& out;
    unsigned int level;
	enum class ClosingState { Open, Closed };
	enum class NewLineRequired { NoLineBreak, LineBreak };
	struct TagManagement {
		TagManagement(ClosingState c, NewLineRequired n) : closing(c), newLine(n) { }
		ClosingState closing;
		NewLineRequired newLine;
	};
    std::list< TagManagement > has_value;
    bool indent;

    inline void _indent()
    {
        unsigned int mylevel = level
            & (sizeof(_indent_precalc) / sizeof (const char_t*) - 1);
        out << _indent_precalc[mylevel];
    }

public:
    inline greedy_serializer(std::ostream& _out, bool ind=false) :
        out(_out), level(0), indent (ind)
    {
        out << "<?xml version=\"1.0\" " << "encoding=\"UTF-8\" "
                << "standalone=\"no\" ?>\n";
    }

    inline void open_object(const string_t& _name, bool silent = false)
    {
        if (has_value.size() && has_value.back().closing == ClosingState::Open)
        {
            has_value.back().closing = ClosingState::Closed;
			has_value.back().newLine = NewLineRequired::LineBreak;
            out << ">\n";
        }

        has_value.push_back(TagManagement(ClosingState::Open, NewLineRequired::NoLineBreak));

        if (indent)
            _indent();

        ++level;
		if(!silent)
			out << "<" << _name;
    }

    inline void close_object(const string_t& _name, bool silent = false)
    {
        --level;

		if (!silent) {
			if (has_value.back().closing == ClosingState::Open)
				out << "/>\n";
			else
			{
				if (indent && has_value.back().newLine == NewLineRequired::LineBreak)
					_indent();

				out << "</" << _name << ">\n";
			}
		}

        has_value.pop_back();
    }

    inline void add_attribute(const string_t& _name, const string_t& _value)
    {
		std::string safe_value(_value);
		escape_html(safe_value);
        out << " " << _name << "=\"" << safe_value << "\"";
    }

    inline void add_value(const string_t& _value)
    {
        assert(has_value.size());
        assert(has_value.back().closing == ClosingState::Open);

        has_value.back().closing = ClosingState::Closed;
        has_value.back().newLine = NewLineRequired::NoLineBreak;

		std::string safe_value(_value);
		escape_html(safe_value);
		out << ">" << safe_value;
    }

    inline void append(const string_t& _value)
    {
        assert(has_value.size());
        has_value.back().closing = ClosingState::Closed;
		out << _value;
    }

	inline void setIndent(bool ind) { indent = ind; }
	inline bool getIndent() const { return indent; }
};

} // serializer
} // ecorecpp

#endif /* _ECORECPPGREEDY_SERIALIZER_HPP */
