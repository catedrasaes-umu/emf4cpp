// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClass.hpp
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

#ifndef ECORE_ECLASS_HPP
#define ECORE_ECLASS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/EClassifier.hpp>

/*PROTECTED REGION ID(EClass_pre) ENABLED START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
#ifdef ECORECPP_USE_UNORDERED_MAP
#ifdef  __GNUG__
#include <tr1/unordered_map>
#endif // __GNUG__
#ifdef _MSC_VER // TODO: look for version numbers of MS VC
#include <unordered_map>
#endif // _MSC_VER
#else
#include <map>
#endif // ECORECPP_USE_UNORDERED_MAP
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EClass : public virtual ::ecore::EClassifier
{
public:
    EClass();

    virtual ~EClass();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean isSuperTypeOf ( ::ecore::EClass_ptr _someClass);

    virtual ::ecore::EInt getFeatureCount ();

    virtual ::ecore::EStructuralFeature_ptr getEStructuralFeature ( ::ecore::EInt _featureID);

    virtual ::ecore::EInt getFeatureID ( ::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EStructuralFeature_ptr getEStructuralFeature ( ::ecore::EString const& _featureName);

    virtual ::ecore::EInt getOperationCount ();

    virtual ::ecore::EOperation_ptr getEOperation ( ::ecore::EInt _operationID);

    virtual ::ecore::EInt getOperationID ( ::ecore::EOperation_ptr _operation);

    virtual ::ecore::EOperation_ptr getOverride ( ::ecore::EOperation_ptr _operation);

    // Attributes
    virtual ::ecore::EBoolean isAbstract () const;
    virtual void setAbstract (::ecore::EBoolean _abstract);

    virtual ::ecore::EBoolean isInterface () const;
    virtual void setInterface (::ecore::EBoolean _interface);

    // References
    virtual const ::ecorecpp::mapping::EList< ::ecore::EClass >& getESuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClass >& getESuperTypes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EOperation >& getEOperations () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EOperation >& getEOperations ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEAllAttributes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEAllAttributes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference >& getEAllReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference >& getEAllReferences ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference >& getEReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference >& getEReferences ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEAttributes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute >& getEAttributes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference >& getEAllContainments () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference >& getEAllContainments ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EOperation >& getEAllOperations () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EOperation >& getEAllOperations ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& getEAllStructuralFeatures () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& getEAllStructuralFeatures ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EClass >& getEAllSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClass >& getEAllSuperTypes ();

    virtual ::ecore::EAttribute_ptr getEIDAttribute () const;
    virtual void setEIDAttribute (::ecore::EAttribute_ptr _eIDAttribute);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& getEStructuralFeatures () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >& getEStructuralFeatures ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEGenericSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEGenericSuperTypes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEAllGenericSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType >& getEAllGenericSuperTypes ();

    /*PROTECTED REGION ID(EClass) ENABLED START*/

protected:

#ifdef ECORECPP_USE_UNORDERED_MAP
    typedef std::tr1::unordered_map < ::ecore::EString, ::ecore::EStructuralFeature_ptr > EStructuralFeatureMap;
#else
    typedef std::map< ::ecore::EString, ::ecore::EStructuralFeature_ptr > EStructuralFeatureMap;
#endif

    EStructuralFeatureMap m_eAllStructuralFeaturesMap;

    void _init_collections();
public:
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EClassImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EBoolean m_abstract;

    ::ecore::EBoolean m_interface;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EClass >> m_eSuperTypes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EOperation >> m_eOperations;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EAttribute >> m_eAllAttributes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EReference >> m_eAllReferences;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EReference >> m_eReferences;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EAttribute >> m_eAttributes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EReference >> m_eAllContainments;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EOperation >> m_eAllOperations;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >> m_eAllStructuralFeatures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EClass >> m_eAllSuperTypes;

    ::ecore::EAttribute_ptr m_eIDAttribute;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EStructuralFeature >> m_eStructuralFeatures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EGenericType >> m_eGenericSuperTypes;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EGenericType >> m_eAllGenericSuperTypes;

};

}
 // ecore

#endif // ECORE_ECLASS_HPP

