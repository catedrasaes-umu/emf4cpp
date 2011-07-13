#ifndef MYDSL_PARSER_HPP
#define MYDSL_PARSER_HPP

#include <myDsl.hpp>

namespace org
{
namespace xtext
{
namespace example
{

class MyDslParser
{
public:

	MyDslParser();
	virtual ~MyDslParser();
   
    myDsl::Model_ptr parse(const std::string& _file);
};

} // example
} // xtext
} // org

#endif // MYDSL_PARSER_HPP

