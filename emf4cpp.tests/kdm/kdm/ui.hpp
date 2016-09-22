// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui.hpp
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

#ifndef KDM_UI_HPP
#define KDM_UI_HPP

#include "ui_forward.hpp"
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "ui/AbstractUIElement.hpp"
#include "ui/UIResource.hpp"
#include "ui/UIDisplay.hpp"
#include "ui/Screen.hpp"
#include "ui/Report.hpp"
#include "ui/UIModel.hpp"
#include "ui/AbstractUIRelationship.hpp"
#include "ui/UILayout.hpp"
#include "ui/UIField.hpp"
#include "ui/DisplaysImage.hpp"
#include "ui/Displays.hpp"
#include "ui/UIFlow.hpp"
#include "ui/UIElement.hpp"
#include "ui/UIRelationship.hpp"
#include "ui/UIAction.hpp"
#include "ui/UIEvent.hpp"
#include "ui/ReadsUI.hpp"
#include "ui/WritesUI.hpp"
#include "ui/ManagesUI.hpp"

// Package & Factory
#include "kdm/ui/UiPackage.hpp"
#include "kdm/ui/UiFactory.hpp"

#endif // KDM_UI_HPP
