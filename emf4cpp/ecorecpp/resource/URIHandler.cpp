// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * URIHandler.cpp
 * Copyright (C) INCHRON GmbH 2018 <soeren.henning@inchron.com>
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

#include "URIHandler.hpp"

#include <cstdio>
#include <fstream>

#include <QUrl>

namespace ecorecpp {
namespace resource {

const URIHandler::URIHandlerList URIHandler::DEFAULT_HANDLERS =
		{std::make_shared<URIHandler>()};

URIHandler::URIHandler() {
}

URIHandler::~URIHandler() = default;

bool URIHandler::canHandle( const QUrl& url) const {
	return url.isLocalFile();
}

std::shared_ptr<std::istream> URIHandler::createInputStream(const QUrl& url) const {
	if (!canHandle(url))
		return std::shared_ptr<std::istream>();

	const std::string filename(url.toLocalFile().toStdString());
	return std::make_shared<std::ifstream>(filename.c_str());
}


std::shared_ptr<std::ostream> URIHandler::createOutputStream(const QUrl& url) const {
	if (!canHandle(url))
		return std::shared_ptr<std::ostream>();

	const std::string filename(url.toLocalFile().toStdString());
	return std::make_shared<std::ofstream>(filename.c_str(), std::ios_base::trunc);
}

void URIHandler::remove(const QUrl& url) const {
	if (!canHandle(url))
		return;

	const std::string filename(url.toLocalFile().toStdString());
	std::remove(filename.c_str());
}

bool URIHandler::exists(const QUrl& url) const {
	if (!canHandle(url))
		return false;

	const std::string filename(url.toLocalFile().toStdString());
	return static_cast<bool>(std::ifstream(filename.c_str()));
}

} // resource
} // ecorecpp
