#include <ecorecpp.hpp>

#include <iostream>

#include "../treeiterator.hpp"
#include "../treeiterator/TreeiteratorPackage.hpp"

void printTreeObject(::ecore::EObject* obj) {
	if ( ::treeiterator::TreeNode* node = dynamic_cast<::treeiterator::TreeNode*>(obj)) {
		std::cerr << node->getName() << '\n';
	} else if (::treeiterator::Leaf* leaf = dynamic_cast<::treeiterator::Leaf*>(obj)) {
		std::cerr << leaf->getName() << '\n';
	} else {
		throw "Unknown type detected!";
	}
}

int main(int argc, char* argv[])
{
    ::ecore::EPackage_ptr _epkg = ::treeiterator::TreeiteratorPackage::_instance();

    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);

    if (argc > 1)
    {
        ::ecorecpp::parser::parser _parser;
        ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

		assert(_eobj);

		auto iter = _eobj->eAllContents();
		while (*iter) {
			printTreeObject(*iter);
			++iter;
		}

		auto children = _eobj->eContents();
		for (const auto& child : *children) {
			printTreeObject(child);
		}
    }
}

