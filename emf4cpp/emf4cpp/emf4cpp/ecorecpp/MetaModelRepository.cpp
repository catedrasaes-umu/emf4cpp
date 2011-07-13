// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * MetaModelRepository.cpp
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

#include "MetaModelRepository.hpp"
#include <ecore/EcorePackage.hpp>

using namespace ::ecorecpp;

std::auto_ptr< MetaModelRepository > MetaModelRepository::m_instance;

MetaModelRepository_ptr MetaModelRepository::_instance()
{
    if (m_instance.get() == NULL)
        m_instance.reset(new MetaModelRepository);
    return m_instance.get();
}

MetaModelRepository::MetaModelRepository()
{
    load(::ecore::EcorePackage::_instance());
}

MetaModelRepository::~MetaModelRepository()
{
}

::ecore::EPackage_ptr MetaModelRepository::getByNSPrefix(
        ::ecore::EString const & _prefix) const
{
    return m_by_nsPrefix.at(_prefix);
}

::ecore::EPackage_ptr MetaModelRepository::getByNSURI(::ecore::EString const& _uri) const
{
    return m_by_nsURI.at(_uri);
}

::ecore::EPackage_ptr MetaModelRepository::getByName(::ecore::EString const& _name) const
{
    return m_by_name.at(_name);
}

void MetaModelRepository::load(::ecore::EPackage_ptr _mm)
{
    ::ecore::EString _name = _mm->getName();
    ::ecore::EString _prefix = _mm->getNsPrefix();
    ::ecore::EString _uri = _mm->getNsURI();

    if (!_name.empty())
        m_by_name[_name] = _mm;

    if (!_prefix.empty())
        m_by_nsPrefix[_prefix] = _mm;

    if (!_uri.empty())
        m_by_nsURI[_uri] = _mm;
}
