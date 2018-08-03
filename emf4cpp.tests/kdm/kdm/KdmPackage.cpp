// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/KdmPackage.cpp
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

#include <kdm/KdmPackage.hpp>

using namespace ::kdm;

::ecore::Ptr< ::kdm::KdmPackage > KdmPackage::s_instance;

::kdm::KdmPackage_ptr KdmPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< KdmPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < KdmPackage > (new KdmPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::kdm::KdmPackage_ptr KdmPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

