// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorPackage.cpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <treeiterator/TreeiteratorPackage.hpp>

using namespace ::treeiterator;

std::unique_ptr< ::treeiterator::TreeiteratorPackage,
        ::ecorecpp::PackageDeleter< ::treeiterator::TreeiteratorPackage > > TreeiteratorPackage::s_instance;

::treeiterator::TreeiteratorPackage_ptr TreeiteratorPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return nullptr;
        duringConstruction = true;
        new TreeiteratorPackage();
        duringConstruction = false;
    }
    return s_instance.get();
}

::treeiterator::TreeiteratorPackage_ptr TreeiteratorPackage::_getInstanceAndRemoveOwnership()
{
    s_instance.get_deleter()._owner = false;
    return _instance();
}

