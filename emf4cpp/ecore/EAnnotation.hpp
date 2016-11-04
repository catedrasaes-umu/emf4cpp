// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotation.hpp
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

#ifndef ECORE_EANNOTATION_HPP
#define ECORE_EANNOTATION_HPP

#include <ecore_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>

#include <ecore/EModelElement.hpp>

/*PROTECTED REGION ID(EAnnotation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EAnnotation : public virtual ::ecore::EModelElement
{
public:
    EAnnotation();

    virtual ~EAnnotation();

    virtual void _initialize();

    // Operations

    // Attributes
    ::ecore::EString const& getSource () const;
    void setSource (::ecore::EString const& _source);

    // References
    const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& getDetails () const;
    ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& getDetails ();

    ::ecore::EModelElement_ptr getEModelElement () const;
    void setEModelElement (::ecore::EModelElement_ptr _eModelElement);
    ::ecore::EModelElement_ptr basicgetEModelElement ();
    void basicsetEModelElement (::ecore::EModelElement_ptr _eModelElement);

    const ::ecorecpp::mapping::EList< ::ecore::EObject >& getContents () const;
    ::ecorecpp::mapping::EList< ::ecore::EObject >& getContents ();

    const ::ecorecpp::mapping::EList< ::ecore::EObject >& getReferences () const;
    ::ecorecpp::mapping::EList< ::ecore::EObject >& getReferences ();

    /*PROTECTED REGION ID(EAnnotation) START*/
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

    /*PROTECTED REGION ID(EAnnotationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EString m_source;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >> m_details;

    ::ecore::EModelElement_ptr m_eModelElement;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EObject >> m_contents;

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EObject >> m_references;

};

}
 // ecore

#endif // ECORE_EANNOTATION_HPP

