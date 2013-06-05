/** \file
 *  This C++ header file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : predicates_test/C.g
 *     -                            On : 2013-06-03 19:31:13
 *     -                for the parser : CParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The parser 
CParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram. 
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_CParser_H
#define _CParser_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include    <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


#include "CLexer.hpp"




#ifdef	WIN32
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */


typedef CParserTraits CParserImplTraits;

 struct synpred2_C {}; 
 struct synpred4_C {}; 
 struct synpred5_C {}; 
 struct synpred8_C {}; 
 struct synpred12_C {}; 
 struct synpred35_C {}; 
 struct synpred45_C {}; 
 struct synpred47_C {}; 
 struct synpred50_C {}; 
 struct synpred51_C {}; 
 struct synpred52_C {}; 
 struct synpred53_C {}; 
 struct synpred54_C {}; 
 struct synpred55_C {}; 
 struct synpred58_C {}; 
 struct synpred59_C {}; 
 struct synpred62_C {}; 
 struct synpred65_C {}; 
 struct synpred78_C {}; 
 struct synpred83_C {}; 
 struct synpred104_C {}; 
 struct synpred136_C {}; 

class CParserTokens
{
public:
	/** Symbolic definitions of all the tokens that the 
parser
 will work with.
	 * \{
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = CParserImplTraits::CommonTokenType::TOKEN_EOF
		, T__23 = 23 
		, T__24 = 24 
		, T__25 = 25 
		, T__26 = 26 
		, T__27 = 27 
		, T__28 = 28 
		, T__29 = 29 
		, T__30 = 30 
		, T__31 = 31 
		, T__32 = 32 
		, T__33 = 33 
		, T__34 = 34 
		, T__35 = 35 
		, T__36 = 36 
		, T__37 = 37 
		, T__38 = 38 
		, T__39 = 39 
		, T__40 = 40 
		, T__41 = 41 
		, T__42 = 42 
		, T__43 = 43 
		, T__44 = 44 
		, T__45 = 45 
		, T__46 = 46 
		, T__47 = 47 
		, T__48 = 48 
		, T__49 = 49 
		, T__50 = 50 
		, T__51 = 51 
		, T__52 = 52 
		, T__53 = 53 
		, T__54 = 54 
		, T__55 = 55 
		, T__56 = 56 
		, T__57 = 57 
		, T__58 = 58 
		, T__59 = 59 
		, T__60 = 60 
		, T__61 = 61 
		, T__62 = 62 
		, T__63 = 63 
		, T__64 = 64 
		, T__65 = 65 
		, T__66 = 66 
		, T__67 = 67 
		, T__68 = 68 
		, T__69 = 69 
		, T__70 = 70 
		, T__71 = 71 
		, T__72 = 72 
		, T__73 = 73 
		, T__74 = 74 
		, T__75 = 75 
		, T__76 = 76 
		, T__77 = 77 
		, T__78 = 78 
		, T__79 = 79 
		, T__80 = 80 
		, T__81 = 81 
		, T__82 = 82 
		, T__83 = 83 
		, T__84 = 84 
		, T__85 = 85 
		, T__86 = 86 
		, T__87 = 87 
		, T__88 = 88 
		, T__89 = 89 
		, T__90 = 90 
		, T__91 = 91 
		, T__92 = 92 
		, T__93 = 93 
		, T__94 = 94 
		, T__95 = 95 
		, T__96 = 96 
		, T__97 = 97 
		, T__98 = 98 
		, T__99 = 99 
		, T__100 = 100 
		, CHARACTER_LITERAL = 4 
		, COMMENT = 5 
		, DECIMAL_LITERAL = 6 
		, EscapeSequence = 7 
		, Exponent = 8 
		, FLOATING_POINT_LITERAL = 9 
		, FloatTypeSuffix = 10 
		, HEX_LITERAL = 11 
		, HexDigit = 12 
		, IDENTIFIER = 13 
		, IntegerTypeSuffix = 14 
		, LETTER = 15 
		, LINE_COMMAND = 16 
		, LINE_COMMENT = 17 
		, OCTAL_LITERAL = 18 
		, OctalEscape = 19 
		, STRING_LITERAL = 20 
		, UnicodeEscape = 21 
		, WS = 22 
	};

};

/** Context tracking structure for 
CParser

 */
class CParser : public 
CParserImplTraits::BaseParserType
, public CParserTokens
{
public:
	typedef CParserImplTraits ImplTraits;
	typedef CParser ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef 
CParserImplTraits::BaseParserType
 BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;

	/* globalAttributeScopeDecl(scope)
	 */
	/* makeScopeSet()
	 */
	 /** Definition of the Symbols scope variable tracking
	 *  structure. An instance of this structure is created by calling
	 *  CParser_SymbolsPush().
	 */
	struct  SymbolsScope
	{
	    /* =============================================================================
	     * Programmer defined variables...
	     */
	    std::set<std::string> types;

	    /* End of programmer defined variables
	     * =============================================================================
	     */
	};


	/* ruleAttributeScopeDecl(scope)
	 */
	/* makeScopeSet()
	 */
	 /** Definition of the declaration scope variable tracking
	 *  structure. An instance of this structure is created by calling
	 *  CParser_declarationPush().
	 */
	struct  declarationScope
	{
	    /* =============================================================================
	     * Programmer defined variables...
	     */
	    bool isTypedef;

	    /* End of programmer defined variables
	     * =============================================================================
	     */
	};



private:	
    /* globalAttributeScopeDef(scope)
     */

    StackType< SymbolsScope > m_Symbols_stack;



    /* ruleAttributeScopeDef(scope)
     */
    StackType< declarationScope >  m_declaration_stack;



public:
    CParser(InputType* instream);
    CParser(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );

     
     void
     translation_unit (); 
     
     void
     external_declaration (); 
     
     void
     function_definition (); 
     
     void
     declaration (); 
     
     void
     declaration_specifiers (); 
     
     void
     init_declarator_list (); 
     
     void
     init_declarator (); 
     
     void
     storage_class_specifier (); 
     
     void
     type_specifier (); 
     
     void
     type_id (); 
     
     void
     struct_or_union_specifier (); 
     
     void
     struct_or_union (); 
     
     void
     struct_declaration_list (); 
     
     void
     struct_declaration (); 
     
     void
     specifier_qualifier_list (); 
     
     void
     struct_declarator_list (); 
     
     void
     struct_declarator (); 
     
     void
     enum_specifier (); 
     
     void
     enumerator_list (); 
     
     void
     enumerator (); 
     
     void
     type_qualifier (); 
     
     void
     declarator (); 
     
     void
     direct_declarator (); 
     
     void
     declarator_suffix (); 
     
     void
     pointer (); 
     
     void
     parameter_type_list (); 
     
     void
     parameter_list (); 
     
     void
     parameter_declaration (); 
     
     void
     identifier_list (); 
     
     void
     type_name (); 
     
     void
     abstract_declarator (); 
     
     void
     direct_abstract_declarator (); 
     
     void
     abstract_declarator_suffix (); 
     
     void
     initializer (); 
     
     void
     initializer_list (); 
     
     void
     argument_expression_list (); 
     
     void
     additive_expression (); 
     
     void
     multiplicative_expression (); 
     
     void
     cast_expression (); 
     
     void
     unary_expression (); 
     
     void
     postfix_expression (); 
     
     void
     unary_operator (); 
     
     void
     primary_expression (); 
     
     void
     constant (); 
     
     void
     expression (); 
     
     void
     constant_expression (); 
     
     void
     assignment_expression (); 
     
     void
     lvalue (); 
     
     void
     assignment_operator (); 
     
     void
     conditional_expression (); 
     
     void
     logical_or_expression (); 
     
     void
     logical_and_expression (); 
     
     void
     inclusive_or_expression (); 
     
     void
     exclusive_or_expression (); 
     
     void
     and_expression (); 
     
     void
     equality_expression (); 
     
     void
     relational_expression (); 
     
     void
     shift_expression (); 
     
     void
     statement (); 
     
     void
     labeled_statement (); 
     
     void
     compound_statement (); 
     
     void
     statement_list (); 
     
     void
     expression_statement (); 
     
     void
     selection_statement (); 
     
     void
     iteration_statement (); 
     
     void
     jump_statement (); 






















      
     bool
     msynpred( antlr3::ClassForwarder< synpred2_C > );
        void msynpred2_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred4_C > );
        void msynpred4_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred5_C > );
        void msynpred5_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred8_C > );
        void msynpred8_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred12_C > );
        void msynpred12_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred35_C > );
        void msynpred35_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred45_C > );
        void msynpred45_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred47_C > );
        void msynpred47_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred50_C > );
        void msynpred50_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred51_C > );
        void msynpred51_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred52_C > );
        void msynpred52_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred53_C > );
        void msynpred53_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred54_C > );
        void msynpred54_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred55_C > );
        void msynpred55_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred58_C > );
        void msynpred58_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred59_C > );
        void msynpred59_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred62_C > );
        void msynpred62_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred65_C > );
        void msynpred65_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred78_C > );
        void msynpred78_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred83_C > );
        void msynpred83_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred104_C > );
        void msynpred104_C_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred136_C > );
        void msynpred136_C_fragment ();
    // Delegated rules

    const char *    getGrammarFileName();
    void            reset();
    ~CParser();


    private:
        bool isTypeName(const std::string& name) const;

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for CParser
 * =============================================================================
 */
/** } */


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
