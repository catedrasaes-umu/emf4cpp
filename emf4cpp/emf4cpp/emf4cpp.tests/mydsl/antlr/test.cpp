#include "MyDslParser.hpp"
#include <ecorecpp.hpp>

using namespace org::xtext::example;

int main (int argc, char *argv[])
{
    assert(argc > 1);

    MyDslParser parser;

    myDsl::Model_ptr model = parser.parse(argv[1]);
    assert(model);

    model->_initialize();

    ecorecpp::serializer::serializer ser("salida.xmi");
    ser.serialize(model);

    delete model;

    return 0;
}

