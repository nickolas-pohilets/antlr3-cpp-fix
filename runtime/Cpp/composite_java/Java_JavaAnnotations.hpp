/** \file
 *  This C++ header file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : JavaAnnotations.g
 *     -                            On : 2013-06-02 23:29:14
 *     -                for the parser : Java_JavaAnnotationsParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The parser 
Java_JavaAnnotations

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

#ifndef	_Java_JavaAnnotations_H
#define _Java_JavaAnnotations_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include    <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


	#include "UserTraits.hpp"




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

	namespace 
	User
 {


// Include delegator definition classes
//
class JavaParser; 

typedef Java_JavaAnnotationsTraits Java_JavaAnnotationsImplTraits;

 struct synpred1_JavaAnnotations {}; 
 struct synpred16_JavaAnnotations {}; 
 struct synpred18_JavaAnnotations {}; 
 struct synpred20_JavaAnnotations {}; 

class Java_JavaAnnotationsTokens
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
		EOF_TOKEN = Java_JavaAnnotationsImplTraits::CommonTokenType::TOKEN_EOF
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
		, T__101 = 101 
		, T__102 = 102 
		, T__103 = 103 
		, T__104 = 104 
		, T__105 = 105 
		, T__106 = 106 
		, T__107 = 107 
		, T__108 = 108 
		, T__109 = 109 
		, T__110 = 110 
		, T__111 = 111 
		, T__112 = 112 
		, T__113 = 113 
		, COMMENT = 4 
		, CharacterLiteral = 5 
		, DecimalLiteral = 6 
		, ENUM = 7 
		, EscapeSequence = 8 
		, Exponent = 9 
		, FloatTypeSuffix = 10 
		, FloatingPointLiteral = 11 
		, HexDigit = 12 
		, HexLiteral = 13 
		, Identifier = 14 
		, IntegerTypeSuffix = 15 
		, JavaIDDigit = 16 
		, LINE_COMMENT = 17 
		, Letter = 18 
		, OctalEscape = 19 
		, OctalLiteral = 20 
		, StringLiteral = 21 
		, UnicodeEscape = 22 
		, WS = 23 
	};

};

/** Context tracking structure for 
Java_JavaAnnotations

 */
class Java_JavaAnnotations : public 
Java_JavaAnnotationsImplTraits::BaseParserType
, public Java_JavaAnnotationsTokens
{
public:
	typedef Java_JavaAnnotationsImplTraits ImplTraits;
	typedef Java_JavaAnnotations ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef 
Java_JavaAnnotationsImplTraits::BaseParserType
 BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
	JavaParser*	 m_gJava;
public:
    Java_JavaAnnotations(InputType* instream, JavaParser* gJava);
    Java_JavaAnnotations(InputType* instream, RecognizerSharedStateType* state, JavaParser* gJava);

    void init(InputType* instream , JavaParser* gJava );

     
     void
     annotations (); 
     
     void
     annotation (); 
     
     void
     annotationName (); 
     
     void
     elementValuePairs (); 
     
     void
     elementValuePair (); 
     
     void
     elementValue (); 
     
     void
     elementValueArrayInitializer (); 
     
     void
     annotationTypeDeclaration (); 
     
     void
     annotationTypeBody (); 
     
     void
     annotationTypeElementDeclarations (); 
     
     void
     annotationTypeElementDeclaration (); 
     
     void
     annotationTypeElementRest (); 
     
     void
     annotationMethodOrConstantRest (); 
     
     void
     annotationMethodRest (); 
     
     void
     annotationConstantRest (); 
     
     void
     defaultValue (); 




      
     bool
     msynpred( antlr3::ClassForwarder< synpred1_JavaAnnotations > );
        void msynpred1_JavaAnnotations_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred16_JavaAnnotations > );
        void msynpred16_JavaAnnotations_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred18_JavaAnnotations > );
        void msynpred18_JavaAnnotations_fragment ();
      
     bool
     msynpred( antlr3::ClassForwarder< synpred20_JavaAnnotations > );
        void msynpred20_JavaAnnotations_fragment ();
    // Delegated rules

    const char *    getGrammarFileName();
    void            reset();
    ~Java_JavaAnnotations();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
extern ANTLR_UINT8*   JavaParserTokenNames[];


/* End of token definitions for Java_JavaAnnotations
 * =============================================================================
 */
/** } */

	}


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
