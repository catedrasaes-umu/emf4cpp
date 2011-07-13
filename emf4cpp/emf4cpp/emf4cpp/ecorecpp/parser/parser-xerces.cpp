// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/parser-xerces.cpp
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

#include "parser.hpp"
#include "handler.hpp"
#include "../util/debug.hpp"
#include <xercesc/parsers/SAXParser.hpp>
#include <xercesc/util/OutOfMemoryException.hpp>
#include <iostream>
#include <fstream>

using namespace ::ecorecpp::parser;

parser::parser()
{
}

parser::~parser()
{
}

::ecore::EObject_ptr parser::load(const char* _file)
{
    ::ecore::EObject_ptr _returned = 0;

    bool recognizeNEL = false;
    char localeStr[64];
    memset(localeStr, 0, sizeof localeStr);

    // Initialize the XML4C2 system
    try
    {
        if (strlen(localeStr))
        {
            xercesc::XMLPlatformUtils::Initialize(localeStr);
        }
        else
        {
            xercesc::XMLPlatformUtils::Initialize();
        }

        if (recognizeNEL)
        {
            xercesc::XMLPlatformUtils::recognizeNEL(recognizeNEL);
        }
    } catch (const xercesc::XMLException& toCatch)
    {
        ERROR_MSG("Error during initialization! Message: "
                << toCatch.getMessage());
        return _returned;
    }

    //
    //  Create a SAX parser object. Then, according to what we were told on
    //  the command line, set it to validate or not.
    //
    xercesc::SAXParser* _parser = new xercesc::SAXParser;

    _parser->setValidationScheme(xercesc::SAXParser::Val_Always);
    _parser->setDoNamespaces(false);
    _parser->setDoSchema(false);
    _parser->setHandleMultipleImports(true);
    _parser->setValidationSchemaFullChecking(false);

    //
    //  Create our SAX handler object and install it on the parser, as the
    //  document and error handler.
    //
    ::ecorecpp::parser::handler _handler;
    _parser->setDocumentHandler(&_handler);

    //
    //  Get the starting time and kick off the parse of the indicated
    //  file. Catch any exceptions that might propogate out of it.
    //
#if 1
    unsigned long duration;
#endif

    try
    {
#if 1
        const unsigned long startMillis =
                xercesc::XMLPlatformUtils::getCurrentMillis();
#endif
        _parser->parse(_file);
#if 1
        const unsigned long endMillis =
                xercesc::XMLPlatformUtils::getCurrentMillis();
        duration = endMillis - startMillis;
#endif
        ERROR_MSG("--- DURATION: " << duration);
    } catch (const xercesc::OutOfMemoryException&)
    {
        ERROR_MSG("OutOfMemoryException");
        return _returned;
    } catch (const xercesc::XMLException& e)
    {
        ERROR_MSG("Error during parsing: '" << _file << std::endl
                << "Exception message is: " << e.getMessage());
        return _returned;
    } catch (char const *e)
    {
        ERROR_MSG("Exception '" << e << "' during parsing: '" << _file << "'");
        return _returned;
    } catch (...)
    {
        ERROR_MSG("Unexpected exception during parsing: '" << _file << "'");
        return _returned;
    }

    //
    //  Delete the parser itself.  Must be done prior to calling Terminate, below.
    //
    delete _parser;

    // And call the termination method
    xercesc::XMLPlatformUtils::Terminate();

    _handler.resolveReferences();

    ::ecore::EObject_ptr _r = _handler.getRootElement();
    _r->_initialize();
    return _r;
}
