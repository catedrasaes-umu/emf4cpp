// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/test_xml.cpp
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

#include <fstream>
#include <iostream>
#include <string>
#include "simple_xml_parser.hpp"

using namespace ecorecpp::xml_parser;

struct MyHandler
{
        void print_attrs (attr_list_t const& attr_list) const
        {
                for (attr_list_t::const_iterator it = attr_list.begin();
                     it != attr_list.end();
                     ++it)
                {
                        std::cout << "Attr: "
                                   <<  std::string (it->first.first, it->first.second)
                                   << " V: "
                                   <<  std::string (it->second.first, it->second.second)
                                   << std::endl;
                }
        }

        void processing_tag (match_pair const& tag,
                         attr_list_t const& attr_list)
        {
                std::cout << "Procesing tag: "
                           << "'" <<  std::string (tag.first, tag.second)
                           << "'"
                           << std::endl;

                print_attrs(attr_list);
        }

        void start_tag (match_pair const& tag,
                        attr_list_t const& attr_list)
        {
                std::cout << "Start tag: "
                           <<  std::string (tag.first, tag.second)
                           << std::endl;

                print_attrs(attr_list);
        }

        void end_tag (match_pair const& tag)
        {
                std::cout << "End tag: "
                           <<  std::string (tag.first, tag.second)
                           << std::endl;
        }

        void characters (match_pair const& chars)
        {
                std::cout << "Characters: '"
                           <<  std::string (chars.first, chars.second)
                           << "'"
                           << std::endl;
        }
};

struct MyHandler2
{
        void processing_tag (match_pair const& tag,
                         attr_list_t const& attr_list)
        {
        }

        void start_tag (match_pair const& tag,
                        attr_list_t const& attr_list)
        {
        }

        void end_tag (match_pair const& tag)
        {
        }

        void characters (match_pair const& chars)
        {
        }
};

struct MyHandler3
{
        void process_attrs (attr_list_t const& attr_list) const
        {
                for (attr_list_t::const_iterator it = attr_list.begin();
                     it != attr_list.end();
                     ++it)
                {
                        std::string name (it->first.first, it->first.second);
                        std::string value (it->second.first, it->second.second);
                }
        }

        void processing_tag (match_pair const& tag,
                         attr_list_t const& attr_list)
        {
                std::string t (tag.first, tag.second);
                process_attrs (attr_list);
        }

        void start_tag (match_pair const& tag,
                        attr_list_t const& attr_list)
        {
                std::string t (tag.first, tag.second);
                process_attrs (attr_list);
        }

        void end_tag (match_pair const& tag)
        {
                std::string t (tag.first, tag.second);
        }

        void characters (match_pair const& chars)
        {
                std::string t (chars.first, chars.second);
        }
};


int
main (int argc, char*argv[])
{
        MyHandler mh;
        typedef SemanticState<MyHandler> SSS;
        SSS ss (mh);

        const std::string XML ("<?XML version=\"1.0\"  ?>xxyy </a><abcdef><a id=\"abc\"                                   other=\"xxx\"            >yyy<b a=\"9\"/>");

        std::ifstream is (argv[1]);
        // get length of file:
        is.seekg (0, std::ios::end);
        int length = is.tellg();
        is.seekg (0, std::ios::beg);
        // allocate memory:
        char* buffer = new char [length];
        // read data as a block:
        is.read (buffer,length);

        is.close();

        State< SSS > st(ss, buffer, length);
        std::cout << (grammar::the_xml::match(st) ? "true" : "false")
                   << std::endl;
        delete[] buffer;
}
