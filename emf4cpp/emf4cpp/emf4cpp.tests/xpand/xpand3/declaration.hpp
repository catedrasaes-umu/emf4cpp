// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#ifndef XPAND3_DECLARATION_HPP
#define XPAND3_DECLARATION_HPP

#include "declaration_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage


// EClass
#include "declaration/AbstractDeclaration.hpp"
#include "declaration/AbstractNamedDeclaration.hpp"
#include "declaration/Definition.hpp"
#include "declaration/Extension.hpp"
#include "declaration/AbstractAspect.hpp"
#include "declaration/ExtensionAspect.hpp"
#include "declaration/DefinitionAspect.hpp"
#include "declaration/Check.hpp"
#include "declaration/CreateExtension.hpp"
#include "declaration/JavaExtension.hpp"

// Package & Factory
#include "xpand3/declaration/DeclarationPackage.hpp"
#include "xpand3/declaration/DeclarationFactory.hpp"

#endif // XPAND3_DECLARATION_HPP
