// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/EdatePackage.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#include <edate/EdatePackage.hpp>

using namespace ::edate;

boost::intrusive_ptr< ::edate::EdatePackage > EdatePackage::s_instance;

::edate::EdatePackage_ptr EdatePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return boost::intrusive_ptr< EdatePackage >();
        duringConstruction = true;
        s_instance = boost::intrusive_ptr < EdatePackage > (new EdatePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::edate::EdatePackage_ptr EdatePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

