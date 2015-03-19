// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
#include <ecorecpp.hpp>
#include <tree.hpp>
#include <bintree.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <ostream>


using namespace tree;
using namespace bintree;
using namespace boost::posix_time;

struct node_finder
{
    node_finder (BintreeFactory_ptr p, BinTreeNode_ptr root)
        : factory_ (p), root_ (root)
    {
    }

    inline BinTreeNode_ptr select_node(std::string const& str)
    {
        return select_node_rec (str, root_);
    }

private:
    inline BinTreeNode_ptr select_node_rec(std::string const& str,
                                           BinTreeNode_ptr from)
    {
        BinTreeNode_ptr _ret;

        if (str <= from->getData())
        {
            if (from->getLeft() != NULL)
                return select_node_rec (str, from->getLeft());
            else
            {
                // New node
                _ret = factory_->createBinTreeNode();
                _ret->setParent (from);
                from->setLeft (_ret);
                return _ret;
            }
        } else {
            if (from->getRight() != NULL)
                return select_node_rec (str, from->getRight());
            else
            {
                // New node
                _ret = factory_->createBinTreeNode();
                _ret->setParent (from);
                from->setRight (_ret);
                return _ret;
            }
        }
    }

    // Factory & root node
    BintreeFactory_ptr factory_;
    BinTreeNode_ptr root_;
};

int main(int argc, char* argv[])
{

    ::ecore::EPackage_ptr _epkg = TreePackage::_instance();
    ::ecore::EPackage_ptr b_epkg = BintreePackage::_instance();
    //::ecorecpp::serializer::serializer ser("metamodel.ecore");

    //TreeFactory_ptr _efac = _epkg->getEFactoryInstance()->as< TreeFactory > ();
    BintreeFactory_ptr b_efac =
        b_epkg->getEFactoryInstance()->as< BintreeFactory > ();

    ::ecorecpp::MetaModelRepository::_instance()->load(_epkg);
    ::ecorecpp::MetaModelRepository::_instance()->load(b_epkg);

    ::ecorecpp::parser::parser _parser;


    ptime loadStart = microsec_clock::local_time();

    ::ecore::EObject_ptr _eobj = _parser.load(argv[1]);
    assert(_eobj);

    ptime loadEnd = microsec_clock::local_time();

    {
        time_duration tVal = loadEnd - loadStart;
        std::cout << "Load time: " <<  to_simple_string(tVal)  << std::endl;
    }

    // In root node
    TreeNode_ptr in_root_node = ::tree::instanceOf< TreeNode >(_eobj);
    assert(in_root_node);
    // Treat node as non-terminal
    NonTerminal_ptr in_nt_root = in_root_node->as<NonTerminal>();

    // Output root node
    BinTreeNode_ptr out_bt_root = b_efac->createBinTreeNode();
    out_bt_root->setData("root");

    // Create the node finder in the process
    node_finder finder (b_efac, out_bt_root);

    ::ecorecpp::mapping::EList< TreeNode > const& v = in_nt_root->getChildren();

    ptime transformStart = microsec_clock::local_time();

    for (size_t i = 0; i < v.size(); ++i)
    {
        // Process v[i]
        BinTreeNode_ptr selected = finder.select_node (v[i]->getData());
        selected->setData (v[i]->getData());
    }

    ptime transformEnd = microsec_clock::local_time();

    {
        time_duration tVal = transformEnd - transformStart;
        std::cout << "Transformation time: " <<  to_simple_string(tVal)
                  << std::endl;
    }

    ptime serStart = microsec_clock::local_time();
    std::ofstream outfile ("model2.xmi");
    ::ecorecpp::serializer::serializer ser2(outfile);
    ser2.serialize(out_bt_root);
    ptime serEnd = microsec_clock::local_time();

    {
        time_duration tVal = serEnd - serStart;
        std::cout << "Serialization time: " <<  to_simple_string(tVal)
                  << std::endl;
    }

    return 0;
}

