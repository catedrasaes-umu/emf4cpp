// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackage.hpp
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

#ifndef ECORE_EPACKAGE_HPP
#define ECORE_EPACKAGE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ENamedElement.hpp>

/*PROTECTED REGION ID(EPackage_pre) ENABLED START*/
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

#include <memory>
#include <ecorecpp/ItemProvider.hpp>

/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EPackage : public virtual ::ecore::ENamedElement
{
public:
    EPackage();

    virtual ~EPackage();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EClassifier_ptr getEClassifier ( ::ecore::EString const& _name);

    // Attributes
    virtual ::ecore::EString const& getNsURI () const;
    virtual void setNsURI (::ecore::EString const& _nsURI);

    virtual ::ecore::EString const& getNsPrefix () const;
    virtual void setNsPrefix (::ecore::EString const& _nsPrefix);

    // References
    virtual ::ecore::EFactory_ptr getEFactoryInstance () const;
    virtual void setEFactoryInstance (::ecore::EFactory_ptr _eFactoryInstance);
    virtual ::ecore::EFactory_ptr basicgetEFactoryInstance ();
    virtual void basicsetEFactoryInstance (::ecore::EFactory_ptr _eFactoryInstance);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EClassifier >& getEClassifiers () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClassifier >& getEClassifiers ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EPackage >& getESubpackages () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EPackage >& getESubpackages ();

    virtual ::ecore::EPackage_ptr getESuperPackage () const;
    virtual void setESuperPackage (::ecore::EPackage_ptr _eSuperPackage);
    virtual ::ecore::EPackage_ptr basicgetESuperPackage ();
    virtual void basicsetESuperPackage (::ecore::EPackage_ptr _eSuperPackage);

    /*PROTECTED REGION ID(EPackage) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
protected:
    // Hardcoded map to speed up getEClassifier operation

#ifdef ECORECPP_USE_UNORDERED_MAP
    typedef std::tr1::unordered_map< ::ecore::EString , ::ecore::EClassifier_ptr > EClassifierMapType;
#else
    typedef std::map< ::ecore::EString, ::ecore::EClassifier_ptr > EClassifierMapType;
#endif

    EClassifierMapType m_eClassifiersMap;

public:
    const std::shared_ptr<::ecorecpp::ItemProvider>& getItemProviderInstance () const;
    void setItemProviderInstance (const std::shared_ptr<::ecorecpp::ItemProvider>&);

protected:
    std::shared_ptr<::ecorecpp::ItemProvider> m_itemProviderInstance;

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

    /*PROTECTED REGION ID(EPackageImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EString m_nsURI;

    ::ecore::EString m_nsPrefix;

    // References

    ::ecore::EFactory_ptr m_eFactoryInstance;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EClassifier >> m_eClassifiers;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EPackage >> m_eSubpackages;

    ::ecore::EPackage_ptr m_eSuperPackage;

};

}
 // ecore

#endif // ECORE_EPACKAGE_HPP

