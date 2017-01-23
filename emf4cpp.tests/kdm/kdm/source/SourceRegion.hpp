// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRegion.hpp
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

#ifndef KDM_SOURCE_SOURCEREGION_HPP
#define KDM_SOURCE_SOURCEREGION_HPP

#include <kdm/source_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/core/Element.hpp>

/*PROTECTED REGION ID(SourceRegion_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace source
    {

    class EXPORT_KDM_DLL SourceRegion : public virtual ::kdm::core::Element
    {
    public:
        SourceRegion();

        virtual ~SourceRegion();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::kdm::core::Integer getStartLine () const;
        virtual void setStartLine (::kdm::core::Integer _startLine);

        virtual ::kdm::core::Integer getStartPosition () const;
        virtual void setStartPosition (::kdm::core::Integer _startPosition);

        virtual ::kdm::core::Integer getEndLine () const;
        virtual void setEndLine (::kdm::core::Integer _endLine);

        virtual ::kdm::core::Integer getEndPosition () const;
        virtual void setEndPosition (::kdm::core::Integer _endPosition);

        virtual ::kdm::core::String getLanguage () const;
        virtual void setLanguage (::kdm::core::String _language);

        virtual ::kdm::core::String getPath () const;
        virtual void setPath (::kdm::core::String _path);

        // References
        virtual ::kdm::source::SourceFile_ptr getFile () const;
        virtual void setFile (::kdm::source::SourceFile_ptr _file);

        /*PROTECTED REGION ID(SourceRegion) START*/
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

        /*PROTECTED REGION ID(SourceRegionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::kdm::core::Integer m_startLine;

        ::kdm::core::Integer m_startPosition;

        ::kdm::core::Integer m_endLine;

        ::kdm::core::Integer m_endPosition;

        ::kdm::core::String m_language;

        ::kdm::core::String m_path;

        // References

        ::kdm::source::SourceFile_ptr m_file;

    };

}
 // source
}// kdm

#endif // KDM_SOURCE_SOURCEREGION_HPP

