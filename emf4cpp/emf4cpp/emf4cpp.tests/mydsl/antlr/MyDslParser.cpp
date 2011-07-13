#include "MyDslParser.hpp"
#include "org_xtext_example_MyDslParser.h"
#include "org_xtext_example_MyDslLexer.h"

using namespace org::xtext::example;

MyDslParser::MyDslParser()
{
}

MyDslParser::~MyDslParser()
{
}

myDsl::Model_ptr MyDslParser::parse(const std::string& _file)
{
    pANTLR3_INPUT_STREAM input;
    porg_xtext_example_MyDslLexer lex;
    pANTLR3_COMMON_TOKEN_STREAM tokens;
    porg_xtext_example_MyDslParser parser;

    input = antlr3AsciiFileStreamNew ((pANTLR3_UINT8)_file.c_str());
    lex = org_xtext_example_MyDslLexerNew (input);
    tokens = antlr3CommonTokenStreamSourceNew (ANTLR3_SIZE_HINT, TOKENSOURCE(lex));
    parser = org_xtext_example_MyDslParserNew (tokens);

    myDsl::Model_ptr model = parser->ruleModel(parser);

    parser->free(parser);
    tokens->free(tokens);
    lex->free(lex);
    input->close(input);
    
    return model;
}

