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
#include <chrono>
#include <fstream>

using namespace tree;

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = TreePackage::_instance();
    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
		std::chrono::high_resolution_clock::time_point tStart =
				std::chrono::high_resolution_clock::now();

        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

		std::chrono::high_resolution_clock::time_point tEnd =
				std::chrono::high_resolution_clock::now();

        std::chrono::microseconds duration =
				std::chrono::duration_cast<std::chrono::microseconds>(tEnd - tStart);
        std::cout << "Parsing duration: " << duration.count() << "us" << std::endl;

        assert(_eobj);
        TreeNode_ptr _node = ::ecore::as< TreeNode >(_eobj);

        tStart = std::chrono::high_resolution_clock::now();

        std::ofstream outfile ("salida.xmi");
        ::ecorecpp::serializer::serializer _serializer(outfile);
        _serializer.serialize(_eobj);

        tEnd = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration_cast<std::chrono::microseconds>(tEnd - tStart);
		std::cout << "Serializing duration: " << duration.count() << "us" << std::endl;
    }
}

