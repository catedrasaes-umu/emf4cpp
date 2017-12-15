// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeNode.hpp
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

#ifndef TREEITERATOR_TREENODE_HPP
#define TREEITERATOR_TREENODE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <treeiterator/dllTreeiterator.hpp>
#include <treeiterator_forward.hpp>

#include <ecore_forward.hpp>

#include "TreeiteratorPackage.hpp"

/*PROTECTED REGION ID(TreeNode_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace treeiterator
{

class EXPORT_TREEITERATOR_DLL TreeNode : public virtual ::ecore::EObject
{
public:
    TreeNode();

    virtual ~TreeNode();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::treeiterator::TreeNode_ptr >& getChildren () const;
    virtual ::ecorecpp::mapping::EList< ::treeiterator::TreeNode_ptr >& getChildren ();

    virtual ::treeiterator::Leaf_ptr getLeaf () const;
    virtual void setLeaf (::treeiterator::Leaf_ptr _leaf);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TreeiteratorPackage::TREENODE;

    /*PROTECTED REGION ID(TreeNode) START*/
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

    /*PROTECTED REGION ID(TreeNodeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TreeNode_ptr _this()
    {   return TreeNode_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::treeiterator::TreeNode_ptr >> m_children;

    ::treeiterator::Leaf_ptr m_leaf;

};

}
 // treeiterator

#endif // TREEITERATOR_TREENODE_HPP

