// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/simple_xml_parser.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * Ecore2CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ecore2CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

////////////////////////////////////////////////////////////////////////
// parser
// based on the wonderful yard parser http://code.google.com/p/yardparser/

#ifndef __PARSER_HPP
#define	__PARSER_HPP

#include <deque>
#include <cassert>
#include <sstream>
#include <map> // std::pair
#include <typeinfo>

#ifdef __GNUG__
#define EXPECT_TRUE(x) __builtin_expect (x, 1)
#define EXPECT_FALSE(x) __builtin_expect (x, 0)
#else
#define EXPECT_TRUE(x) x
#define EXPECT_FALSE(x) x
#endif

namespace parser
{

typedef std::pair< const char*, size_t > match_pair;

// Fwd
template <typename T>
struct typed_node;

struct node
{
    node* parent;
    typedef std::deque<node*> child_list_t;
    child_list_t children;
    match_pair p;

    virtual ~node()
    {
	if (children.empty()) return;
        for (child_list_t::iterator it = children.begin();
             it != children.end();
             ++it)
            delete *it;
    }

    template<typename N>
    inline typed_node<N>* new_child()
    {
        typed_node<N>* n = new typed_node<N>();
        n->parent = this;
        children.push_back (n);
        return n;
    }

    inline void abbandon_child(node* c)
    {
        for (child_list_t::iterator it = children.begin();
             it != children.end(); ++it)
            if  (*it == c)
            {
                delete *it;
                children.erase (it);
                return;
            }
    }

    inline void complete (match_pair const& _p)
    {
        p = _p;
    }

    template <typename T>
    inline bool isOfType() const
    {
        return typeid(T) == get_type_info();
    }

    // Iterator
    template<typename T>
    struct type_select_iterator
    {
        type_select_iterator()
        {
        }

        type_select_iterator (child_list_t::const_iterator it_,
                              const child_list_t* c)
            : it (it_), children (c)
        {
            _next();
        }

        type_select_iterator (type_select_iterator const& f)
        {
            it = f.it;
            children = f.children;
        }

        bool operator==(type_select_iterator const& i)
        {
            return it == i.it;
        }

        bool operator!=(type_select_iterator const& i)
        {
            return !(i.it == it);
        }

        type_select_iterator& operator++()
        {
            if (it != children->end())
                ++it;
            _next();
            return *this;
        }

        type_select_iterator& operator++(int)
        {
            if (it != children->end())
                ++it;
            _next();
            return *this;
        }

        node* const& operator*() const
        {
            return *it;
        }

        node const& operator->() const
        {
            return &(operator*());
        }

    private:
        void _next()
        {
            while ( it != children->end() &&
                    (*it)->get_type_info() != typeid(T))
                ++it;
        }

        child_list_t::const_iterator it;
        const child_list_t* children;
    };

    template<typename T>
    type_select_iterator<T>
    type_select_begin() const
    {
        return type_select_iterator< T > (children.begin(), &children);
    }

    template<typename T>
    type_select_iterator<T>
    type_select_end() const
    {
        return type_select_iterator< T > (children.end(), &children);
    }

    template<typename T>
    child_list_t
    type_select() const
    {
        child_list_t ret;
        type_select_iterator<T> it = type_select_begin<T>(),
            end = type_select_end<T>();
        while(it != end)
        {
            ret.push_back (*it);
            ++it;
        }
        return ret;
    }

    // subtype interface
    virtual std::type_info const& get_type_info() const = 0;
};

template <typename T>
struct typed_node : public node
{
    inline std::type_info const& get_type_info() const
    {
        return typeid(T);
    }
};


struct SemanticState
{
    inline SemanticState()
    {
    }
};


////////////////////////////////////////////////////////////////////////
// parser state
template< typename SemanticState >
struct State
{
    // For reference, the SemanticState itself.
    typedef SemanticState SemType;

    // buffer
    const char* buf_;
    // actual pos
    const char* pos_;
    // buf_fer length
    size_t len_;

    // The inner semantic state.
    SemanticState& ss_;

    // State stack, for backtracking
    std::deque< const char* > pos_stack_;

    // ctor
    State(SemanticState& ss, const char* b, size_t l) :
        buf_(b), pos_(b), len_(l), ss_(ss),
        root_ (new typed_node<SemanticState>())
    {
        root_->parent = 0;
        current_ = root_;
    }

    ~State()
    {
        delete root_;
    }

    SemanticState&
    semantic_state()
    {
        return ss_;
    }

    inline bool at_end() const
    {
        return static_cast< size_t > (pos_ - buf_) == len_;
    }

    inline bool match_at_pos_advance(char c)
    {
        if (!at_end() && (*pos_ == c))
        {
            ++pos_;
            return true;
        }
        return false;
    }

    inline bool match_at_pos(char c) const
    {
        return !at_end() && (*pos_ == c);
    }

    inline char char_at_pos() const
    {
        return *pos_;
    }

    inline const char* pos() const
    {
        return pos_;
    }

    inline void advance()
    {
        if (EXPECT_TRUE (!at_end()))
            ++pos_;

        // TODO: throw at_end
    }

    inline size_t left() const
    {
        return static_cast< size_t > (pos_ - buf_) - len_;
    }

    inline void skip(size_t how_many)
    {
        if (left() <= how_many)
            pos_ += how_many;

        // TODO: throw at_end
    }

    // Common interface
    inline void push_state()
    {
        pos_stack_.push_front(pos_);
    }

    inline void rollback()
    {
        pos_ = pos_stack_.front();
        pos_stack_.pop_front();
    }

    inline void commit()
    {
        pos_stack_.pop_front();
    }

    // AST /////////////////////////////////////////////////////////7xs
    // root node
    node* root_;
    node* current_;

    node*
    root()
    {
        return root_;
    }

    template <typename T>
    node* create_node()
    {
        return current_ = current_->new_child<T>();
    }

    void abbandon_node()
    {
        node* parent = current_->parent;
        parent->abbandon_child (current_);
        current_ = parent;
    }

    void commit_node(match_pair const& p )
    {
        current_->complete (p);
        current_ = current_->parent;
    }
};

template< bool b >
struct identity
{
    template< typename whatever >
    static inline bool match(whatever const&)
    {
        return b;
    }
};

typedef identity< true > true_;
typedef identity< false > false_;

// lambda, empty rule
typedef true_ empty_;

// Store
template <typename Rule>
struct STORE
{
    template <typename S>
    static inline bool match (S& state)
    {
        const char* p = state.pos();

        // Do a node hint.
        state.template create_node<Rule>();

        // Try the rule itself
        bool result = Rule::match (state);
        if (result)
        {
            state.commit_node (std::make_pair (p, state.pos() - p));
            return true;
        }

        // Failed
        state.abbandon_node();
        return false;
    }
};

// end of input
struct eoi_
{
    template< typename S >
    static inline bool match(S & state)
    {
        return state.at_end();
    }
};

template< char c >
struct char_
{
    template< typename S >
    static inline bool match(S & state)
    {
        return state.match_at_pos_advance(c);
    }
};

// NOTE: I could have implemented this thing other way
// but it would need a negative match with another Truth Environment
// or something...
template< char c >
struct notchar_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (EXPECT_FALSE (state.at_end()))
            return false;

        if (EXPECT_FALSE (state.match_at_pos(c)))
            return false;

        state.advance();
        return true;
    }
};

template< char c0, char c1,
          char c2 = 0, char c3 = 0,
          char c4 = 0, char c5 = 0,
          char c6 = 0, char c7 = 0,
          char c8 = 0, char c9 = 0,
          char c10 = 0>
struct notchar_inlist_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (EXPECT_FALSE (state.at_end()))
            return false;

        char c = state.char_at_pos();
        if (c == c0 || c == c1 || c == c2 || c == c3 || c == c4 ||
            c == c5 || c == c6 || c == c7 || c == c8 || c == c9 ||
            c == c10)
            return false;

        state.advance();
        return true;
    }
};


// wcharacter range, not inclusive
template< char c1, char c2 >
struct crange_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (EXPECT_FALSE (state.at_end()))
            return false;
        char c = state.char_at_pos();
        if (EXPECT_TRUE (c >= c1 && c < c2))
        {
            state.advance();
            return true;
        }
        return false;
    }
};

// wcharacter range, inclusive
template< char c1, char c2 >
struct cirange_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (EXPECT_FALSE (state.at_end()))
            return false;
        char c = state.char_at_pos();
        if (EXPECT_TRUE (c >= c1 && c <= c2))
        {
            state.advance();
            return true;
        }
        return false;
    }
};

struct anychar_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (EXPECT_FALSE (state.at_end()))
            return false;
        state.advance();
        return true;
    }
};


// Ordered sequence of elements: abc
template< typename C0, typename C1, typename C2 = true_, typename C3 = true_,
          typename C4 = true_, typename C5 = true_, typename C6 = true_,
          typename C7 = true_, typename C8 = true_, typename C9 = true_,
          typename C10 = true_, typename C11 = true_, typename C12 = true_,
          typename C13 = true_, typename C14 = true_>
struct seq_
{
    template< typename S >
    static inline bool match(S & state)
    {
        state.push_state();

        bool var = C0::match(state) && C1::match(state) && C2::match(state)
            && C3::match(state) && C4::match(state) && C5::match(state)
            && C6::match(state) && C7::match(state)
            && C8::match(state) && C9::match(state)
            && C10::match(state) && C11::match(state)
            && C12::match (state) && C13::match (state)
            && C14::match (state);
        var ? state.commit() : state.rollback();

        return var;
    }
};

// Element decission: a|b
template< typename C0, typename C1, typename C2 = false_, typename C3 = false_,
        typename C4 = false_, typename C5 = false_, typename C6 = false_,
        typename C7 = false_ >
struct or_
{
    template< typename S >
    static inline bool match(S & state)
    {
        state.push_state();

        bool var = C0::match(state) || C1::match(state) || C2::match(state)
                || C3::match(state) || C4::match(state) || C5::match(state)
                || C6::match(state) || C7::match(state);

        var ? state.commit() : state.rollback();

        return var;
    }
};

// One or more repetitions: a+
template< typename C0 >
struct plus_
{
    template< typename S >
    static inline bool match(S & state)
    {
        if (!C0::match(state))
            return false;
        // Note: yes, I unroll this loop intentionally
        while (C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state))
            ;
        return true;
    }
};

// Zero or more repetitions: a*
template< typename C0 >
struct star_
{
    template< typename S >
    static inline bool match(S & state)
    {
        while (C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state) && C0::match(state) && C0::match(state)
                && C0::match(state))
            ;
        return true;
    }
};

// Optional (special star_ case): a?
template< typename C0 >
struct opt_
{
    template< typename S >
    static inline bool match(S & state)
    {
        C0::match(state);
        return true;
    }
};

namespace expr_grammar
{

// space
struct space  : or_< char_< ' ' > , char_< '\t' > , char_< '\n' > , char_< '\r' > >
{
};

// One or more spaces
struct spaces_: plus_< space >
{
};

struct number_ : plus_< cirange_<'0', '9'> >
{
};

struct s_number_ : STORE<number_>
{
};

// fwd
struct expr_;

struct mult_op_ : seq_ < s_number_, opt_< seq_<  char_<'*'>, expr_ > > >
{
};


struct s_mult_op_ : STORE < mult_op_ >
{
};


struct right_expr_ : seq_ < char_ <'+'> , s_mult_op_ >
{
};

struct s_right_expr_ : star_< STORE<right_expr_> >
{
};

struct expr_ : seq_ < s_mult_op_, s_right_expr_ , eoi_ >
{
};

struct s_expr_ : STORE <expr_>
{
};

} // expr_grammar

namespace km3_grammar
{

struct package_kw : seq_< char_<'p'>, char_<'a'>, char_<'c'>, char_<'k'>,
                          char_<'a'>, char_<'g'>, char_<'e'> >
{
};

struct class_kw : seq_< char_<'c'>, char_<'l'>, char_<'a'>, char_<'s'>,
                        char_<'s'> >
{
};

struct extends_kw : seq_< char_<'e'>, char_<'x'>, char_<'t'>, char_<'e'>,
                          char_<'n'>, char_<'d'>, char_<'s'> >
{
};

struct attribute_kw : seq_< char_<'a'>, char_<'t'>, char_<'t'>, char_<'r'>,
                            char_<'i'>, char_<'b'>, char_<'u'>, char_<'t'>,
                            char_<'e'> >
{
};

struct abstract_kw : seq_< char_<'a'>, char_<'b'>, char_<'s'>, char_<'t'>,
                           char_<'r'>, char_<'a'>, char_<'c'>, char_<'t'> >
{
};

struct reference_kw : seq_< char_<'r'>, char_<'e'>, char_<'f'>, char_<'e'>,
                            char_<'r'>, char_<'e'>, char_<'n'>, char_<'c'>,
                            char_<'e'> >
{
};

struct oppositeOf_kw : seq_< char_<'o'>, char_<'p'>, char_<'p'>, char_<'o'>,
                             char_<'s'>, char_<'i'>, char_<'t'>, char_<'e'>,
                             char_<'O'>, char_<'f'> >
{
};

struct ordered_kw : seq_< char_<'o'>, char_<'r'>, char_<'d'>, char_<'e'>,
                          char_<'r'>, char_<'e'>, char_<'d'> >
{
};

struct container_kw : seq_< char_<'c'>, char_<'o'>, char_<'n'>, char_<'t'>,
                            char_<'a'>, char_<'i'>, char_<'n'>, char_<'e'>,
                            char_<'r'> >
{
};

struct enumeration_kw : seq_< char_<'e'>, char_<'n'>, char_<'u'>, char_<'m'>,
                              char_<'e'>, char_<'r'>, char_<'a'>, char_<'t'>,
                              char_<'i'>, char_<'o'>, char_<'n'> >
{
};

struct literal_kw : seq_< char_<'l'>, char_<'i'>, char_<'t'>, char_<'e'>,
                          char_<'r'>, char_<'a'>, char_<'l'> >
{
};

struct datatype_kw : seq_ < char_<'d'>, char_<'a'>, char_<'t'>, char_<'a'>,
                            char_<'t'>, char_<'y'>, char_<'p'>, char_<'e'> >
{
};

// space
struct space  : or_< char_< ' ' > , char_< '\t' > , char_< '\n' > , char_< '\r' > >
{
};

// One or more spaces
struct spaces: plus_< space >
{
};


// Comment
struct comment : seq_< char_<'-'>, char_<'-'> , star_ < notchar_< '\n' > >, char_<'\n'> >
{
};

struct ignore : star_< or_ < comment, spaces > >
{
};

struct number: plus_< cirange_<'0', '9'> >
{
};

struct mult_item : or_ < number, char_<'*'> >
{
};

struct s_mult_item : STORE<mult_item>
{
};

struct multiplicity : seq_< char_<'['>,
                            seq_ < s_mult_item,
                                   opt_< seq_< char_<'-'>, s_mult_item > > >,
                            char_<']'> >
{
};

struct s_multiplicity: STORE<multiplicity>
{
};

struct id : seq_ < or_< cirange_<'a', 'z'>, cirange_<'A', 'Z' >,
                        char_<'_'> > ,
                   star_< or_< cirange_<'a', 'z'>, cirange_<'A', 'Z' >,
                        cirange_<'0', '9'>,
                               char_<'_'> > > >
{
};

struct s_id : STORE<id>
{
};

struct attribute : seq_< attribute_kw, spaces, s_id,
                         opt_<spaces>,
                         opt_<s_multiplicity>,
                         opt_<spaces>,
                         char_<':'>,
                         opt_<spaces>,
                         s_id,
                         opt_<spaces>,
                         char_<';'> >
{
};

struct s_attribute : STORE <attribute>
{
};

struct s_ref_kind_kw : or_ < STORE< ordered_kw >, STORE<container_kw> >
{
};

struct ref_kind : seq_< s_ref_kind_kw,
                        star_< seq_ < spaces, s_ref_kind_kw > > >
{
};

struct ref_opposite : seq_ < oppositeOf_kw, spaces, s_id >
{
};

struct s_ref_opposite: STORE <ref_opposite>
{
};

struct reference : seq_< reference_kw, spaces, s_id,
                         opt_<spaces>,
                         opt_<s_multiplicity>,
                         opt_<spaces>,
                         opt_<ref_kind>,
                         opt_<spaces>,
                         char_<':'>,
                         opt_<spaces>,
                         s_id,
                         opt_<spaces>,
                         opt_<s_ref_opposite>,
                         char_<';'> >
{
};

struct s_reference : STORE<reference>
{
};


struct extends : seq_< extends_kw, spaces, s_id,
                       star_< seq_< ignore, char_<','>, ignore, s_id > > >
{
};

struct s_extends : STORE<extends>
{
};

struct class_body:  or_< plus_ <seq_< ignore,
                                      or_< s_attribute, s_reference>,
                                      ignore > >,
                         ignore>
{
};

struct s_class_body : STORE<class_body>
{
};

struct class_common : seq_ < spaces, s_id,  ignore, opt_< s_extends >, ignore,
                             char_<'{'>,
                             s_class_body,
                             char_<'}'> >
{
};

struct a_class : seq_ < abstract_kw, spaces, class_kw, class_common >
{
};

struct na_class : seq_ < class_kw, class_common >
{
};

struct s_class_ : or_ < STORE<a_class>, STORE<na_class> >
{
};

struct datatype : seq_ < datatype_kw, spaces, s_id, opt_<spaces>, char_ <';' > >
{
};

struct s_datatype: STORE<datatype>
{
};

struct literal : seq_< literal_kw, spaces, s_id, opt_<spaces>, char_<';'> >
{
};

struct s_literal : STORE<literal>
{
};

struct enumeration_body : plus_< seq_< ignore, s_literal, ignore > >
{
};

struct s_enumeration_body: STORE<enumeration_body>
{
};

struct enumeration : seq_< enumeration_kw, spaces, s_id, ignore,
                           char_<'{'>,
                           s_enumeration_body,
                           char_<'}'> >
{
};

struct s_enumeration : STORE <enumeration>
{
};

struct classifier : or_< s_enumeration, s_class_, s_datatype >
{
};


// fwd
struct s_package;

// Package body can only contain classifier elements or other packages
struct package_body : plus_< seq_< ignore, or_< classifier, s_package>, ignore > >
{
};

struct s_package_body : STORE<package_body>
{
};

struct package : seq_< package_kw, spaces, s_id, ignore,
                       char_<'{'>,
                       s_package_body,
                       char_<'}'> >
{
};

struct s_package : STORE<package>
{
};

struct spec : seq_< plus_< seq_< ignore, s_package, ignore > >, eoi_ >
{
};

struct s_spec: STORE<spec>
{
};


} // km3_grammar

} // parser

#endif	/* __PARSER_HPP */
