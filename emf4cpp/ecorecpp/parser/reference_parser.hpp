// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/reference_parser.hpp
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

#ifndef _ECORECPP_PARSERREF_HPP
#define _ECORECPP_PARSERREF_HPP

#include <cassert>
#include <sstream>
#include <vector>
#include "parser_common.hpp"

namespace ecorecpp
{
namespace ref_parser
{
using namespace parser;

typedef std::pair< const ::ecorecpp::mapping::type_definitions::char_t*, size_t > match_pair;

struct path_item
{
    ::ecorecpp::mapping::type_definitions::string_t m_id;
    int m_index;

    inline path_item(const ::ecorecpp::mapping::type_definitions::string_t& id,
                     int index)
        : m_id(id), m_index(index)
    {
    }

    inline bool is_collection()
    {
        return m_index != -1;
    }

    inline ::ecorecpp::mapping::type_definitions::string_t& get_id()
    {
        return m_id;
    }

    inline int get_index()
    {
        return m_index;
    }
};

typedef std::vector< path_item > path_t;

struct processed_reference_t
{
    ::ecorecpp::mapping::type_definitions::string_t m_package;
    ::ecorecpp::mapping::type_definitions::string_t m_type;
    ::ecorecpp::mapping::type_definitions::string_t m_uri;
    path_t m_path;

    inline path_t& get_path()
    {
        return m_path;
    }

    inline ::ecorecpp::mapping::type_definitions::string_t& get_uri()
    {
        return m_uri;
    }

    inline ::ecorecpp::mapping::type_definitions::string_t& get_type()
    {
        return m_type;
    }

    inline ::ecorecpp::mapping::type_definitions::string_t& get_package()
    {
        return m_package;
    }
};

typedef std::vector< processed_reference_t > references_t;

struct SemanticState
{
    inline SemanticState()
        : m_current_index(-1)
    {
    }

    inline void new_type()
    {
        assert(m_current_id.size() == 2);
        m_current.m_package = m_current_id[0];
        m_current.m_type = m_current_id[1];
        m_current_id.clear();
    }

    inline void new_uri(const ::ecorecpp::mapping::type_definitions::string_t & _uri)
    {
        m_current.m_uri = _uri;
    }

    inline void new_id(const ::ecorecpp::mapping::type_definitions::string_t & _id)
    {
        m_current_id.push_back(_id);
    }

    inline void new_index(int _index)
    {
        m_current_index = _index;
    }

    inline void new_path_item()
    {
        m_current.m_path.push_back(path_item(m_current_id.back(), m_current_index));
        m_current_id.clear();
        m_current_index = -1;
    }

    inline void new_reference()
    {
        m_references.push_back(m_current);
        m_current = processed_reference_t();
    }

    std::vector< ::ecorecpp::mapping::type_definitions::string_t > m_current_id;
    int m_current_index;

    processed_reference_t m_current;
    references_t m_references;

    inline references_t& get_references()
    {
        return m_references;
    }
};


namespace grammar
{

// space
struct space: or_< char_< ' ' > , char_< '\t' > , char_< '\n' > , char_< '\r' > >
{
};

// One or more spaces
struct spaces_: plus_< space >
{
};

struct letter_: or_< cirange_< 'A', 'Z' > , cirange_< 'a', 'z' > >
{
};

struct word_: plus_< letter_ >
{
};

struct digit_: cirange_< '0', '9' >
{
};

struct number_: plus_< digit_ >
{
};

struct id_: semantic_rule< id_,
                           seq_< letter_, star_< or_< letter_, digit_ > > > >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        ::ecorecpp::mapping::type_definitions::string_t _item(s.first, s.second);
        state.semantic_state().new_id(_item);
    }
};

struct index_ : semantic_rule< index_, number_ >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        ::ecorecpp::mapping::type_definitions::string_t _item(s.first, s.second);
        ::ecorecpp::mapping::type_definitions::stringstream_t _ss(_item);
        int _index;
        _ss >> _index;
        state.semantic_state().new_index(_index);
    }
};

struct path_item:
    semantic_rule< path_item,
                   seq_<
                       char_< '/' >,
					   star_< char_< '@' > >,
					   id_,
                       star_< seq_< char_<'.'>, index_ > >
                       >
                   >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        state.semantic_state().new_path_item();
    }
};

struct path: semantic_rule< path,
                            seq_< char_< '/' > , star_< path_item > > >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        // Nothing to do
    }
};

struct type_: semantic_rule< type_,
                             seq_< id_, char_< ':' > , id_ > >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        state.semantic_state().new_type();
    }
};

struct uri_: semantic_rule< uri_,
                            plus_< notchar_< '#' > > >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        ::ecorecpp::mapping::type_definitions::string_t _uri(s.first, s.second);
        state.semantic_state().new_uri(_uri);
    }
};

struct reference: semantic_rule<
    reference,
    seq_<
        opt_< spaces_ > ,
        or_<
            seq_ <
                opt_<
                    seq_<
                        type_,
                        spaces_,
                        uri_
                        >
                    >,
                char_< '#' >,
                path
                >,
            path
            >,
        opt_< spaces_ >
        >
    >
{
    // Semantic rule
    template< typename S >
    static inline void process_match(S& state, match_pair const& s)
    {
        state.semantic_state().new_reference();
    }
};

struct references: plus_< reference >
{
};

} // grammar

} // ref_parser
} // ecorecpp

#endif    /* _ECORECPP_PARSERREF_HPP */
