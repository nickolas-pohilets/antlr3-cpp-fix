/** \file
 *  This C++ header file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : predicates_test/C.g
 *     -                            On : 2013-06-04 17:11:56
 *     -                 for the lexer : CLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The lexer 
CLexer

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

#ifndef	_CLexer_H
#define _CLexer_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include    <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


#include <iostream>




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


	class CLexer;
	class CParser;
    typedef antlr3::Traits<CLexer, CParser> CLexerTraits;
    typedef CLexerTraits CParserTraits;

typedef CLexerTraits CLexerImplTraits;


class CLexerTokens
{
public:
	/** Symbolic definitions of all the tokens that the 
lexer
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
		EOF_TOKEN = CLexerImplTraits::CommonTokenType::TOKEN_EOF
		, T__29 = 29 
		, T__30 = 30 
		, AT = 4 
		, BOOL = 5 
		, COMMENT = 6 
		, DIGIT = 7 
		, DOT = 8 
		, ESC_SEQ = 9 
		, EXPONENT = 10 
		, FLOAT = 11 
		, HEX_DIGIT = 12 
		, ID = 13 
		, ID_LETTER = 14 
		, IMPORT = 15 
		, INT = 16 
		, LBRACK = 17 
		, LCURLY = 18 
		, LPAREN = 19 
		, NEWLINE = 20 
		, PACKAGE_REVISION = 21 
		, RANGE = 22 
		, RBRACK = 23 
		, RCURLY = 24 
		, RPAREN = 25 
		, STRING = 26 
		, UNICODE_ESC = 27 
		, WS = 28 
	};

};

/** Context tracking structure for 
CLexer

 */
class CLexer : public 
CLexerImplTraits::BaseLexerType
, public CLexerTokens
{
public:
	typedef CLexerImplTraits ImplTraits;
	typedef CLexer ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef 
CLexerImplTraits::BaseLexerType
 BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
    friend class CLexerCyclicDFA23;
    ANTLR_INT32 dfa23_sst(ANTLR_INT32 s);
 
public:
    CLexer(InputType* instream);
    CLexer(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );

    
     void
      mT__29( );

     void
      mT__30( );

     void
      mDOT( );

     void
      mRANGE( );

     void
      mIMPORT( );

     void
      mAT( );

     void
      mPACKAGE_REVISION( );

     void
      mBOOL( );

     void
      mINT( );

     void
      mFLOAT( );

     void
      mCOMMENT( );

     void
      mNEWLINE( );

     void
      mWS( );

     void
      mSTRING( );

     void
      mID( );

     void
      mLPAREN( );

     void
      mRPAREN( );

     void
      mLBRACK( );

     void
      mRBRACK( );

     void
      mLCURLY( );

     void
      mRCURLY( );

     void
      mID_LETTER( );

     void
      mDIGIT( );

     void
      mEXPONENT( );

     void
      mHEX_DIGIT( );

     void
      mESC_SEQ( );

     void
      mUNICODE_ESC( );

     void
      mTokens( );
    const char *    getGrammarFileName();
    void            reset();
    ~CLexer();


        bool insideImport_;

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for CLexer
 * =============================================================================
 */
/** } */


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
