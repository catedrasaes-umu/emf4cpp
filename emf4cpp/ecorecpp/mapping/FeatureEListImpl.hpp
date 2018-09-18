// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/FeatureEListimpl.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2018 <matthias.doerfel@inchron.com>
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

#ifndef ECORECPP_MAPPING_FEATUREELISTIMPL_HPP
#define ECORECPP_MAPPING_FEATUREELISTIMPL_HPP

#include <algorithm>
#include "EList.hpp"
#include "any.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EReference.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif


namespace ecorecpp
{
namespace mapping
{

template< typename T >
class FeatureEListImpl: public EList< T >
{
public:
	using ef_ptr = boost::intrusive_ptr<typename EList< T >::ef>;

    virtual T get(size_t _index) const
    {
        return m_content[_index].first;
    }

    typename EList< T >::ef* eFeature(size_t _index) const override
	{
		return m_content[_index].second;
	}

    template< typename Q >
    inline void insert_all(EList< Q >& _q, const ef_ptr& ef)
    {
		EList<T>::insert_all(_q, ef.get());
    }

    void insert_at(size_t _pos, T _obj, const ef_ptr& ef) {
		EList<T>::insert_at(_pos, _obj, ef.get());
	}

	/* The container grows as std::vector<>::insert() does. */
    void insert_at(size_t _pos, T _obj, typename EList< T >::ef* ef) override
    {
		/* Out-of-range positions are appended. */
		if (_pos >= m_content.size())
			return push_back( _obj, ef );

		auto it = m_content.begin() + _pos;
		m_content.insert(it, std::make_pair(_obj, ef));
    }

    void push_back(T _obj, const ef_ptr& ef) {
		push_back(_obj, ef.get());
	}

    void push_back(T _obj, typename EList< T >::ef* ef) override
    {
        m_content.push_back( std::make_pair(_obj, ef) );
    }

    virtual size_t size() const
    {
        return m_content.size();
    }

    virtual void clear()
    {
        m_content.clear();
    }

	void remove(T _obj) override {
		auto pred = [&](const std::pair<T, typename EList< T >::ef*>& cd) {
			return (cd.first == _obj);
		};

		auto it = std::find_if( m_content.begin(), m_content.end(), pred );
		if ( it != m_content.end() )
			m_content.erase(it);
	}

	/* Better check before trusting the caller. */
	void remove(typename EList<T>::iterator it) override {
		if (it != EList<T>::end())
			remove(*it);
	}

    virtual ~FeatureEListImpl()
    {
    }

    FeatureEListImpl()
    {
    }

protected:

	std::vector< std::pair< T, typename EList< T >::ef* > > m_content;
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_FEATUREELISTIMPL_HPP
