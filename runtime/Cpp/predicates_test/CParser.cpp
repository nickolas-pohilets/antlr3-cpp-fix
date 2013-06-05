/** \file
 *  This C++ source file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : predicates_test/C.g
 *     -                            On : 2013-06-04 17:11:56
 *     -                for the parser : CParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
*/
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram, ElectronDB
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

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "CParser.hpp"
/* ----------------------------------------- */


/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

using namespace antlr3;
/** \brief Table of all token names in symbolic order, mainly used for
 *         error reporting.
 */
ANTLR_UINT8*   CParserTokenNames[27+4]
     = {
        (ANTLR_UINT8*) "<invalid>",       /* String to print to indicate an invalid token */
        (ANTLR_UINT8*) "<EOR>",
        (ANTLR_UINT8*) "<DOWN>",
        (ANTLR_UINT8*) "<UP>",
        (ANTLR_UINT8*) "AT",
        (ANTLR_UINT8*) "BOOL",
        (ANTLR_UINT8*) "COMMENT",
        (ANTLR_UINT8*) "DIGIT",
        (ANTLR_UINT8*) "DOT",
        (ANTLR_UINT8*) "ESC_SEQ",
        (ANTLR_UINT8*) "EXPONENT",
        (ANTLR_UINT8*) "FLOAT",
        (ANTLR_UINT8*) "HEX_DIGIT",
        (ANTLR_UINT8*) "ID",
        (ANTLR_UINT8*) "ID_LETTER",
        (ANTLR_UINT8*) "IMPORT",
        (ANTLR_UINT8*) "INT",
        (ANTLR_UINT8*) "LBRACK",
        (ANTLR_UINT8*) "LCURLY",
        (ANTLR_UINT8*) "LPAREN",
        (ANTLR_UINT8*) "NEWLINE",
        (ANTLR_UINT8*) "PACKAGE_REVISION",
        (ANTLR_UINT8*) "RANGE",
        (ANTLR_UINT8*) "RBRACK",
        (ANTLR_UINT8*) "RCURLY",
        (ANTLR_UINT8*) "RPAREN",
        (ANTLR_UINT8*) "STRING",
        (ANTLR_UINT8*) "UNICODE_ESC",
        (ANTLR_UINT8*) "WS",
        (ANTLR_UINT8*) "':'",
        (ANTLR_UINT8*) "'='"
       };


/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "predicates_test/C.g";

/** \brief Return the name of the grammar file that generated this code.
 */
const char* CParser::getGrammarFileName()
{
	return fileName;
}
/** \brief Create a new CParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
CParser::CParser( StreamType* instream)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, NULL)

{
	// See if we can create a new parser with the standard constructor
	//
	this->init(instream);
}

/** \brief Create a new CParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
CParser::CParser( StreamType* instream, RecognizerSharedStateType* state)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, state)

{
	this->init(instream );
}

void CParser::init(StreamType* instream)
{
	/* Install the token table
	*/
	this->get_psrstate()->set_tokenNames( CParserTokenNames );


}

void
CParser::reset()
{
    this->get_rec()->reset();
}

/** Free the parser resources
 */
CParser::~CParser()
 {
}

/** Return token names used by this 
parser

 *
 * The returned pointer is used as an index into the token names table (using the token
 * number as the index).
 *
 * \return Pointer to first char * in the table.
 */
static ANTLR_UINT8**	getTokenNames()
{
        return CParserTokenNames;
}






/* Declare the bitsets
 */
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_set_in_main94_bits[]	= { ANTLR_UINT64_LIT(0x0000000067FFA972) };
static  CParserImplTraits::BitsetListType FOLLOW_set_in_main94( FOLLOW_set_in_main94_bits, 1 );


/* ==============================================
 * Parsing rules
 */
/**
 * $ANTLR start main
 * predicates_test/C.g:45:1: main : (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+ ;
 */
void
CParser::main()
{
        CParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    const CommonTokenType*    t;

    /* Initialize rule variables
     */

    t       = NULL;


 
    {
        // predicates_test/C.g:45:6: ( (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+ )
        // predicates_test/C.g:45:8: (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+
        {
            // predicates_test/C.g:45:8: (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+
            {
                int cnt1=0;

                for (;;)
                {
                    int alt1=2;
            	switch ( this->LA(1) )
            	{
            	case AT:
            	case BOOL:
            	case COMMENT:
            	case DOT:
            	case FLOAT:
            	case ID:
            	case IMPORT:
            	case INT:
            	case LBRACK:
            	case LCURLY:
            	case LPAREN:
            	case NEWLINE:
            	case PACKAGE_REVISION:
            	case RANGE:
            	case RBRACK:
            	case RCURLY:
            	case RPAREN:
            	case STRING:
            	case 29:
            	case 30:
            		{
            			alt1=1;
            		}
            	    break;

            	}

            	switch (alt1)
            	{
            	    case 1:
            	        // predicates_test/C.g:45:10: t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' )
            	        {
            	            t=(const CommonTokenType*) this->LT(1);

            	            if ( ((this->LA(1) >= AT) && (this->LA(1) <= COMMENT)) || this->LA(1) == DOT || this->LA(1) == FLOAT || this->LA(1) == ID || ((this->LA(1) >= IMPORT) && (this->LA(1) <= STRING)) || ((this->LA(1) >= 29) && (this->LA(1) <= 30)) )
            	            {
            	                this->consume();
            	                this->set_perror_recovery(false);
            	            }
            	            else
            	            {
            	                new ANTLR_Exception< CParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
            	                this->get_exception()->set_expectingSet(NULL);

            	                goto rulemainEx;
            	            }


            	            {

            	                          std::cout << CParserTokenNames[t->getType()];
            	                          switch (t->getType())
            	                          {
            	                          case PACKAGE_REVISION:
            	                          case BOOL:
            	                          case INT:
            	                          case FLOAT:
            	                          case COMMENT:
            	                          case STRING:
            	                          case ID:
            	                              std::cout << "=\"" << t->getText() << "\"";
            	                          }
            	                          std::cout << std::endl;
            	                        
            	            }


            	        }
            	        break;

            	    default:

            		if ( cnt1 >= 1 )
            		{
            		    goto loop1;
            		}
            		/* mismatchedSetEx()
            		 */
            		new ANTLR_Exception< CParserImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


            		goto rulemainEx;
            	}
            	cnt1++;
                }
                loop1: ;	/* Jump to here if this rule does not match */
            }

        }

    }
    // This is where rules clean up and exit
    //
    goto rulemainEx; /* Prevent compiler warnings */
    rulemainEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end main */
/* End of parsing rules
 * ==============================================
 */

/* ==============================================
 * Syntactic predicates
 */
/* End of syntactic predicates
 * ==============================================
 */



/* End of code
 * =============================================================================
 */