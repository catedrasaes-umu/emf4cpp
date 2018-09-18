// -*- mode: C++; c-basic-offset: 4; -*-
#include <ecorecpp.hpp>
#include <json_parse.hpp>
#include <json.hpp>
#include <deque>
#include <fstream>

using namespace json;
using namespace ecore;
using namespace std;

// JSON semantic state
struct JJSemanticState
{
    JsonFactory_ptr jsonFactory;
    std::string lastname; // initial name of the struct
    ObjectValue_ptr container; // Initial container
    deque<ObjectValue_ptr> od;
    int level;
    bool in_array;

    JJSemanticState (JsonFactory_ptr jf)
        : jsonFactory (jf)
    {
        container = jsonFactory->createObjectValue();
        od.push_back (container);

        level = 0;
        in_array=false;
        lastname="";
    }

    inline void new_null()
    {
        //std::cout << "new null" << std::endl;
        lastname="";
    }

    inline void new_double(double d)
    {
        NVPair_ptr nvp = jsonFactory->createNVPair();
        nvp->setName (lastname.c_str());
        NumberValue_ptr n = jsonFactory->createNumberValue();
        n->setValue (d);
        if (in_array)
        {
            ArrayValue_ptr arr = jsonFactory->createArrayValue();
            nvp->setValue (arr);
            arr->getValues().push_back (n);
        } else {
            nvp->setValue (n);
        }

        od.back()->getMembers().push_back (nvp);
        lastname="";
    }

    inline void new_string(csu::mycorba::json::match_pair  const& p)
    {
        if (in_array)
        {
            NVPair_ptr nvp = jsonFactory->createNVPair();
            nvp->setName (lastname.c_str());
            StringValue_ptr s = jsonFactory->createStringValue();
            s->setValue (std::string (p.first,p.second));
            ArrayValue_ptr arr = jsonFactory->createArrayValue();
            nvp->setValue (arr);
            arr->getValues().push_back (s);
            od.back()->getMembers().push_back (nvp);
            lastname="";
        } else {
            if (lastname == "")
            {
                // Primera cadena
                lastname = std::string (p.first,p.second);
            } else {
                NVPair_ptr nvp = jsonFactory->createNVPair();
                nvp->setName (lastname.c_str());
                StringValue_ptr s = jsonFactory->createStringValue();
                s->setValue (std::string (p.first,p.second));
                nvp->setValue (s);
                od.back()->getMembers().push_back (nvp);
                lastname="";
            }
        }
    }

    inline void new_bool(bool b)
    {
        NVPair_ptr nvp = jsonFactory->createNVPair();
        nvp->setName (lastname.c_str());
        BooleanValue_ptr n = jsonFactory->createBooleanValue();
        n->setValue (b);
        if (in_array)
        {
            ArrayValue_ptr arr = jsonFactory->createArrayValue();
            nvp->setValue (arr);
            arr->getValues().push_back (n);
        } else {
            nvp->setValue (n);
        }

        od.back()->getMembers().push_back (nvp);
        lastname="";
    }

    inline void new_blob(csu::mycorba::json::match_pair const& p)
    {
        //std::cout << "new blob, size: " << p.second << std::endl;
    }

    inline void object_start()
    {
        if (level == 0)
        {
            // First level. Outer object start. Do nothing.
        } else {
        //         // Array into an object. Create an array object with an
        //         NVPair_ptr nvp = jsonFactory->createNVPair();
        //         nvp->setName (lastname.c_str());

        // } else {
            // Object
            // Add a new NVPair to the current object
            NVPair_ptr nvp = jsonFactory->createNVPair();
            nvp->setName (lastname.c_str());
            ObjectValue_ptr obj = jsonFactory->createObjectValue();

            if (in_array)
            {
                // TODO: no funciona
                ArrayValue_ptr arr = jsonFactory->createArrayValue();
                nvp->setValue (arr);
                arr->getValues().push_back (obj);
            } else {
                nvp->setValue (obj);
            }

            // Añadir el elemento nuevo
            od.back()->getMembers().push_back (nvp);

            od.push_back (obj);
        }

        ++level;
        lastname="";
    }

    inline void object_end()
    {
        od.pop_back();
        --level;
        lastname="";
    }

    inline void array_start()
    {
        in_array=true;
    }

    inline void array_end()
    {
        in_array=false;
        lastname="";
    }
};


int main(int argc, char* argv[])
{
    // argv[1] = nombre del fichero con la estructura

//    JsonPackage_ptr jsonPackage = JsonPackage::_instance();
    JsonFactory_ptr jsonFactory = JsonFactory::_instance();

    size_t size;
    char * memblock;

    ifstream file (argv[1], ios::in|ios::ate);
    if (file.is_open())
    {
        size = file.tellg();
        memblock = new char [size+1];
        file.seekg (0, ios::beg);
        file.read (memblock, size);
        file.close();
    }
    memblock[size] = 0;

    JJSemanticState ss (jsonFactory);

    csu::mycorba::json::parser::State<JJSemanticState>
        st(ss, memblock, size);
    csu::mycorba::json::parser::grammar::gram::match(st);

    std::ofstream outfile ("salida.xmi");
    ecorecpp::serializer::serializer _ser(outfile);
    _ser.serialize(ss.container);

    // TODO
    //delete obj;

    delete[] memblock;

    return 0;

    // ObjectValue_ptr obj = jsonFactory->createObjectValue();

    // NVPair_ptr nvp = jsonFactory->createNVPair();
    // nvp->setName ("p1");
    // StringValue_ptr str = jsonFactory->createStringValue();
    // str->setValue ("s1");
    // nvp->setValue (str);

    // obj->getMembers().push_back (nvp);

    // obj->_initialize();


/*
    ::ecorecpp::MetaModelRepository::_instance()->load(jsonPackage);

    ecorecpp::parser::parser _dser;
    EObject_ptr eobj = _dser.load("salida.xmi");

    obj = ::ecore::as< json >(eobj);

    delete obj;
*/
}

