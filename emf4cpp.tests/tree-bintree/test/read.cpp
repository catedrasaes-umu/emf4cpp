// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/parser.hpp
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
#include <ecorecpp.hpp>
#include <tree.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <fstream>

using namespace tree;

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = TreePackage::_instance();
    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
        using namespace boost::posix_time;

        ptime tStart = microsec_clock::local_time();

        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

        ptime tEnd = microsec_clock::local_time();

        time_duration tVal = tEnd - tStart;
        std::cout << to_simple_string(tVal)  << std::endl;

        assert(_eobj);
        TreeNode_ptr _node = ::tree::instanceOf< TreeNode >(_eobj);

        tStart = microsec_clock::local_time();

        std::ofstream outfile ("salida.xmi");
        ::ecorecpp::serializer::serializer _serializer(outfile);
        _serializer.serialize(_eobj);

        tEnd = microsec_clock::local_time();

        tVal = tEnd - tStart;
        std::cout << to_simple_string(tVal)  << std::endl;
    }
}

