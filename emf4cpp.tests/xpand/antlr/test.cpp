#include "XpandParser.h"
#include "XpandLexer.h"
#include <cassert>

int main (int argc, char *argv[])
{
    pANTLR3_INPUT_STREAM           input;
    pXpandLexer               lex;
    pANTLR3_COMMON_TOKEN_STREAM    tokens;
    pXpandParser              parser;

    input  = antlr3AsciiFileStreamNew          ((pANTLR3_UINT8)argv[1]);
    lex    = XpandLexerNew                (input);
    tokens = antlr3CommonTokenStreamSourceNew  (ANTLR3_SIZE_HINT, TOKENSOURCE(lex));
    parser = XpandParserNew               (tokens);

    ::xpand3::File_ptr _file = parser  ->file(parser);
    assert(_file);

    // Must manually clean up
    //
    parser ->free(parser);
    tokens ->free(tokens);
    lex    ->free(lex);
    input  ->close(input);

    return 0;
}

