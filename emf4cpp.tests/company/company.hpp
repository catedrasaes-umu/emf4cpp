// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company.hpp
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

#ifndef COMPANY_HPP
#define COMPANY_HPP

#include "company_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "company/Employee.hpp"
#include "company/Department.hpp"
#include "company/Company.hpp"
#include "company/PhonebookEntry.hpp"

// Package & Factory
#include "company/CompanyPackage.hpp"
#include "company/CompanyFactory.hpp"

#endif // COMPANY_HPP
