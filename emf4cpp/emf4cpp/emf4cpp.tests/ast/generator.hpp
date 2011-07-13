// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/simple_xml_parser.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * Ecore2CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ecore2CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GENERATOR_HPP
#define __GENERATOR_HPP

namespace generator
{

namespace km3
{

using namespace parser;
using namespace parser::km3_grammar;

template< typename R, typename T  >
static std::string G(node * n, int I=0)
{
    assert (n->type_select<T>().size() > 0);
    return R::gen (n->type_select<T>()[I]);
}

template<typename R, typename T>
static std::string GL(node * n, std::string sep = ", ")
{
    std::string ret;
    node::child_list_t r = n->type_select<T>();
    node::child_list_t::const_iterator it = r.begin();
    while (it != r.end())
    {
        ret += R::gen (*it);
        ++it;
        if (it != r.end())
            ret += sep;
    }

    return ret;
}


template<typename T>
struct decl
{
};

template<typename T>
struct impl
{
};

#define GEN(R, T) G<R<T>, T>
#define GENL(R, T) GL<R<T>, T>

template<>
struct decl<SemanticState>
{
    inline static std::string gen (node * n)
    {
        return GEN (decl,spec)(n);
    }
};

template<>
struct decl<spec>
{
    inline static std::string gen (node * n)
    {
        return GENL (decl,package)(n, "\n\n");
    }
};


template<>
struct decl<id>
{
    inline static std::string gen (node * n)
    {
        return std::string (n->p.first, n->p.second);
    }
};

template<>
struct decl<package>
{
    inline static std::string gen (node * n)
    {
        return "namespace " + GEN (decl,id)(n) + " {" +
            GEN (decl, package_body)(n) +
            GEN (impl, package_body)(n) + "}" ;
    }
};

template<>
struct decl<package_body>
{
    inline static std::string gen (node * n)
    {
        return "<<namespace body decl>>";
    }
};

template<>
struct impl<package_body>
{
    inline static std::string gen (node * n)
    {
        return "<<namespace body impl>>";
    }
};


}
}


#endif // __GENERATOR_HPP
