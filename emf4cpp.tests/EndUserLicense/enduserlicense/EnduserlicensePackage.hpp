// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enduserlicense/EnduserlicensePackage.hpp
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

#ifndef _ENDUSERLICENSEPACKAGE_HPP
#define _ENDUSERLICENSEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <enduserlicense_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <enduserlicense/dllEnduserlicense.hpp>

namespace enduserlicense
{

class EXPORT_ENDUSERLICENSE_DLL EnduserlicensePackage : public virtual ::ecore::EPackage
{
public:

    static EnduserlicensePackage_ptr _instance();
    static EnduserlicensePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    // EClassifiers methods

    // EStructuralFeatures methods

protected:

    static boost::intrusive_ptr< EnduserlicensePackage > s_instance;

    EnduserlicensePackage();
    void _initPackage();

    // EClass instances 

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

};

}
 // enduserlicense

#endif // _ENDUSERLICENSEPACKAGE_HPP

