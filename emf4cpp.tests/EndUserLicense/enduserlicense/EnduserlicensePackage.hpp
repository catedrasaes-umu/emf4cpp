// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enduserlicense/EnduserlicensePackage.hpp
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

#ifndef _ENDUSERLICENSEPACKAGE_HPP
#define _ENDUSERLICENSEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <enduserlicense_forward.hpp>

namespace enduserlicense
{

    class EnduserlicensePackage: public virtual ::ecore::EPackage
    {
    public:

        static EnduserlicensePackage_ptr _instance();

        // IDs for classifiers

        // EClassifiers methods

        // EStructuralFeatures methods

    protected:

        static std::auto_ptr< EnduserlicensePackage > s_instance;

        EnduserlicensePackage();

        // EClass instances 

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

    };

} // enduserlicense

#endif // _ENDUSERLICENSEPACKAGE_HPP

