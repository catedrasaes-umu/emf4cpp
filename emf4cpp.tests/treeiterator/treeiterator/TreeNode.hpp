// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeNode.hpp
 * This file was created by EMF4CPP 2.0.5 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef TREEITERATOR_TREENODE_HPP
#define TREEITERATOR_TREENODE_HPP

#include <treeiterator_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <treeiterator/dllTreeiterator.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

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
    ::ecore::EString const& getName () const;
    void setName (::ecore::EString const& _name);

    // References
    const ::ecorecpp::mapping::EList< ::treeiterator::TreeNode >& getChildren () const;
    ::ecorecpp::mapping::EList< ::treeiterator::TreeNode >& getChildren ();

    ::treeiterator::Leaf_ptr getLeaf () const;
    void setLeaf (::treeiterator::Leaf_ptr _leaf);

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
    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::treeiterator::TreeNode >> m_children;

    ::treeiterator::Leaf_ptr m_leaf;

};

}
 // treeiterator

#endif // TREEITERATOR_TREENODE_HPP

