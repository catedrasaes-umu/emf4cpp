// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * resource_forward.hpp
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

#ifndef ECORECPP_RESOURCE_FORWARD_HPP
#define ECORECPP_RESOURCEMAPPING_FORWARD_HPP

#include <boost/intrusive_ptr.hpp>

namespace ecorecpp {
namespace resource {

class Resource;
class ResourceSet;

using Resource_ptr = boost::intrusive_ptr<Resource>;
using ResourceSet_ptr = boost::intrusive_ptr<ResourceSet>;

} // resource
} // ecorecpp

#endif // ECORECPP_RESOURCE_FORWARD_HPP
