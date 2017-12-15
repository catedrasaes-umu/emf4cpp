// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EList.hpp
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

#ifndef ECORECPP_MAPPING_ELIST_HPP
#define ECORECPP_MAPPING_ELIST_HPP

#include <memory>
#include <type_traits>
#include <vector>

#include <ecore_forward.hpp>

namespace ecorecpp
{
namespace mapping
{

template< typename T >
class EList : public std::enable_shared_from_this<EList<T>> {
public:

    typedef std::shared_ptr<EList<T>> ptr_type;
    typedef std::shared_ptr<const EList<T>> ptr_const_type;
	typedef std::vector<T> UnderlyingContainer_type;

	/** Iterator interfaces for an EList<T>.
	 */

	template <typename EListPtrType>
	class EListIterator : public std::iterator<std::bidirectional_iterator_tag, T> {
	public:
		EListIterator(EListPtrType el, size_t ind)
			: _elist(el),
			  _ind(ind) {
		}

		T operator*() const {
			return _elist->get(_ind);
		}

		EListIterator& operator--() {
			--_ind;
		    return *this;
		}

		EListIterator operator--(int) {
			EListIterator old(*this);
			--(*this);
			return old;
		}

		EListIterator& operator++() {
			++_ind;
		    return *this;
		}

		EListIterator operator++(int) {
			EListIterator old(*this);
			++(*this);
			return old;
		}

		bool operator==(const EListIterator& rhs) const {
		    return ( _elist == rhs._elist
					&& _ind == rhs._ind );
		}

		bool operator!=(const EListIterator& rhs) const {
			return !(*this == rhs);
		}

		bool hasNext() const {
			return ((int64_t)_ind < (int64_t)_elist->size() - 1);
		}

		const EList<T>::ptr_type& getEList() const {
			return _elist;
		}

		size_t getIndex() const {
			return _ind;
		}

	private:
		EListPtrType _elist;
		size_t _ind;
	};

	typedef EListIterator<ptr_type> iterator;
	typedef EListIterator<ptr_const_type> const_iterator;
	// End of iterator interface


    inline T operator[](size_t _index) const
    {
        return get(_index);
    }

    template< typename Q >
    inline void insert_all(EList< Q >& _q)
    {
        ptr_type _p(_q.template asEListOf< T >());

        for (size_t i = 0; i < _p->size(); i++)
            push_back(_p->get(i));
    }

    inline void insert_all(EList& _q)
    {
        for (size_t i = 0; i < _q.size(); i++)
            push_back(_q.get(i));
    }

    virtual void insert_at(size_t _pos, T _obj) = 0;

    virtual T get(size_t _index) const = 0;

    virtual void push_back(T _obj) = 0;

    virtual size_t size() const = 0;

    virtual void clear() = 0;

	iterator begin() {
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return iterator(this_shared, 0);
	}

	iterator end() {
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return iterator(this_shared, size());
	}

	const_iterator begin() const {
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return const_iterator(this_shared, 0);
	}

	const_iterator end() const {
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return const_iterator(this_shared, size());
	}

	const_iterator cbegin() const {
		return begin();
	}

	const_iterator cend() const {
		return end();
	}

	virtual void remove(T) = 0;
	virtual void remove(iterator) = 0;

    /**
     * Allows for treating an EList<T> as EList<Q> (if T can be casted to Q dynamically)
     */
    template< typename Q >
    inline typename EList< Q >::ptr_type asEListOf()
    {
        return std::make_shared<DelegateEList< Q, T >>(*this);
    }

    virtual ~EList()
    {
    }

protected:
    EList()
    {
    }
};

/**
 * Ofrece la interfaz de una lista EList<T> para una EList<Q>
 * TODO: throw exception
 */
template< typename T, typename Q >
class DelegateEList: public EList< T >
{
public:

    typedef EList< Q > list_t;

    DelegateEList(list_t& _delegate) :
        m_delegate(_delegate)
    {
    }

    virtual T get(size_t _index) const
    {
        return _cast< Q, T >::do_cast(m_delegate[_index]);
    }

	virtual void insert_at(size_t _pos, T _obj)
    {
        m_delegate.insert_at(_pos, _cast< T, Q >::do_cast(_obj));
    }

    virtual void push_back(T _obj)
    {
        m_delegate.push_back(_cast< T, Q >::do_cast(_obj));
    }

    virtual size_t size() const
    {
        return m_delegate.size();
    }

    virtual void clear()
    {
        m_delegate.clear();
    }

	void remove(T obj) override {
		m_delegate.remove(_cast< T, Q >::do_cast(obj));
	}

	void remove( typename EList<T>::iterator it) override {
		if ( it != EList<T>::end() )
			remove(*it);
	}

    virtual ~DelegateEList()
    {
    }

protected:

    list_t& m_delegate;

    template< typename A, typename B >
    struct _cast
    {
		static inline B do_cast(A a)
        {
            return dynamic_cast< typename B::element_type* > (a.get());
        }
	};

    template< typename A >
    struct _cast< A, A >
    {
        static inline A do_cast(A a)
        {
            return a;
        }
    };
};


} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ELIST_HPP
