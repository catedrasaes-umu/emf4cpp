// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; c-file-offsets: ((innamespace . [4])); -*-
/*
 * ItemProvider.hpp
 * Copyright (C) INCHRON Gmbh 2016 <matthias.doerfel@inchron.com>
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
#include "ItemProvider.hpp"

#include <ecore/EAttribute.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>

#ifdef QT5_SUPPORT
#endif

#include <iostream>


namespace ecorecpp
{
	ItemProvider::ItemProvider() = default;

	ItemProvider::~ItemProvider() = default;

	/** The static method getText() must identify the correct ItemProvider
	 * instance of the EPackage where the EClass of the EObject belongs
	 * to. Then it must call the virtual method _getText() of this
	 * ItemProvider instance. */
	std::string ItemProvider::getText(const ::ecore::EObject_ptr obj) {
		::ecore::EClass_ptr cl = obj->eClass();
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getText(obj);
	}

	std::string ItemProvider::getText(const ::ecore::EClass_ptr cl) {
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getText(cl);
	}

	std::string ItemProvider::getText(const ::ecore::EAttribute_ptr obj) {
		::ecore::EClass_ptr cl = obj->getEContainingClass();
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getText(obj);
	}

	std::string ItemProvider::getText(const ::ecore::EReference_ptr obj) {
		::ecore::EClass_ptr cl = obj->getEContainingClass();
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getText(obj);
	}

	std::string ItemProvider::getText(const ::ecore::EStructuralFeature_ptr obj) {
		::ecore::EClass_ptr cl = obj->getEContainingClass();
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getText(obj);
	}

	const QPixmap& ItemProvider::getImage(const ::ecore::EObject_ptr obj) {
		::ecore::EClass_ptr cl = obj->eClass();
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getImage(obj);
	}

	const QPixmap& ItemProvider::getImage(const ::ecore::EClass_ptr cl) {
		::ecore::EPackage_ptr pkg = cl->getEPackage();
		auto ip = pkg->getItemProviderInstance();
		if (!ip)
			throw "No ItemProvider has been set";
		return ip->_getImage(cl);
	}

} // namespace ecorecpp
