// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackagePackage.hpp
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

#ifndef _TOPLEVELPACKAGEPACKAGE_HPP
#define _TOPLEVELPACKAGEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <TopLevelPackage_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{

class EXPORT_TOPLEVELPACKAGE_DLL TopLevelPackagePackage : public virtual ::ecore::EPackage
{
public:

    static TopLevelPackagePackage_ptr _instance();
    static TopLevelPackagePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int TOPLEVELCLASS = 0;

    // IDs for classifiers for class TopLevelClass 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getTopLevelClass();

    // EStructuralFeatures methods

protected:

    static std::unique_ptr< TopLevelPackagePackage, ::ecorecpp::PackageDeleter<TopLevelPackagePackage> > s_instance;

    TopLevelPackagePackage();

    // EClass instances 

    ::ecore::EClass_ptr m_TopLevelClassEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

};

}
 // TopLevelPackage

#endif // _TOPLEVELPACKAGEPACKAGE_HPP

