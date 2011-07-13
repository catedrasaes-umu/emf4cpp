// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/test.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include <iostream>
#include "reference_parser.hpp"
#include <cassert>
#include <string>
#include <vector>

using namespace ::ecorecpp::parser;

int main()
{
    typedef std::vector< ::ecorecpp::mapping::type_traits::string_t > refs_t;
    refs_t r;

    r.push_back("#//EString #//Feo/wow #//Crunch");
    r.push_back("#//Widget/parent");
    r.push_back(
            "ecore:EDataType http://www.eclipse.org/emf/2002/Ecore#//EString");
    r.push_back(
            "//@contains.0/@contains.6/@contains.1 //@contains.0/@contains.6/@contains.2 //@contains.0/@contains.6/@contains.3 //@contains.0/@contains.6/@contains.4");

    for (refs_t::iterator it = r.begin(); it != r.end(); it++)
    {
        size_t size = it->size();
        const ::ecorecpp::mapping::type_traits::char_t * s = it->c_str();

        SemanticState ss;
        reference::State< SemanticState > st(ss, s, size);
        assert(reference::grammar::references::match(st));

        references_t& refs = ss.get_references();
        for (references_t::iterator i = refs.begin(); i != refs.end(); i++)
        {
            path_t& path = i->get_path();

            std::cout << "REF #/";
            for (path_t::iterator j = path.begin(); j != path.end(); j++)
            {
                std::cout << "/";
                if (j->is_collection())
                    std::cout << "@" << j->get_id() << "." << j->get_index();
                else
                    std::cout << j->get_id();
            }

            std::cout << std::endl;

            if (!i->m_uri.empty())
            {
                std::cout << "  URI " << i->m_uri << std::endl;
                std::cout << "  TYPE " << i->m_package << ":" << i->m_type
                        << std::endl;
            }
        }
    }
}
