// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BinTreeNode.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#ifndef BINTREE_BINTREENODE_HPP
#define BINTREE_BINTREENODE_HPP

#include <bintree_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <bintree/dllBintree.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(BinTreeNode_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace bintree
{

class EXPORT_BINTREE_DLL BinTreeNode : public virtual ::ecore::EObject

{
public:
    BinTreeNode();

    virtual ~BinTreeNode();

    virtual void _initialize();

    // Operations

    // Attributes
    ::ecore::EString const& getData () const;
    void setData (::ecore::EString const& _data);

    // References
    ::bintree::BinTreeNode_ptr getParent () const;
    void setParent (::bintree::BinTreeNode_ptr _parent);

    ::bintree::BinTreeNode_ptr getLeft () const;
    void setLeft (::bintree::BinTreeNode_ptr _left);

    ::bintree::BinTreeNode_ptr getRight () const;
    void setRight (::bintree::BinTreeNode_ptr _right);

    /*PROTECTED REGION ID(BinTreeNode) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(BinTreeNodeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EString m_data;

    // References

    ::bintree::BinTreeNode_ptr m_parent;

    ::bintree::BinTreeNode_ptr m_left;

    ::bintree::BinTreeNode_ptr m_right;

};

}
 // bintree

#endif // BINTREE_BINTREENODE_HPP

