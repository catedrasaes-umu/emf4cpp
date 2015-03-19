# TODO identify where antlr really is.
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp ${CMAKE_CURRENT_BINARY_DIR} /opt/include)

set(XPAND_ANTLR_GENERATED
    ${CMAKE_CURRENT_BINARY_DIR}/XpandParser.h 
    ${CMAKE_CURRENT_BINARY_DIR}/XpandLexer.h 
    ${CMAKE_CURRENT_BINARY_DIR}/XpandParser.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/XpandLexer.cpp
  )

ADD_CUSTOM_COMMAND(
    OUTPUT ${XPAND_ANTLR_GENERATED}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Xpand.g
    COMMAND java -jar ${CMAKE_CURRENT_SOURCE_DIR}/antlr-3.2.jar -o ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/Xpand.g
        && sed -i 's/ = NULL//g' ${CMAKE_CURRENT_BINARY_DIR}/XpandLexer.c ${CMAKE_CURRENT_BINARY_DIR}/XpandParser.c 
        && mv ${CMAKE_CURRENT_BINARY_DIR}/XpandLexer.c ${CMAKE_CURRENT_BINARY_DIR}/XpandLexer.cpp
        && mv ${CMAKE_CURRENT_BINARY_DIR}/XpandParser.c ${CMAKE_CURRENT_BINARY_DIR}/XpandParser.cpp
  )

# TODO: Identify where antlr is.
link_directories(/usr/local/lib /opt/lib)

# test
add_executable(test-xpand-antlr 
    test.cpp 
    ${XPAND_ANTLR_GENERATED}
  )

target_link_libraries(test-xpand-antlr 
    emf4cpp-ecorecpp 
    emf4cpp-ecore
    emf4cpp-xpand3 
    emf4cpp-xpand3_declaration
    emf4cpp-xpand3_expression
    emf4cpp-xpand3_statement
    antlr3c
  )

