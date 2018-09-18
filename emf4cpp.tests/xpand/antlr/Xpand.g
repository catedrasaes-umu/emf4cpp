grammar Xpand;

options{
    language=C;
}

@parser::includes {

#include <xpand3.hpp>

}

@parser::members{

#define XPAND_FACTORY xpand3::Xpand3Factory::_instance()

struct XpandFactory
{
    static inline xpand3::File_ptr createFile(
                   std::vector<xpand3::ImportStatement_ptr>& imports,
                   std::vector<xpand3::declaration::AbstractDeclaration_ptr>& declarations
                )
    {
        xpand3::File_ptr _returned = XPAND_FACTORY->createFile();
        _returned->setImports(imports);
        _returned->setDeclarations(declarations);
        return _returned;
    }

    static inline xpand3::ImportStatement_ptr createImportStatement(xpand3::Identifier_ptr id)
    {
        xpand3::ImportStatement_ptr _returned = XPAND_FACTORY->createImportStatement();
        _returned->setImportedId(id);
        return _returned;
    }
};

}


file returns [xpand3::File_ptr t]
@init{
std::vector<xpand3::ImportStatement_ptr> imports;
std::vector<xpand3::declaration::AbstractDeclaration_ptr> declarations;
} :
	LG
		(COMMENT TEXT)*
		((imp=anImport {imports.push_back(imp);} | extimp=anExtensionImport ) TEXT (COMMENT TEXT)*)*
		((d=define | a=around) TEXT (COMMENT TEXT)* )*
                {t = XpandFactory::createFile(imports, declarations);}
	|
;

anImport returns [xpand3::ImportStatement_ptr imp] :
	'IMPORT' id=simpleType {$imp = XpandFactory::createImportStatement(id);}
;

anExtensionImport returns [xpand3::declaration::Extension_ptr imp]:
	'EXTENSION' id=simpleType
;

around :
	  'AROUND' pc=pointcut
	  ('(' (p=declaredParameterList (',' wildparams='*' )? | wildparams='*' ) ')')? 'FOR' t=type
	  s=sequence
	  'ENDAROUND'
;

pointcut returns [xpand3::Identifier_ptr i] :
	(x='*' |i1=identifier )
	(x1='*' |n1=identifier |dc='::' )*
;

define returns [xpand3::declaration::Definition_ptr d] :
	  'DEFINE' name=identifier ('(' p=declaredParameterList ')')? 'FOR' t=type
	  s=sequence
	  'ENDDEFINE'
;

sequence returns [std::vector<xpand3::statement::AbstractStatement_ptr> s] :
	 s1=textSequence 
	 (s2=statement 
	  s1=textSequence )*
;

//
// Statements
//
//

statement returns [xpand3::statement::AbstractStatement_ptr s] :
  s1=simpleStatement {$s=s1;}
| s2=fileStatement {$s=s2;}
| s3=foreachStatement {$s=s3;}
| s4=ifStatement {$s=s4;}
| s5=letStatement {$s=s5;}
| s6=protectStatement {$s=s6;}
;

textSequence returns [std::vector<xpand3::statement::AbstractStatement_ptr> s] :
	t=text 
  (COMMENT t1=text )*
;

text returns [xpand3::statement::AbstractStatement_ptr s] :
	(m='-')? t=TEXT 
;

simpleStatement returns [xpand3::statement::AbstractStatement_ptr s] :
  s1=errorStatement {$s=s1;}
| s2=expandStatement {$s=s2;}
| s3=expressionStmt {$s=s3;}
;

errorStatement returns [xpand3::statement::ErrorStatement_ptr e] :
  'ERROR' expr=expression
;

expandStatement returns [xpand3::statement::ExpandStatement_ptr e] :
  'EXPAND' t=definitionName ('(' pl=parameterList ')')? (('FOR' expr=expression)
  | (fe='FOREACH' expr=expression ('SEPARATOR' sep=expression)?))?
  (onFileClose='ONFILECLOSE')?
;

definitionName returns [xpand3::Identifier_ptr id] :
	id1 = simpleType {$id=id1;}
;

expressionStmt returns [xpand3::statement::ExpressionStatement_ptr es] :
	e=expression 
;

fileStatement returns [xpand3::statement::FileStatement_ptr f] :
	'FILE' e=expression (option=identifier)?
		s=sequence
	'ENDFILE'
	
;

foreachStatement returns [xpand3::statement::ForEachStatement_ptr f]:
	 'FOREACH' e=expression 'AS' v=identifier ('ITERATOR' iter=identifier)? ('SEPARATOR' sep=expression)?
  		s=sequence
	 'ENDFOREACH'
	 
;

ifStatement returns [xpand3::statement::IfStatement_ptr i] :
     'IF' e=expression
		s=sequence

	 (elif=elseIfStatement )*
	 (el=elseStatement     )?
	 'ENDIF'
;

elseIfStatement returns [xpand3::statement::IfStatement_ptr i] :
	'ELSEIF' e=expression
		s=sequence
		
	;

elseStatement returns [xpand3::statement::IfStatement_ptr i] :
	'ELSE'
		s=sequence
		
	;

letStatement returns [xpand3::statement::LetStatement_ptr l] :
	 'LET' e=expression 'AS' v=identifier
  		s=sequence
	 'ENDLET'
	 
;

protectStatement returns [xpand3::statement::ProtectStatement_ptr l] :
	'PROTECT'
		'CSTART' startC=expression
		'CEND' endC=expression
         	'ID' id=expression (disabled='DISABLE')?
 		s=sequence
	'ENDPROTECT'
	 
;

//
// Expressions
//
expression returns [xpand3::expression::AbstractExpression_ptr e]:
	x=letExpression {$e=x;}
;

letExpression  returns [xpand3::expression::AbstractExpression_ptr e] :
   'let' v=identifier '=' varExpr=castedExpression ':' target=expression
   
|  x=castedExpression {$e=x;}
;

castedExpression returns [xpand3::expression::AbstractExpression_ptr e] :
    ('(' type ')' castedExpression)=>
	'(' t=type ')' x=chainExpression 
	| x=chainExpression {$e=x;}
;


chainExpression  returns [xpand3::expression::AbstractExpression_ptr e] :
	x=ifExpression {$e=x;} ( '->' right=ifExpression )*
;

ifExpression  returns [xpand3::expression::AbstractExpression_ptr e] :
	x=switchExpression {$e=x;}('?' thenPart=switchExpression ':' elsePart=switchExpression )?
|	'if' condition=switchExpression 'then' thenPart=switchExpression ('else' elsePart=expression)? 
;


switchExpression  returns [xpand3::expression::AbstractExpression_ptr e] :
   'switch' ('(' pred = orExpression ')')?
   '{'
   (
     'case' c=orExpression  ':'  v=orExpression
     
   )*
   'default' ':' def = orExpression
   '}'
   
|  x=orExpression {$e=x;}
;

orExpression returns [xpand3::expression::AbstractExpression_ptr e] :
  	x=andExpression {$e=x;} (name='||' r=andExpression 	)*
;

andExpression 	returns [xpand3::expression::AbstractExpression_ptr e] :
	x=impliesExpression {$e=x;} (name='&&' r=impliesExpression 	)*
;

impliesExpression returns [xpand3::expression::AbstractExpression_ptr e] :
	x=relationalExpression {$e=x;} (name='implies' r=relationalExpression 	)*
;


relationalExpression returns [xpand3::expression::AbstractExpression_ptr e] :
	x=additiveExpression {$e=x;}
	(name=('==' | '!=' | '>=' | '<=' | '>' | '<') r=additiveExpression )*
;


additiveExpression returns [xpand3::expression::AbstractExpression_ptr e] :
	x=multiplicativeExpression {$e=x;}
   (name=('+'| '-') r=multiplicativeExpression )*
;

multiplicativeExpression returns [xpand3::expression::AbstractExpression_ptr e]:
	x=unaryExpression {$e=x;}
	(name=('*' | '/') r=unaryExpression )*
;


unaryExpression returns [xpand3::expression::AbstractExpression_ptr e] :
	x=infixExpression {$e=x;}
|	name='!' x=infixExpression	
|	name='-' x=infixExpression	
;

infixExpression returns [xpand3::expression::AbstractExpression_ptr e] :
	x=primaryExpression {$e=x;} ( '.' op=featureCall  )*
;

primaryExpression 	 returns [xpand3::expression::AbstractExpression_ptr e] :
   c=StringLiteral 
|   x=featureCall {$e=x;}
|   x=booleanLiteral {$e=x;}
|   x=numberLiteral {$e=x;}
|   x=nullLiteral {$e=x;}
|   x=listLiteral {$e=x;}
|   x=constructorCall {$e=x;}
|   x=globalVarExpression {$e=x;}
|   x=paranthesizedExpression {$e=x;}
;

paranthesizedExpression returns [xpand3::expression::AbstractExpression_ptr e] :
    '(' x=expression ')' 
;

globalVarExpression  returns [xpand3::expression::GlobalVarExpression_ptr e] :
    'GLOBALVAR' name=identifier ;

featureCall  returns [xpand3::expression::FeatureCall_ptr e] :
	id1=identifier '(' (l=parameterList)? ')' 
|   t=type 
|   x=collectionExpression {$e=x;}
;

listLiteral  returns [xpand3::expression::AbstractExpression_ptr e] :
	'{' (l=parameterList)? '}' 
;

constructorCall  returns [xpand3::expression::AbstractExpression_ptr e] :
	'new' t=simpleType
	
;

booleanLiteral  returns [xpand3::expression::AbstractExpression_ptr e] :
	'false'|'true'
;

nullLiteral  returns [xpand3::expression::AbstractExpression_ptr e] :
	'null'
;

numberLiteral  returns [xpand3::expression::AbstractExpression_ptr e] :
  	a=IntLiteral 
| 	a=IntLiteral b='.' c=IntLiteral 
;

collectionExpression  returns [xpand3::expression::FeatureCall_ptr e] :
  name='typeSelect'
  '(' t=type ')' 

   |name=('collect'
  | 'select'
  | 'selectFirst'
  | 'reject'
  | 'exists'
  | 'notExists'
  | 'sortBy'
  | 'forAll') '(' (var=identifier '|')? x=expression ')'
 
;

// helper

declaredParameterList  returns [std::vector<xpand3::DeclaredParameter_ptr> l] :
	dp=declaredParameter (',' dp1=declaredParameter )*
;

declaredParameter returns [xpand3::DeclaredParameter_ptr dp] :
	t=type name=identifier 
;

parameterList  returns [std::vector<xpand3::DeclaredParameter_ptr> l] :
    a=expression  (',' b=expression )*
;

// type

type returns [xpand3::Identifier_ptr id] :
	a = collectionType {$id=a;}|
	b = simpleType {$id=b;}
;

collectionType  returns [xpand3::Identifier_ptr id ] :
  cl=( 'Collection' | 'List' | 'Set' ) 
  (b='[' id1=simpleType c=']' )?
;

simpleType returns [xpand3::Identifier_ptr id] :
	x=identifier {$id=x;}
	(d='::' end=identifier  )*
;

identifier returns [xpand3::Identifier_ptr r] :
   x=Identifier 
	;
// LEXER

IntLiteral : ('0' | '1'..'9' '0'..'9'*) ;

StringLiteral
    :  '"' ( EscapeSequence | ~('\\'|'"') )* '"'
    |  '\'' ( EscapeSequence | ~('\''|'\\') )* '\''
    ;

fragment
EscapeSequence
    :   '\\' ('b'|'t'|'n'|'f'|'r'|'\"'|'\''|'\\')
    |   UnicodeEscape
    |   OctalEscape
    ;

fragment
OctalEscape
    :   '\\' ('0'..'3') ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7') ('0'..'7')
    |   '\\' ('0'..'7')
    ;

fragment
UnicodeEscape
    :   '\\' 'u' HexDigit HexDigit HexDigit HexDigit
    ;
fragment
HexDigit : ('0'..'9'|'a'..'f'|'A'..'F') ;

Identifier
    :   ('^')? Letter (Letter|JavaIDDigit)*
    ;

fragment
Letter
    :  '\u0024' |
       '\u0041'..'\u005a' |
       '\u005f' |
       '\u0061'..'\u007a' |
       '\u00c0'..'\u00d6' |
       '\u00d8'..'\u00f6' |
       '\u00f8'..'\u00ff' |
       '\u0100'..'\u1fff' |
       '\u3040'..'\u318f' |
       '\u3300'..'\u337f' |
       '\u3400'..'\u3d2d' |
       '\u4e00'..'\u9fff' |
       '\uf900'..'\ufaff'
    ;

fragment
JavaIDDigit
    :  '\u0030'..'\u0039' |
       '\u0660'..'\u0669' |
       '\u06f0'..'\u06f9' |
       '\u0966'..'\u096f' |
       '\u09e6'..'\u09ef' |
       '\u0a66'..'\u0a6f' |
       '\u0ae6'..'\u0aef' |
       '\u0b66'..'\u0b6f' |
       '\u0be7'..'\u0bef' |
       '\u0c66'..'\u0c6f' |
       '\u0ce6'..'\u0cef' |
       '\u0d66'..'\u0d6f' |
       '\u0e50'..'\u0e59' |
       '\u0ed0'..'\u0ed9' |
       '\u1040'..'\u1049'
   ;

WS  :  (' '|'\r'|'\t'|'\u000C'|'\n') {$channel=HIDDEN;}
    ;

ML_COMMENT
    :   '/*' ( options {greedy=false;} : . )* '*/' {$channel=HIDDEN;}
    ;

LINE_COMMENT
    : '//' ~('\n'|'\r')* '\r'? '\n' {$channel=HIDDEN;}
    ;

LG  : '\u00AB';
fragment
RG: '\u00BB';

// comments
COMMENT :
	'REM' RG ( options {greedy=false;} : . )* '\u00ABENDREM'
;

TEXT :
  RG ~(LG)* (LG)?
;

// a dummy rule to force vocabulary to be all characters (except special
// ones that ANTLR uses internally (0 to 2) and the guillemot characters
fragment
VOCAB :
	('\u0003'..'\u00aa'|'\u00ac'..'\u00ba'|'\u00bc'..'\ufffe')
;
