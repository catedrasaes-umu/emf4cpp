// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackagePackage.cpp
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

#include <TopLevelPackage/TopLevelPackagePackage.hpp>

using namespace ::TopLevelPackage;

::ecore::Ptr< ::TopLevelPackage::TopLevelPackagePackage > TopLevelPackagePackage::s_instance;

::TopLevelPackage::TopLevelPackagePackage_ptr TopLevelPackagePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< TopLevelPackagePackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < TopLevelPackagePackage
                > (new TopLevelPackagePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::TopLevelPackage::TopLevelPackagePackage_ptr TopLevelPackagePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

