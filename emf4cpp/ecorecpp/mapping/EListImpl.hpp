// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EListImpl.hpp
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

#ifndef ECORECPP_MAPPING_ELISTIMPL_HPP
#define ECORECPP_MAPPING_ELISTIMPL_HPP

#include <algorithm>
#include <iostream>
#include "EList.hpp"
#include "any.hpp"
#include <ecore/EReference.hpp>
#include <ecorecpp/notify.hpp>

namespace ecorecpp
{
namespace mapping
{

template< typename T >
class EListImpl: public EList< T >
{
public:

    virtual T* get(size_t _index) const
    {
        return m_content[_index];
    }

    virtual void insert_at(size_t _pos, T* _obj)
    {
        m_content[_pos] = _obj;
    }

    virtual void push_back(T* _obj)
    {
        m_content.push_back(_obj);
    }

    virtual size_t size() const
    {
        return m_content.size();
    }

    virtual void clear()
    {
        m_content.clear();
    }

	typename EList<T>::UnderlyingContainer_type::iterator begin() override {
		return m_content.begin();
	}

	typename EList<T>::UnderlyingContainer_type::iterator end() override {
		return m_content.end();
	}

	typename EList<T>::UnderlyingContainer_type::const_iterator begin() const override {
		return m_content.begin();
	}

	typename EList<T>::UnderlyingContainer_type::const_iterator end() const override {
		return m_content.end();
	}

	typename EList<T>::UnderlyingContainer_type::const_iterator cbegin() const override {
		return m_content.cbegin();
	}

	typename EList<T>::UnderlyingContainer_type::const_iterator cend() const override {
		return m_content.cend();
	}

	void remove(T* _obj) override {
		auto it = std::find( m_content.begin(), m_content.end(), _obj );
		remove(it);
	}

	/* Better check before trusting the caller. */
	void remove(typename EList<T>::UnderlyingContainer_type::iterator it) override {
		if (it != m_content.end())
			m_content.erase(it);
	}

    virtual ~EListImpl()
    {
    }

    // TODO: temporal, protected
    EListImpl()
    {
    }

protected:

    typename EList<T>::UnderlyingContainer_type m_content;
};

template< typename T, int upper_bound = -1, bool containment = false,
        bool opposite = false >
class ReferenceEListImpl: public EListImpl< T >
{
public:

    ReferenceEListImpl(::ecore::EObject_ptr _this,
					   ::ecore::EReference_ptr _ref, int _opp = -1) :
		m_this(_this), m_ref(_ref), m_opp(_opp),
		m_containment(*this), m_opposite(*this)
    {
    }

    virtual void insert_at(size_t _pos, T* _obj)
    {
        containment_t< T, containment >::free(base_t::m_content[_pos]);

        base_t::m_content[_pos] = _obj;

		m_containment.set(_obj);
		m_opposite.set(_obj);
    }

    virtual void push_back(T* _obj)
    {
		auto it = std::find( base_t::m_content.begin(), base_t::m_content.end(), _obj );
		if (it == base_t::m_content.end()) {
			base_t::m_content.push_back(_obj);

			m_containment.set(_obj);
			m_opposite.set(_obj);
		}
    }

    virtual void clear()
    {
        containment_t< T, containment >::free_all(base_t::m_content);

        base_t::m_content.clear();
    }

	/* Better check before trusting the caller. */
	void remove(typename EList<T>::UnderlyingContainer_type::iterator it) override {
		if (it != base_t::m_content.end()) {
			T* _obj = *it;
			base_t::m_content.erase(it);

			m_containment.unset(_obj);
			m_opposite.unset(_obj);
		}
	}

	/* Called from the opposite end of a relation: Just remove the object, do
	 * nothing else. */
	void basicRemove(T* _obj) {
		auto it = std::find( base_t::m_content.begin(), base_t::m_content.end(), _obj );
		if (it != base_t::m_content.end()) {
			base_t::m_content.erase(it);
		}
	}

	/* Called from the opposite end of a relation: Just add the object, do
	 * nothing else. */
	void basicAdd(T* _obj) {
		auto it = std::find( base_t::m_content.begin(), base_t::m_content.end(), _obj );
		if (it == base_t::m_content.end()) {
			base_t::m_content.push_back(_obj);
		}
	}

    virtual ~ReferenceEListImpl()
    {
        containment_t< T, containment >::free_all(base_t::m_content);
    }

protected:

    ::ecore::EObject_ptr m_this; // owner object
    ::ecore::EReference_ptr m_ref;
    const int m_opp;

    template< typename Q, bool _free = false >
    struct containment_t
    {
        inline containment_t(ReferenceEListImpl& _parent)
        {
        }

        static inline void free_all(std::vector< Q* >& _v)
        {
        }

        static inline void free(Q* _p)
        {
        }

		inline void set(Q* _p)
        {
        }

		inline void unset(Q* _p)
        {
        }
	};

    template< typename Q >
    struct containment_t< Q, true >
    {
        inline containment_t(ReferenceEListImpl& _parent)
        : m_parent(_parent)
        {
        }

        static inline void free_all(std::vector< Q* >& _v)
        {
            for (size_t i = 0; i < _v.size(); i++)
                delete _v[i];
        }

        static inline void free(Q* _p)
        {
            delete _p;
        }

		inline void set(Q* _p)
        {
			_p->_setEContainer(m_parent.m_this, m_parent.m_ref);
        }

		inline void unset(Q* _p)
        {
			if (_p)
				_p->_setEContainer(nullptr, m_parent.m_ref);
        }

		ReferenceEListImpl& m_parent;
	};

    template< typename Q, bool _opposite = false >
    struct opposite_t
    {
        inline opposite_t(ReferenceEListImpl& _parent)
        {
        }

        inline void set(::ecore::EObject_ptr _obj)
        {
        }

        inline void unset(::ecore::EObject_ptr _obj)
        {
        }
    };

    template< typename Q >
    struct opposite_t< Q, true >
    {
        inline opposite_t(ReferenceEListImpl& _parent)
        : m_parent(_parent)
        {
        }

        inline void set(::ecore::EObject_ptr _obj)
        {
			auto ref = m_parent.m_opp;
			if (ref == -1) // as long as ecore has not been regenerated
				return;
			_obj->_inverseAdd(ref, m_parent.m_this);
        }

        inline void unset(::ecore::EObject_ptr _obj)
        {
			auto ref = m_parent.m_opp;
			if (ref == -1) // as long as ecore has not been regenerated
				return;
			_obj->_inverseRemove(ref, m_parent.m_this);
          }

        ReferenceEListImpl& m_parent;
    };

    typedef EListImpl< T > base_t;

    containment_t< T, containment > m_containment;
    opposite_t< T, opposite > m_opposite;

};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ELISTIMPL_HPP
