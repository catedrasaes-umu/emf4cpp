// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm.hpp
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

#ifndef KDM_KDM_HPP
#define KDM_KDM_HPP

#include "kdm_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "kdm/KDMFramework.hpp"
#include "kdm/KDMModel.hpp"
#include "kdm/Audit.hpp"
#include "kdm/Segment.hpp"
#include "kdm/Attribute.hpp"
#include "kdm/Annotation.hpp"
#include "kdm/TagDefinition.hpp"
#include "kdm/ExtendedValue.hpp"
#include "kdm/Stereotype.hpp"
#include "kdm/ExtensionFamily.hpp"
#include "kdm/TaggedRef.hpp"
#include "kdm/TaggedValue.hpp"

// Package & Factory
#include "kdm/kdm/KdmPackage.hpp"
#include "kdm/kdm/KdmFactory.hpp"

#endif // KDM_KDM_HPP
