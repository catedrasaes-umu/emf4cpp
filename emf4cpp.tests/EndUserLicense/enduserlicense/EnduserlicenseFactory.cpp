// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enduserlicense/EnduserlicenseFactory.cpp
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

#include <enduserlicense/EnduserlicenseFactory.hpp>

using namespace ::enduserlicense;

boost::intrusive_ptr< ::enduserlicense::EnduserlicenseFactory > EnduserlicenseFactory::s_holder;

::enduserlicense::EnduserlicenseFactory_ptr EnduserlicenseFactory::_instance()
{
    if (!s_holder.get())
        s_holder = boost::intrusive_ptr < EnduserlicenseFactory
                > (new EnduserlicenseFactory());

    return s_holder;
}

