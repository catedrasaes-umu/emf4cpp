// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#ifndef XPAND3_STATEMENT_HPP
#define XPAND3_STATEMENT_HPP

#include "statement_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "statement/AbstractStatement.hpp"
#include "statement/ExpandStatement.hpp"
#include "statement/ExpressionStatement.hpp"
#include "statement/ErrorStatement.hpp"
#include "statement/AbstractStatementWithBody.hpp"
#include "statement/FileStatement.hpp"
#include "statement/ForEachStatement.hpp"
#include "statement/IfStatement.hpp"
#include "statement/LetStatement.hpp"
#include "statement/ProtectStatement.hpp"
#include "statement/TextStatement.hpp"

// Package & Factory
#include "xpand3/statement/StatementPackage.hpp"
#include "xpand3/statement/StatementFactory.hpp"

#endif // XPAND3_STATEMENT_HPP
