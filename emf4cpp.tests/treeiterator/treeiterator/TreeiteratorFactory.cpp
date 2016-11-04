// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorFactory.cpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <treeiterator/TreeiteratorFactory.hpp>

using namespace ::treeiterator;

std::unique_ptr< ::treeiterator::TreeiteratorFactory > TreeiteratorFactory::s_instance;

::treeiterator::TreeiteratorFactory_ptr TreeiteratorFactory::_instance()
{
    if (!s_instance.get())
        new TreeiteratorFactory();
    return s_instance.get();
}

