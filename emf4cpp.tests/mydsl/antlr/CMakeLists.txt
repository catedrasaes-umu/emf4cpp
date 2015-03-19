# TODO: antlr3
include_directories(${CMAKE_CURRENT_SOURCE_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR}/..  
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp 
    ${CMAKE_CURRENT_BINARY_DIR}
    /opt/include
   )

set(ANTLR_JAR
    java -jar ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp.xtext/antlr-3.2.jar -o ${CMAKE_CURRENT_BINARY_DIR}
   )

set(MYDSL_ANTLR_GENERATED
    ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslParser.h 
    ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslLexer.h 
    ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslParser.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslLexer.cpp
  )

ADD_CUSTOM_COMMAND(
    OUTPUT ${MYDSL_ANTLR_GENERATED}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/org_xtext_example_MyDsl.g
    COMMAND ${ANTLR_JAR} ${CMAKE_CURRENT_SOURCE_DIR}/org_xtext_example_MyDsl.g
        && mv ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslLexer.c ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslLexer.cpp
        && mv ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslParser.c ${CMAKE_CURRENT_BINARY_DIR}/org_xtext_example_MyDslParser.cpp
  )

# TODO: find where antlr3 is
link_directories(/usr/local/lib /opt/lib)

# test
add_executable(test-mydsl-antlr 
    test.cpp MyDslParser.cpp
    ${MYDSL_ANTLR_GENERATED}
  )

target_link_libraries(test-mydsl-antlr 
    emf4cpp-ecore
    emf4cpp-ecorecpp 
    emf4cpp-myDsl
    antlr3c
  )

