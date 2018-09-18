// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; c-file-offsets: ((innamespace . [4])); -*-
/*
 * ItemProvider.hpp
 * Copyright (C) INCHRON GmbH 2016 <matthias.doerfel@inchron.com>
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
#ifndef ItemProvider_HPP
#define ItemProvider_HPP

#include <ecore_forward.hpp>
#include <string>

#ifndef QT5_SUPPORT
#define QT5_SUPPORT
#endif

#ifdef QT5_SUPPORT
class QPixmap;
#endif

#include "dllEcorecpp.hpp"

namespace ecorecpp
{
	class EXPORT_ECORECPP_DLL ItemProvider {
	public:
		ItemProvider();
		virtual ~ItemProvider();
		
		/** Returns a label for the EObject, which can be shown to the
		 * user.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static std::string getText(const ::ecore::EObject_ptr);

		/** Returns a label for the EClass, which can be shown to the user.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static std::string getText(const ::ecore::EClass_ptr);

		/** Returns a label for the EAttribute, which can be shown to the
		 * user.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static std::string getText(const ::ecore::EAttribute_ptr);

		/** Returns a label for the EReference, which can be shown to the
		 * user.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static std::string getText(const ::ecore::EReference_ptr);

		/** Returns a label for the EStructuralFeature, which can be shown to
		 * the user.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static std::string getText(const ::ecore::EStructuralFeature_ptr);


		/** Returns a label for the EObject, which can be shown to the
		 * user.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual std::string _getText(const ::ecore::EObject_ptr) const = 0;

		/** Returns a label for the EClass, which can be shown to the
		 * user.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual std::string _getText(const ::ecore::EClass_ptr) const = 0;

		/** Returns a label for the EAttribute, which can be shown to the
		 * user.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual std::string _getText(const ::ecore::EAttribute_ptr) const = 0;

		/** Returns a label for the EReference, which can be shown to the
		 * user.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual std::string _getText(const ::ecore::EReference_ptr) const = 0;

		/** Returns a label for the EStructuralFeature, which can be shown to
		 * the user.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual std::string _getText(const ::ecore::EStructuralFeature_ptr) const = 0;


#ifdef QT5_SUPPORT

		/** Returns a pixmap for use in a UI, e.g. a QStandardItemModel.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static const QPixmap& getImage(const ::ecore::EObject_ptr);

		/** Returns a pixmap for use in a UI, e.g. a QStandardItemModel.
		 *
		 * The static version of getText() dispatches to the ItemProvider of
		 * the specific EPackage, which knows all the details. */
		static const QPixmap& getImage(const ::ecore::EClass_ptr);

		/** Returns a pixmap for use in a UI, e.g. a QStandardItemModel.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual const QPixmap& _getImage(const ::ecore::EObject_ptr) const = 0;

		/** Returns a pixmap for use in a UI, e.g. a QStandardItemModel.
		 *
		 * A concrete ItemProvider, which belongs to an EPackage, needs to
		 * reimplement this method. */
		virtual const QPixmap& _getImage(const ::ecore::EClass_ptr) const = 0;

#endif // QT5_SUPPORT

	};

	typedef ItemProvider* ItemProvider_ptr;

} // namespace ecorecpp

#endif
