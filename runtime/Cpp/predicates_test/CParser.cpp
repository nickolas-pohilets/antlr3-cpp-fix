/** \file
 *  This C++ source file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : predicates_test/C.g
 *     -                            On : 2013-06-05 11:02:36
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
static	ANTLR_BITWORD FOLLOW_set_in_main97_bits[]	= { ANTLR_UINT64_LIT(0x0000000067FFA972) };
static  CParserImplTraits::BitsetListType FOLLOW_set_in_main97( FOLLOW_set_in_main97_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_ID_in_foo423_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000010) };
static  CParserImplTraits::BitsetListType FOLLOW_ID_in_foo423( FOLLOW_ID_in_foo423_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_AT_in_foo425_bits[]	= { ANTLR_UINT64_LIT(0x0000000000010022) };
static  CParserImplTraits::BitsetListType FOLLOW_AT_in_foo425( FOLLOW_AT_in_foo425_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_foo_in_bar442_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000100) };
static  CParserImplTraits::BitsetListType FOLLOW_foo_in_bar442( FOLLOW_foo_in_bar442_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_DOT_in_bar445_bits[]	= { ANTLR_UINT64_LIT(0x0000000000400100) };
static  CParserImplTraits::BitsetListType FOLLOW_DOT_in_bar445( FOLLOW_DOT_in_bar445_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_foo_in_bar447_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  CParserImplTraits::BitsetListType FOLLOW_foo_in_bar447( FOLLOW_foo_in_bar447_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_foo_in_baz464_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  CParserImplTraits::BitsetListType FOLLOW_foo_in_baz464( FOLLOW_foo_in_baz464_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_DOT_in_baz472_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000110) };
static  CParserImplTraits::BitsetListType FOLLOW_DOT_in_baz472( FOLLOW_DOT_in_baz472_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_AT_in_baz475_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000030) };
static  CParserImplTraits::BitsetListType FOLLOW_AT_in_baz475( FOLLOW_AT_in_baz475_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_BOOL_in_baz478_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000022) };
static  CParserImplTraits::BitsetListType FOLLOW_BOOL_in_baz478( FOLLOW_BOOL_in_baz478_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_DOT_in_synpred1_C456_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000010) };
static  CParserImplTraits::BitsetListType FOLLOW_DOT_in_synpred1_C456( FOLLOW_DOT_in_synpred1_C456_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_AT_in_synpred1_C458_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000020) };
static  CParserImplTraits::BitsetListType FOLLOW_AT_in_synpred1_C458( FOLLOW_AT_in_synpred1_C458_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: CParser  */
static	ANTLR_BITWORD FOLLOW_BOOL_in_synpred1_C460_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  CParserImplTraits::BitsetListType FOLLOW_BOOL_in_synpred1_C460( FOLLOW_BOOL_in_synpred1_C460_bits, 1 );



/* =========================================================================
 * DFA tables for the parser
 */
/** Static dfa state tables for Cyclic dfa:
 *    86:7: ( foo )?
 */
static const ANTLR_INT32 dfa4_eot[8] =
    {
    -1, -1, -1, -1, -1, -1, -1, -1
    };
static const ANTLR_INT32 dfa4_eof[8] =
    {
    -1, -1, -1, -1, -1, 7, 7, -1
    };
static const ANTLR_INT32 dfa4_min[8] =
    {
    8, 8, -1, 8, 4, 5, 8, -1
    };
static const ANTLR_INT32 dfa4_max[8] =
    {
    22, 22, -1, 22, 4, 16, 8, -1
    };
static const ANTLR_INT32 dfa4_accept[8] =
    {
    -1, -1, 1, -1, -1, -1, -1, 2
    };
static const ANTLR_INT32 dfa4_special[8] =
    {
    -1, -1, -1, -1, -1, -1, -1, -1
    };

/** Used when there is no transition table entry for a particular state */
static const ANTLR_INT32* dfa4_T_empty	 =   NULL;

static const ANTLR_INT32 dfa4_T0[] =
    {
    5
    };
static const ANTLR_INT32 dfa4_T1[] =
    {
    1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2
    };
static const ANTLR_INT32 dfa4_T2[] =
    {
    3, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, 3
    };
static const ANTLR_INT32 dfa4_T3[] =
    {
    2
    };
static const ANTLR_INT32 dfa4_T4[] =
    {
    6, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1, 6
    };
static const ANTLR_INT32 dfa4_T5[] =
    {
    3, -1, -1, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1, -1, 3
    };


/* Transition tables are a table of sub tables, with some tables
 * reused for efficiency.
 */
static const ANTLR_INT32 * const dfa4_transitions[] =
{
    dfa4_T1, dfa4_T5, NULL, dfa4_T2, dfa4_T0, dfa4_T4, dfa4_T3, NULL
};


/* Declare tracking structure for Cyclic DFA 4
 */
class CParserCyclicDFA4 : public CyclicDFA< CParserImplTraits, CParser >, public CParserTokens
{
public:
    typedef CyclicDFA< CParserImplTraits, CParser >  BaseType;
    typedef BaseType::ContextType CtxType;

    CParserCyclicDFA4( ANTLR_INT32	decisionNumber
                    , const ANTLR_UCHAR*	description
                    , const ANTLR_INT32* const	eot
                    , const ANTLR_INT32* const	eof
                    , const ANTLR_INT32* const	min
                    , const ANTLR_INT32* const	max
                    , const ANTLR_INT32* const	accept
                    , const ANTLR_INT32* const	special
                    , const ANTLR_INT32* const *const	transition)
                    :BaseType( decisionNumber, description, eot, eof, min, max, accept,
                                special, transition )
    {
    }
};

static CParserCyclicDFA4  cdfa4(
        4,		    /* Decision number of this dfa	    */
        /* Which decision this represents:   */
        (const ANTLR_UCHAR*)"86:7: ( foo )?",
        dfa4_eot,	    /* EOT table			    */
        dfa4_eof,	    /* EOF table			    */
        dfa4_min,	    /* Minimum tokens for each state    */
        dfa4_max,	    /* Maximum tokens for each state    */
        dfa4_accept,	/* Accept table			    */
        dfa4_special,	/* Special transition states	    */
        dfa4_transitions	/* Table of transition tables	    */

    );


/* End of Cyclic DFA 4
 * ---------------------
 *//** Static dfa state tables for Cyclic dfa:
 *    87:1: baz : ( ( DOT AT BOOL )=> foo | ( DOT )+ ( AT )+ ( BOOL )+ );
 */
static const ANTLR_INT32 dfa8_eot[5] =
    {
    -1, -1, -1, -1, -1
    };
static const ANTLR_INT32 dfa8_eof[5] =
    {
    -1, -1, -1, -1, -1
    };
static const ANTLR_INT32 dfa8_min[5] =
    {
    8, 4, -1, -1, -1
    };
static const ANTLR_INT32 dfa8_max[5] =
    {
    22, 22, -1, -1, -1
    };
static const ANTLR_INT32 dfa8_accept[5] =
    {
    -1, -1, 1, 1, 2
    };
static const ANTLR_INT32 dfa8_special[5] =
    {
    1, 0, -1, -1, -1
    };

/** Used when there is no transition table entry for a particular state */
static const ANTLR_INT32* dfa8_T_empty	 =   NULL;

static const ANTLR_INT32 dfa8_T0[] =
    {
    4, -1, -1, -1, 1, -1, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, 
    2
    };
static const ANTLR_INT32 dfa8_T1[] =
    {
    1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2
    };


/* Transition tables are a table of sub tables, with some tables
 * reused for efficiency.
 */
static const ANTLR_INT32 * const dfa8_transitions[] =
{
    dfa8_T1, dfa8_T0, NULL, NULL, NULL
};


/* Declare tracking structure for Cyclic DFA 8
 */
class CParserCyclicDFA8 : public CyclicDFA< CParserImplTraits, CParser >, public CParserTokens
{
public:
    typedef CyclicDFA< CParserImplTraits, CParser >  BaseType;
    typedef BaseType::ContextType CtxType;

    CParserCyclicDFA8( ANTLR_INT32	decisionNumber
                    , const ANTLR_UCHAR*	description
                    , const ANTLR_INT32* const	eot
                    , const ANTLR_INT32* const	eof
                    , const ANTLR_INT32* const	min
                    , const ANTLR_INT32* const	max
                    , const ANTLR_INT32* const	accept
                    , const ANTLR_INT32* const	special
                    , const ANTLR_INT32* const *const	transition)
                    :BaseType( decisionNumber, description, eot, eof, min, max, accept,
                                special, transition )
    {
    }
    ANTLR_INT32 specialStateTransition(CtxType * ctx, RecognizerType* /*recognizer*/, IntStreamType* /*is*/, ANTLR_INT32 s)
    {
        return ctx->dfa8_sst(s);
    }
};

ANTLR_INT32 CParser::dfa8_sst(ANTLR_INT32 s)
{
    const ANTLR_INT32 _s = s;
    switch(s)
    {
        case 0:

        {
            ANTLR_UINT32 LA8_1;

            ANTLR_MARKER index8_1;


            LA8_1 = LA(1);

             
                index8_1 = index();

                rewindLast();

            s = -1;
            if ( (this->msynpred( antlr3::ClassForwarder<synpred1_C>() )) && (LA8_1 == ID) )
            {
                s = 3;
            }

            else if ( (LA8_1 == DOT) )
            {
                s = 1;
            }

            else if ( (LA8_1 == AT) )
            {
                s = 4;
            }

            else if ( (this->msynpred( antlr3::ClassForwarder<synpred1_C>() )) && (LA8_1 == RANGE) )
            {
                s = 2;
            }

             
                seek(index8_1);

            if ( s>=0 )
            {
            return s;
            }
        }
        break;
        case 1:

        {
            ANTLR_UINT32 LA8_0;

            ANTLR_MARKER index8_0;


            LA8_0 = LA(1);

             
                index8_0 = index();

                rewindLast();

            s = -1;
            if ( (LA8_0 == DOT) )
            {
                s = 1;
            }

            else if ( (this->msynpred( antlr3::ClassForwarder<synpred1_C>() )) && (LA8_0 == RANGE) )
            {
                s = 2;
            }

             
                seek(index8_0);

            if ( s>=0 )
            {
            return s;
            }
        }
        break;
    }
    if ( get_backtracking() > 0)
    {
    set_failedflag( true );
    return  -1;
    }
    ExceptionBaseType* ex = new ANTLR_Exception< CParserImplTraits, NO_VIABLE_ALT_EXCEPTION, StreamType>(
        get_rec(),
        "87:1: baz : ( ( DOT AT BOOL )=> foo | ( DOT )+ ( AT )+ ( BOOL )+ );"
    );
    ex->set_decisionNum( 8 );
    ex->set_state(_s);
    return -1;
}

static CParserCyclicDFA8  cdfa8(
        8,		    /* Decision number of this dfa	    */
        /* Which decision this represents:   */
        (const ANTLR_UCHAR*)"87:1: baz : ( ( DOT AT BOOL )=> foo | ( DOT )+ ( AT )+ ( BOOL )+ );",
        dfa8_eot,	    /* EOT table			    */
        dfa8_eof,	    /* EOF table			    */
        dfa8_min,	    /* Minimum tokens for each state    */
        dfa8_max,	    /* Maximum tokens for each state    */
        dfa8_accept,	/* Accept table			    */
        dfa8_special,	/* Special transition states	    */
        dfa8_transitions	/* Table of transition tables	    */

    );


/* End of Cyclic DFA 8
 * ---------------------
 */ 
/* =========================================================================
 * End of DFA tables for the parser
 */

/* ==============================================
 * Parsing rules
 */
/**
 * $ANTLR start main
 * predicates_test/C.g:48:1: main : (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+ ;
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
        // predicates_test/C.g:48:6: ( (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+ )
        // predicates_test/C.g:48:8: (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+
        {
            // predicates_test/C.g:48:8: (t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' ) )+
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
                        // predicates_test/C.g:48:10: t= ( DOT | RANGE | IMPORT | AT | PACKAGE_REVISION | BOOL | INT | FLOAT | COMMENT | NEWLINE | STRING | ID | LPAREN | RPAREN | LBRACK | RBRACK | LCURLY | RCURLY | ':' | '=' )
                        {
                            t=(const CommonTokenType*) this->LT(1);

                            if ( ((this->LA(1) >= AT) && (this->LA(1) <= COMMENT)) || this->LA(1) == DOT || this->LA(1) == FLOAT || this->LA(1) == ID || ((this->LA(1) >= IMPORT) && (this->LA(1) <= STRING)) || ((this->LA(1) >= 29) && (this->LA(1) <= 30)) )
                            {
                                this->consume();
                                this->set_perror_recovery(false);
                                 this->set_failedflag(false); 

                            }
                            else
                            {
                                if (this->get_backtracking()>0)
                                {
                                    this->set_failedflag( true );
                                    return ;
                                }

                                new ANTLR_Exception< CParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
                                this->get_exception()->set_expectingSet(NULL);

                                goto rulemainEx;
                            }


                            if ( this->get_backtracking()==0 )
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
                    if (this->get_backtracking()>0)
                    {
                        this->set_failedflag( true );
                        return ;
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

/**
 * $ANTLR start foo
 * predicates_test/C.g:85:1: foo : ( DOT | RANGE )+ ID AT ( BOOL | INT )? ;
 */
void
CParser::foo()
{
        CParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // predicates_test/C.g:85:5: ( ( DOT | RANGE )+ ID AT ( BOOL | INT )? )
        // predicates_test/C.g:85:7: ( DOT | RANGE )+ ID AT ( BOOL | INT )?
        {
            // predicates_test/C.g:85:7: ( DOT | RANGE )+
            {
                int cnt2=0;

                for (;;)
                {
                    int alt2=2;
                switch ( this->LA(1) )
                {
                case DOT:
                case RANGE:
                    {
                        alt2=1;
                    }
                    break;

                }

                switch (alt2)
                {
                    case 1:
                        // predicates_test/C.g:
                        {
                            if ( this->LA(1) == DOT || this->LA(1) == RANGE )
                            {
                                this->consume();
                                this->set_perror_recovery(false);
                                 this->set_failedflag(false); 

                            }
                            else
                            {
                                if (this->get_backtracking()>0)
                                {
                                    this->set_failedflag( true );
                                    return ;
                                }

                                new ANTLR_Exception< CParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
                                this->get_exception()->set_expectingSet(NULL);

                                goto rulefooEx;
                            }


                        }
                        break;

                    default:

                    if ( cnt2 >= 1 )
                    {
                        goto loop2;
                    }
                    if (this->get_backtracking()>0)
                    {
                        this->set_failedflag( true );
                        return ;
                    }

                    /* mismatchedSetEx()
                     */
                    new ANTLR_Exception< CParserImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


                    goto rulefooEx;
                }
                cnt2++;
                }
                loop2: ;	/* Jump to here if this rule does not match */
            }

             this->matchToken(ID, &FOLLOW_ID_in_foo423);
            if  (this->hasException())
            {
                goto rulefooEx;
            }
            if (this->hasFailed())
            {
                return ;
            }


             this->matchToken(AT, &FOLLOW_AT_in_foo425);
            if  (this->hasException())
            {
                goto rulefooEx;
            }
            if (this->hasFailed())
            {
                return ;
            }


            // predicates_test/C.g:85:28: ( BOOL | INT )?
            {
                int alt3=2;
                switch ( this->LA(1) )
                {
                    case BOOL:
                    case INT:
                        {
                            alt3=1;
                        }
                        break;
                }

                switch (alt3)
                {
                case 1:
                    // predicates_test/C.g:
                    {
                        if ( this->LA(1) == BOOL || this->LA(1) == INT )
                        {
                            this->consume();
                            this->set_perror_recovery(false);
                             this->set_failedflag(false); 

                        }
                        else
                        {
                            if (this->get_backtracking()>0)
                            {
                                this->set_failedflag( true );
                                return ;
                            }

                            new ANTLR_Exception< CParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
                            this->get_exception()->set_expectingSet(NULL);

                            goto rulefooEx;
                        }


                    }
                    break;

                }
            }

        }

    }
    // This is where rules clean up and exit
    //
    goto rulefooEx; /* Prevent compiler warnings */
    rulefooEx: ;


        if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end foo */

/**
 * $ANTLR start bar
 * predicates_test/C.g:86:1: bar : ( foo )? DOT foo ;
 */
void
CParser::bar()
{
        CParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // predicates_test/C.g:86:5: ( ( foo )? DOT foo )
        // predicates_test/C.g:86:7: ( foo )? DOT foo
        {
            // predicates_test/C.g:86:7: ( foo )?
            {
                int alt4=2;
                alt4 = cdfa4.predict(this, this->get_rec(), this->get_istream(), cdfa4 );
                if  (this->hasException())
                {
                    goto rulebarEx;
                }
                if (this->hasFailed())
                {
                    return ;
                }

                switch (alt4)
                {
                case 1:
                    // predicates_test/C.g:86:7: foo
                    {
                        this->followPush(FOLLOW_foo_in_bar442);
                        foo();

                        this->followPop();
                        if  (this->hasException())
                        {
                            goto rulebarEx;
                        }
                        if (this->hasFailed())
                        {
                            return ;
                        }


                    }
                    break;

                }
            }

             this->matchToken(DOT, &FOLLOW_DOT_in_bar445);
            if  (this->hasException())
            {
                goto rulebarEx;
            }
            if (this->hasFailed())
            {
                return ;
            }


            this->followPush(FOLLOW_foo_in_bar447);
            foo();

            this->followPop();
            if  (this->hasException())
            {
                goto rulebarEx;
            }
            if (this->hasFailed())
            {
                return ;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto rulebarEx; /* Prevent compiler warnings */
    rulebarEx: ;


        if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end bar */

/**
 * $ANTLR start baz
 * predicates_test/C.g:87:1: baz : ( ( DOT AT BOOL )=> foo | ( DOT )+ ( AT )+ ( BOOL )+ );
 */
void
CParser::baz()
{
        CParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        {
            //  predicates_test/C.g:87:5: ( ( DOT AT BOOL )=> foo | ( DOT )+ ( AT )+ ( BOOL )+ )

            ANTLR_UINT32 alt8;

            alt8=2;

            alt8 = cdfa8.predict(this, this->get_rec(), this->get_istream(), cdfa8 );
            if  (this->hasException())
            {
                goto rulebazEx;
            }
            if (this->hasFailed())
            {
                return ;
            }

            switch (alt8)
            {
            case 1:
                // predicates_test/C.g:87:7: ( DOT AT BOOL )=> foo
                {
                    this->followPush(FOLLOW_foo_in_baz464);
                    foo();

                    this->followPop();
                    if  (this->hasException())
                    {
                        goto rulebazEx;
                    }
                    if (this->hasFailed())
                    {
                        return ;
                    }


                }
                break;
            case 2:
                // predicates_test/C.g:88:7: ( DOT )+ ( AT )+ ( BOOL )+
                {
                    // predicates_test/C.g:88:7: ( DOT )+
                    {
                        int cnt5=0;

                        for (;;)
                        {
                            int alt5=2;
                        switch ( this->LA(1) )
                        {
                        case DOT:
                            {
                                alt5=1;
                            }
                            break;

                        }

                        switch (alt5)
                        {
                            case 1:
                                // predicates_test/C.g:88:7: DOT
                                {
                                     this->matchToken(DOT, &FOLLOW_DOT_in_baz472);
                                    if  (this->hasException())
                                    {
                                        goto rulebazEx;
                                    }
                                    if (this->hasFailed())
                                    {
                                        return ;
                                    }


                                }
                                break;

                            default:

                            if ( cnt5 >= 1 )
                            {
                                goto loop5;
                            }
                            if (this->get_backtracking()>0)
                            {
                                this->set_failedflag( true );
                                return ;
                            }

                            /* mismatchedSetEx()
                             */
                            new ANTLR_Exception< CParserImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


                            goto rulebazEx;
                        }
                        cnt5++;
                        }
                        loop5: ;	/* Jump to here if this rule does not match */
                    }

                    // predicates_test/C.g:88:12: ( AT )+
                    {
                        int cnt6=0;

                        for (;;)
                        {
                            int alt6=2;
                        switch ( this->LA(1) )
                        {
                        case AT:
                            {
                                alt6=1;
                            }
                            break;

                        }

                        switch (alt6)
                        {
                            case 1:
                                // predicates_test/C.g:88:12: AT
                                {
                                     this->matchToken(AT, &FOLLOW_AT_in_baz475);
                                    if  (this->hasException())
                                    {
                                        goto rulebazEx;
                                    }
                                    if (this->hasFailed())
                                    {
                                        return ;
                                    }


                                }
                                break;

                            default:

                            if ( cnt6 >= 1 )
                            {
                                goto loop6;
                            }
                            if (this->get_backtracking()>0)
                            {
                                this->set_failedflag( true );
                                return ;
                            }

                            /* mismatchedSetEx()
                             */
                            new ANTLR_Exception< CParserImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


                            goto rulebazEx;
                        }
                        cnt6++;
                        }
                        loop6: ;	/* Jump to here if this rule does not match */
                    }

                    // predicates_test/C.g:88:16: ( BOOL )+
                    {
                        int cnt7=0;

                        for (;;)
                        {
                            int alt7=2;
                        switch ( this->LA(1) )
                        {
                        case BOOL:
                            {
                                alt7=1;
                            }
                            break;

                        }

                        switch (alt7)
                        {
                            case 1:
                                // predicates_test/C.g:88:16: BOOL
                                {
                                     this->matchToken(BOOL, &FOLLOW_BOOL_in_baz478);
                                    if  (this->hasException())
                                    {
                                        goto rulebazEx;
                                    }
                                    if (this->hasFailed())
                                    {
                                        return ;
                                    }


                                }
                                break;

                            default:

                            if ( cnt7 >= 1 )
                            {
                                goto loop7;
                            }
                            if (this->get_backtracking()>0)
                            {
                                this->set_failedflag( true );
                                return ;
                            }

                            /* mismatchedSetEx()
                             */
                            new ANTLR_Exception< CParserImplTraits, EARLY_EXIT_EXCEPTION, StreamType>( this->get_rec(), "" );


                            goto rulebazEx;
                        }
                        cnt7++;
                        }
                        loop7: ;	/* Jump to here if this rule does not match */
                    }

                }
                break;

            }
        }
    }
    // This is where rules clean up and exit
    //
    goto rulebazEx; /* Prevent compiler warnings */
    rulebazEx: ;


        if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end baz */

// $ANTLR start synpred1_C
void CParser::msynpred1_C_fragment(  )
{
    // predicates_test/C.g:87:7: ( DOT AT BOOL )
    // predicates_test/C.g:87:8: DOT AT BOOL
    {
         this->matchToken(DOT, &FOLLOW_DOT_in_synpred1_C456);
        if  (this->hasException())
        {
            goto rulesynpred1_CEx;
        }
        if (this->hasFailed())
        {
            return ;
        }


         this->matchToken(AT, &FOLLOW_AT_in_synpred1_C458);
        if  (this->hasException())
        {
            goto rulesynpred1_CEx;
        }
        if (this->hasFailed())
        {
            return ;
        }


         this->matchToken(BOOL, &FOLLOW_BOOL_in_synpred1_C460);
        if  (this->hasException())
        {
            goto rulesynpred1_CEx;
        }
        if (this->hasFailed())
        {
            return ;
        }


    }

// This is where rules clean up and exit
//
goto rulesynpred1_CEx; /* Prevent compiler warnings */
rulesynpred1_CEx: ;

}
// $ANTLR end synpred1_C
/* End of parsing rules
 * ==============================================
 */

/* ==============================================
 * Syntactic predicates
 */
bool CParser::msynpred( antlr3::ClassForwarder< synpred1_C >  )
{
    ANTLR_MARKER   start;
    bool  success;

    this->inc_backtracking();
    start	= this->mark();
    this->msynpred1_C_fragment();	    // can never throw exception
    success	= !( this->get_failedflag() );
    this->rewind(start);
    this->dec_backtracking();
    this->set_failedflag(false);
    return success;
}

/* End of syntactic predicates
 * ==============================================
 */



/* End of code
 * =============================================================================
 */
