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
#include <fstream>
#include <boost/lexical_cast.hpp>

using namespace tree;

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = TreePackage::_instance();
    std::ofstream outfile ("metamodel.ecore");
    ::ecorecpp::serializer::serializer ser(outfile);
    ser.serialize(_epkg);

    TreeFactory_ptr _efac = _epkg->getEFactoryInstance()->as< TreeFactory > ();

    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

        assert(_eobj);

        TreeNode_ptr _node = ::tree::instanceOf< TreeNode >(_eobj);

        assert(_node);

        std::ofstream outfile ("salida.xmi");
        ::ecorecpp::serializer::serializer ser(outfile);
        ser.serialize(_eobj);
    }

    NonTerminal_ptr root_node = _efac->createNonTerminal();
    root_node->setData("root");

    for (size_t i = 0; i < 1000000; i++)
    {
        TreeNode_ptr current = _efac->createLeaf();
        current->setData(boost::lexical_cast< std::string >(i));

        root_node->getChildren().push_back(current);
        current->setParent(root_node);
    }

    root_node->_initialize();

    std::ofstream outfile2 ("model.xmi");
    ::ecorecpp::serializer::serializer ser2(outfile2);
    ser2.serialize(root_node);
}

