// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/test_xml.cpp
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

#include <fstream>
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
#include "parser.hpp"
#include "generator.hpp"

using namespace parser;

#define INDENT(i) for (int q=0;                 \
    q < i;                                      \
                       ++q) std::cout << " "

void print_ast (node* n, int indent = 0)
{
    INDENT (indent);
    std::cout << "START Node: " << std::string (n->p.first, n->p.second)
              << " type: " << n->get_type_info().name()
              << std::endl;

    if (!n->children.empty())
    {
        for (node::child_list_t::const_iterator it = n->children.begin();
             it != n->children.end();
             ++it)
            print_ast (*it, indent+2);
    }

    INDENT (indent);
    std::cout << "END Node: " << std::string (n->p.first, n->p.second)
              << std::endl;
}

int
eval (const node *n)
{
    // if this node is a number, this is the value
    if (n->get_type_info() == typeid(expr_grammar::number_))
        return boost::lexical_cast<int>(std::string (n->p.first, n->p.second));
    else  if (n->get_type_info() == typeid(expr_grammar::mult_op_))
    {
        int retval = 0;

        // Recursive, but with a fixed structure.
        // The first child is a number. The second, if it exists,
        // may be either a mult_op or a right_expr
        node::child_list_t::const_iterator it = n->children.begin();
        retval = boost::lexical_cast<int>(std::string ((*it)->p.first,
                                                       (*it)->p.second));

        ++it;
        for (; it != n->children.end(); ++it)
        {
            if ((*it)->get_type_info() == typeid(expr_grammar::right_expr_))
                retval += eval (*it);
            else // mult_op_
                retval *= eval (*it);
        }
        return retval;
    }
    else // right_expr_, expr_
    {
        int retval = 0;

        for (node::child_list_t::const_iterator it = n->children.begin();
             it != n->children.end(); ++it)
                retval += eval (*it);
        return retval;
    }
}

int
main (int argc, char*argv[])
{
#if 0
    // expr_grammar
    {
        typedef SemanticState SSS;
        SSS ss;

        //const std::string EXPR ("2+3+4*5");
        const std::string EXPR (argv[1]);

        // std::ifstream is (argv[1]);
        // // get length of file:
        // is.seekg (0, std::ios::end);
        // int length = is.tellg();
        // is.seekg (0, std::ios::beg);
        // // allocate memory:
        // char* buffer = new char [length];
        // // read data as a block:
        // is.read (buffer,length);

        // is.close();

        State< SSS > st(ss, EXPR.c_str(), EXPR.size());
        std::cout << (expr_grammar::s_expr_::match(st) ? "true" : "false")
                  << std::endl;

        print_ast (st.root());
//        delete[] buffer;

        std::cout << std::endl << eval (st.root()) << std::endl;
    }
#endif

    // expr_grammar
    {
        typedef SemanticState SSS;
        SSS ss;

        //const std::string EXPR ("2+3+4*5");
        //const std::string EXPR (argv[1]);
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
        std::cout << (km3_grammar::s_spec::match(st) ? "true" : "false")
                  << std::endl;

        print_ast (st.root());

        std::cout << generator::km3::decl<SemanticState>::gen (st.root())
                  << std::endl;

        delete[] buffer;
    }

    return 0;
}

/*
 * Local Variables:
 * compile-command: "g++ -g -O0 -o test test.cpp"
 * End:
 */
