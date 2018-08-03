// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3Factory.cpp
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

#include <TopLevelPackage/Level1/Level2/Level3/Level3Factory.hpp>

using namespace ::TopLevelPackage::Level1::Level2::Level3;

::ecore::Ptr< ::TopLevelPackage::Level1::Level2::Level3::Level3Factory > Level3Factory::s_holder;

::TopLevelPackage::Level1::Level2::Level3::Level3Factory_ptr Level3Factory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Level3Factory > (new Level3Factory());

    return s_holder;
}

