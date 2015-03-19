grammar org_xtext_example_MyDsl;

options{
	language=C;
}

@lexer::includes{
#include <iostream>
#include <ecorecpp/util/debug.hpp>
}

@parser::includes{
//#include <token_to.hpp>
#include <myDsl.hpp>
#include <iostream>
#include <vector>
#include <ecorecpp/util/debug.hpp>
}

@parser::members{
// TODO: outta here
namespace xtextpp
{

template< typename T >
inline T token_to(pANTLR3_COMMON_TOKEN p)
{
	return T();
}

template<>
inline std::string token_to< std::string >(pANTLR3_COMMON_TOKEN p)
{
    ANTLR3_MARKER start = p->getStartIndex(p);
    ANTLR3_MARKER end = p->getStopIndex(p);
    return  std::string( (const char *)start, end-start+1 );
}

} // xtextpp

struct ast_node
{
public:
    size_t parent;
    ecore::EObject_ptr value;

    static std::vector< ast_node > ast;
    static size_t current;
    
    inline ast_node() : parent(current), value(NULL)
    {
    }

public:
    
    static inline void start()
    {
        ast_node new_node;
    	current = ast.size();
    	ast.push_back(new_node);
    }
    
    static inline void end(ecore::EObject_ptr _returned = NULL)
    {
    	ast.back().value = _returned;
    	current = ast.back().parent;
    }
    
    template< typename T >
    static inline T find(const std::string& _id)
    {
    	long index = current;
    	size_t parent = ast.back().parent;
    	
    	while(index >= 0)
    	{
    		
    		if (ast[index].parent == parent)
    		{
    			T _t = dynamic_cast< T >(ast[index].value);
    			
    			if (_t && _t->getName() == _id) // TODO: use Reflective API
    				return _t;
    		}
    		
    		if (index && index == parent)
    			parent = ast[parent].parent;
    			    	
    		--index;
    	}
    	
    	std::cerr<< "Not found!" << std::endl;
    	return NULL;
    }
    
    static inline void reset()
    {
    	ast.clear();
    	current = 0;
    }
};
size_t ast_node::current = 0;
std::vector< ast_node > ast_node::ast;

}

	
ruleModel returns [ myDsl::Model_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START Model");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END Model");
    ast_node::end(_returned);
}
:
	(((imports=ruleImport { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createModel(); _returned->addImports(imports);} ))* ((elements=ruleType { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createModel(); _returned->addElements(elements);} ))*) 
;

ruleImport returns [ myDsl::Import_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START Import");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END Import");
    ast_node::end(_returned);
}
:
	('import' (importURI=RULE_STRING { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createImport(); _returned->setImportURI(xtextpp::token_to< ecore::EString >(importURI));} )) 
;

ruleType returns [ myDsl::Type_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START Type");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END Type");
    ast_node::end(_returned);
}
:
	(( simpletype=ruleSimpleType {_returned = simpletype; }) | ( entity=ruleEntity {_returned = entity; })) 
;

ruleSimpleType returns [ myDsl::SimpleType_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START SimpleType");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END SimpleType");
    ast_node::end(_returned);
}
:
	('type' (name=RULE_ID { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createSimpleType(); _returned->setName(xtextpp::token_to< ecore::EString >(name));} )) 
;

ruleEntity returns [ myDsl::Entity_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START Entity");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END Entity");
    ast_node::end(_returned);
}
:
	('entity' (name=RULE_ID { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createEntity(); _returned->setName(xtextpp::token_to< ecore::EString >(name));} ) (('extends' (extends=RULE_ID { myDsl::Entity_ptr _extends = ast_node::find< myDsl::Entity_ptr >( xtextpp::token_to< std::string >(extends)); if (_extends) _returned->setExtends(_extends);})))? '{' ((properties=ruleProperty { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createEntity(); _returned->addProperties(properties);} ))* '}') 
;

ruleProperty returns [ myDsl::Property_ptr _returned ]
@init{
    DEBUG_MSG (cout, "START Property");
    ast_node::start();
}
@after{
    DEBUG_MSG (cout, "END Property");
    ast_node::end(_returned);
}
:
	('property' (name=RULE_ID { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createProperty(); _returned->setName(xtextpp::token_to< ecore::EString >(name));} ) ':' (type=RULE_ID { myDsl::Type_ptr _type = ast_node::find< myDsl::Type_ptr >( xtextpp::token_to< std::string >(type)); if (_type) _returned->setType(_type);}) ((many='[]' { if (!_returned) _returned = myDsl::MyDslFactory::_instance()->createProperty(); _returned->setMany(true);} ))?) 
;

	
		
RULE_ID 
@init{
    DEBUG_MSG (cout, "START ID");
}
@after{
    DEBUG_MSG (cout, "END ID");
}
:
	(('^')? ('a'..'z' | 'A'..'Z' | '_') (('a'..'z' | 'A'..'Z' | '_' | '0'..'9'))*) 
;

RULE_INT 
@init{
    DEBUG_MSG (cout, "START INT");
}
@after{
    DEBUG_MSG (cout, "END INT");
}
:
	('0'..'9')+ 
;

RULE_STRING 
@init{
    DEBUG_MSG (cout, "START STRING");
}
@after{
    DEBUG_MSG (cout, "END STRING");
}
:
	(('"' ((('\\' ('b' | 't' | 'n' | 'f' | 'r' | '"' | '\'' | '\\')) | ~('\\' | '"')))* '"') | ('\'' ((('\\' ('b' | 't' | 'n' | 'f' | 'r' | '"' | '\'' | '\\')) | ~('\\' | '\'')))* '\'')) 
;

RULE_ML_COMMENT 
@init{
    DEBUG_MSG (cout, "START ML_COMMENT");
}
@after{
    DEBUG_MSG (cout, "END ML_COMMENT");
}
:
	('/*' (.)* '*/') 
;

RULE_SL_COMMENT 
@init{
    DEBUG_MSG (cout, "START SL_COMMENT");
}
@after{
    DEBUG_MSG (cout, "END SL_COMMENT");
}
:
	('//' (~('\n' | '\r'))* ((('\r')? '\n'))?) 
;

RULE_WS 
@init{
    DEBUG_MSG (cout, "START WS");
}
@after{
    DEBUG_MSG (cout, "END WS");
}
:
	((' ' | '\t' | '\r' | '\n'))+ {$channel=HIDDEN;}
;

RULE_ANY_OTHER 
@init{
    DEBUG_MSG (cout, "START ANY_OTHER");
}
@after{
    DEBUG_MSG (cout, "END ANY_OTHER");
}
:
	. 
;

	

