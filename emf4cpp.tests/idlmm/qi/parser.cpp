#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/phoenix.hpp>
#include <boost/spirit/include/phoenix_bind.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

#include <ecore.hpp>
#include <ecorecpp.hpp>
#include <idlmm.hpp>

#include <iostream>
#include <string>

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;
namespace ph = boost::phoenix;

struct eobject
{
    ecore::EObject_ptr obj;

    inline eobject(): obj(0) {}
};

BOOST_FUSION_ADAPT_STRUCT(
    eobject,
    (ecore::EObject_ptr, obj)
)

namespace idl_actions
{
void ac1(eobject& _val, ecore::EObject_ptr _h1)
{
    std::cout << "action1" << std::endl;

    if(!_val.obj)
        _val.obj = ::idlmm::IdlmmFactory::_instance()->createTranslationUnit();

    ::ecore::as< ::idlmm::TranslationUnit >(_val.obj)->addContains(::ecore::as< ::idlmm::Contained >(_h1));
}

void ac2(eobject& _val, const std::string& _id)
{
    std::cout << "action2 " << _id << std::endl;

    if(!_val.obj)
        _val.obj = ::idlmm::IdlmmFactory::_instance()->createInterfaceDef();
     
    ::ecore::as< ::idlmm::InterfaceDef >(_val.obj)->setIdentifier(_id);
}
} // idl_actions

//  Grammar
template <typename Iterator>
struct idlmm_parser : qi::grammar<Iterator, eobject(), ascii::space_type>
{
    idlmm_parser() : idlmm_parser::base_type(specification,"idl")
    {
        using namespace ::boost::spirit;
        using namespace ::boost::spirit::qi;
        using namespace ::boost::spirit::arg_names;
        using ::ph::at_c;
        using ::ph::push_back;
        using ::ph::bind;

        specification = +(definition [ bind(&idl_actions::ac1, _val, _1) ] >> ';');

        definition = lit("interface") >> ID [ bind(&idl_actions::ac2, _val, _1) ] ;

        ID %= lexeme[+(char_ - ';')]; // char range
    }

    qi::rule<Iterator, eobject(), ascii::space_type> specification; // IDL::TranslationUnit
    qi::rule<Iterator, eobject(), ascii::space_type> definition; // IDL::Contained

    qi::rule<Iterator, std::string(), ascii::space_type> ID;
};

////////////////////////////////////////////////////////////////////////////
//  Main program
////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
    typedef std::string::const_iterator iterator_type;
    typedef idlmm_parser<iterator_type> idlmm_parser;

    idlmm_parser g; // Our grammar
    std::string str("interface hola1; interface hola2; interface adios1;");

    eobject eobj;
    std::string::const_iterator iter = str.begin();
    std::string::const_iterator end = str.end();
    bool r = qi::phrase_parse(iter, end, g, eobj, ascii::space);

    if (r && iter == end)
    {
        std::cout << "Parsing succeeded" << std::endl;

        ::ecorecpp::serializer::serializer ser("salida.xmi");
        ser.serialize(eobj.obj);
    }
    return 0;
}

