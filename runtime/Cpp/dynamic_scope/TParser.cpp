/** \file
 *  This C++ source file was generated by $ANTLR version 3.5
 *
 *     -  From the grammar source file : dynamic_scope/T.g
 *     -                            On : 2013-06-02 23:40:49
 *     -                for the parser : TParserParser
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
#include    "TParser.hpp"
/* ----------------------------------------- */


/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

	namespace 	User  {

using namespace antlr3;
/** \brief Table of all token names in symbolic order, mainly used for
 *         error reporting.
 */
ANTLR_UINT8*   TParserTokenNames[12+4]
     = {
        (ANTLR_UINT8*) "<invalid>",       /* String to print to indicate an invalid token */
        (ANTLR_UINT8*) "<EOR>",
        (ANTLR_UINT8*) "<DOWN>",
        (ANTLR_UINT8*) "<UP>",
        (ANTLR_UINT8*) "ID",
        (ANTLR_UINT8*) "INT",
        (ANTLR_UINT8*) "WS",
        (ANTLR_UINT8*) "'('",
        (ANTLR_UINT8*) "')'",
        (ANTLR_UINT8*) "'*'",
        (ANTLR_UINT8*) "'+'",
        (ANTLR_UINT8*) "';'",
        (ANTLR_UINT8*) "'='",
        (ANTLR_UINT8*) "'method'",
        (ANTLR_UINT8*) "'{'",
        (ANTLR_UINT8*) "'}'"
       };


/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "dynamic_scope/T.g";

/** \brief Return the name of the grammar file that generated this code.
 */
const char* TParser::getGrammarFileName()
{
	return fileName;
}
/** \brief Create a new TParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
TParser::TParser( StreamType* instream)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, NULL)

{
	// See if we can create a new parser with the standard constructor
	//
	this->init(instream);
}

/** \brief Create a new TParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
TParser::TParser( StreamType* instream, RecognizerSharedStateType* state)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, state)

{
	this->init(instream );
}

void TParser::init(StreamType* instream)
{
	/* Install the token table
	*/
	this->get_psrstate()->set_tokenNames( TParserTokenNames );


}

void
TParser::reset()
{
    this->get_rec()->reset();
}

/** Free the parser resources
 */
TParser::~TParser()
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
        return TParserTokenNames;
}


/* Declare the bitsets
 */
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_method_in_program66_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  TParserImplTraits::BitsetListType FOLLOW_method_in_program66( FOLLOW_method_in_program66_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_13_in_method94_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000010) };
static  TParserImplTraits::BitsetListType FOLLOW_13_in_method94( FOLLOW_13_in_method94_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_ID_in_method96_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000080) };
static  TParserImplTraits::BitsetListType FOLLOW_ID_in_method96( FOLLOW_ID_in_method96_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_7_in_method98_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000100) };
static  TParserImplTraits::BitsetListType FOLLOW_7_in_method98( FOLLOW_7_in_method98_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_8_in_method100_bits[]	= { ANTLR_UINT64_LIT(0x0000000000004000) };
static  TParserImplTraits::BitsetListType FOLLOW_8_in_method100( FOLLOW_8_in_method100_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_body_in_method104_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  TParserImplTraits::BitsetListType FOLLOW_body_in_method104( FOLLOW_body_in_method104_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_14_in_body124_bits[]	= { ANTLR_UINT64_LIT(0x000000000000A010) };
static  TParserImplTraits::BitsetListType FOLLOW_14_in_body124( FOLLOW_14_in_body124_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_bstat_in_body126_bits[]	= { ANTLR_UINT64_LIT(0x000000000000A010) };
static  TParserImplTraits::BitsetListType FOLLOW_bstat_in_body126( FOLLOW_bstat_in_body126_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_15_in_body129_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  TParserImplTraits::BitsetListType FOLLOW_15_in_body129( FOLLOW_15_in_body129_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_ID_in_bstat150_bits[]	= { ANTLR_UINT64_LIT(0x0000000000001000) };
static  TParserImplTraits::BitsetListType FOLLOW_ID_in_bstat150( FOLLOW_ID_in_bstat150_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_12_in_bstat152_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000030) };
static  TParserImplTraits::BitsetListType FOLLOW_12_in_bstat152( FOLLOW_12_in_bstat152_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_expr_in_bstat154_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000800) };
static  TParserImplTraits::BitsetListType FOLLOW_expr_in_bstat154( FOLLOW_expr_in_bstat154_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_11_in_bstat156_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  TParserImplTraits::BitsetListType FOLLOW_11_in_bstat156( FOLLOW_11_in_bstat156_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_method_in_bstat166_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  TParserImplTraits::BitsetListType FOLLOW_method_in_bstat166( FOLLOW_method_in_bstat166_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_mul_in_expr181_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000402) };
static  TParserImplTraits::BitsetListType FOLLOW_mul_in_expr181( FOLLOW_mul_in_expr181_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_10_in_expr184_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000030) };
static  TParserImplTraits::BitsetListType FOLLOW_10_in_expr184( FOLLOW_10_in_expr184_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_mul_in_expr186_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000402) };
static  TParserImplTraits::BitsetListType FOLLOW_mul_in_expr186( FOLLOW_mul_in_expr186_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_atom_in_mul204_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000202) };
static  TParserImplTraits::BitsetListType FOLLOW_atom_in_mul204( FOLLOW_atom_in_mul204_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_9_in_mul207_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000030) };
static  TParserImplTraits::BitsetListType FOLLOW_9_in_mul207( FOLLOW_9_in_mul207_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: TParser  */
static	ANTLR_BITWORD FOLLOW_atom_in_mul209_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000202) };
static  TParserImplTraits::BitsetListType FOLLOW_atom_in_mul209( FOLLOW_atom_in_mul209_bits, 1 );


/* ==============================================
 * Parsing rules
 */
/**
 * $ANTLR start program
 * dynamic_scope/T.g:41:1: program : method ;
 */
void
TParser::program()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // dynamic_scope/T.g:42:5: ( method )
        // dynamic_scope/T.g:42:7: method
        {
            this->followPush(FOLLOW_method_in_program66);
            method();

            this->followPop();
            if  (this->hasException())
            {
                goto ruleprogramEx;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto ruleprogramEx; /* Prevent compiler warnings */
    ruleprogramEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end program */

/**
 * $ANTLR start method
 * dynamic_scope/T.g:44:1: method : 'method' ID '(' ')' body ;
 */
void
TParser::method()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    const CommonTokenType*    ID1;

    /* Initialize rule variables
     */
    m_method_stack.push(methodScope()); 
    ID1       = NULL;


 
    {
        // dynamic_scope/T.g:56:5: ( 'method' ID '(' ')' body )
        // dynamic_scope/T.g:56:9: 'method' ID '(' ')' body
        {
             this->matchToken(13, &FOLLOW_13_in_method94);
            if  (this->hasException())
            {
                goto rulemethodEx;
            }


            ID1 =  this->matchToken(ID, &FOLLOW_ID_in_method96);
            if  (this->hasException())
            {
                goto rulemethodEx;
            }


             this->matchToken(7, &FOLLOW_7_in_method98);
            if  (this->hasException())
            {
                goto rulemethodEx;
            }


             this->matchToken(8, &FOLLOW_8_in_method100);
            if  (this->hasException())
            {
                goto rulemethodEx;
            }


            {
                m_method_stack.peek().name =(ID1->getText());
            }


            this->followPush(FOLLOW_body_in_method104);
            body();

            this->followPop();
            if  (this->hasException())
            {
                goto rulemethodEx;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto rulemethodEx; /* Prevent compiler warnings */
    rulemethodEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    m_method_stack.pop(); 

    return ;
}
/* $ANTLR end method */

/**
 * $ANTLR start body
 * dynamic_scope/T.g:59:1: body : '{' ( bstat )* '}' ;
 */
void
TParser::body()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // dynamic_scope/T.g:60:5: ( '{' ( bstat )* '}' )
        // dynamic_scope/T.g:60:9: '{' ( bstat )* '}'
        {
             this->matchToken(14, &FOLLOW_14_in_body124);
            if  (this->hasException())
            {
                goto rulebodyEx;
            }


            // dynamic_scope/T.g:60:13: ( bstat )*

            for (;;)
            {
                int alt1=2;
                switch ( this->LA(1) )
                {
                case ID:
                case 13:
                	{
                		alt1=1;
                	}
                    break;

                }

                switch (alt1)
                {
            	case 1:
            	    // dynamic_scope/T.g:60:13: bstat
            	    {
            	        this->followPush(FOLLOW_bstat_in_body126);
            	        bstat();

            	        this->followPop();
            	        if  (this->hasException())
            	        {
            	            goto rulebodyEx;
            	        }


            	    }
            	    break;

            	default:
            	    goto loop1;	/* break out of the loop */
            	    break;
                }
            }
            loop1: ; /* Jump out to here if this rule does not match */


             this->matchToken(15, &FOLLOW_15_in_body129);
            if  (this->hasException())
            {
                goto rulebodyEx;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto rulebodyEx; /* Prevent compiler warnings */
    rulebodyEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end body */

/**
 * $ANTLR start bstat
 * dynamic_scope/T.g:65:1: bstat : ( ID '=' expr ';' | method );
 */
void
TParser::bstat()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        {
            //  dynamic_scope/T.g:66:5: ( ID '=' expr ';' | method )

            ANTLR_UINT32 alt2;

            alt2=2;

            switch ( this->LA(1) )
            {
            case ID:
            	{
            		alt2=1;
            	}
                break;
            case 13:
            	{
            		alt2=2;
            	}
                break;

            default:
                ExceptionBaseType* ex = new ANTLR_Exception< TParserImplTraits, NO_VIABLE_ALT_EXCEPTION, StreamType>( this->get_rec(), "" );
                ex->set_decisionNum( 2 );
                ex->set_state( 0 );


                goto rulebstatEx;

            }

            switch (alt2)
            {
        	case 1:
        	    // dynamic_scope/T.g:66:9: ID '=' expr ';'
        	    {
        	         this->matchToken(ID, &FOLLOW_ID_in_bstat150);
        	        if  (this->hasException())
        	        {
        	            goto rulebstatEx;
        	        }


        	         this->matchToken(12, &FOLLOW_12_in_bstat152);
        	        if  (this->hasException())
        	        {
        	            goto rulebstatEx;
        	        }


        	        this->followPush(FOLLOW_expr_in_bstat154);
        	        expr();

        	        this->followPop();
        	        if  (this->hasException())
        	        {
        	            goto rulebstatEx;
        	        }


        	         this->matchToken(11, &FOLLOW_11_in_bstat156);
        	        if  (this->hasException())
        	        {
        	            goto rulebstatEx;
        	        }


        	    }
        	    break;
        	case 2:
        	    // dynamic_scope/T.g:67:9: method
        	    {
        	        this->followPush(FOLLOW_method_in_bstat166);
        	        method();

        	        this->followPop();
        	        if  (this->hasException())
        	        {
        	            goto rulebstatEx;
        	        }


        	    }
        	    break;

            }
        }
    }
    // This is where rules clean up and exit
    //
    goto rulebstatEx; /* Prevent compiler warnings */
    rulebstatEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end bstat */

/**
 * $ANTLR start expr
 * dynamic_scope/T.g:70:1: expr : mul ( '+' mul )* ;
 */
void
TParser::expr()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // dynamic_scope/T.g:70:5: ( mul ( '+' mul )* )
        // dynamic_scope/T.g:70:9: mul ( '+' mul )*
        {
            this->followPush(FOLLOW_mul_in_expr181);
            mul();

            this->followPop();
            if  (this->hasException())
            {
                goto ruleexprEx;
            }


            // dynamic_scope/T.g:70:13: ( '+' mul )*

            for (;;)
            {
                int alt3=2;
                switch ( this->LA(1) )
                {
                case 10:
                	{
                		alt3=1;
                	}
                    break;

                }

                switch (alt3)
                {
            	case 1:
            	    // dynamic_scope/T.g:70:14: '+' mul
            	    {
            	         this->matchToken(10, &FOLLOW_10_in_expr184);
            	        if  (this->hasException())
            	        {
            	            goto ruleexprEx;
            	        }


            	        this->followPush(FOLLOW_mul_in_expr186);
            	        mul();

            	        this->followPop();
            	        if  (this->hasException())
            	        {
            	            goto ruleexprEx;
            	        }


            	    }
            	    break;

            	default:
            	    goto loop3;	/* break out of the loop */
            	    break;
                }
            }
            loop3: ; /* Jump out to here if this rule does not match */


        }

    }
    // This is where rules clean up and exit
    //
    goto ruleexprEx; /* Prevent compiler warnings */
    ruleexprEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end expr */

/**
 * $ANTLR start mul
 * dynamic_scope/T.g:73:1: mul : atom ( '*' atom )* ;
 */
void
TParser::mul()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // dynamic_scope/T.g:73:5: ( atom ( '*' atom )* )
        // dynamic_scope/T.g:73:9: atom ( '*' atom )*
        {
            this->followPush(FOLLOW_atom_in_mul204);
            atom();

            this->followPop();
            if  (this->hasException())
            {
                goto rulemulEx;
            }


            // dynamic_scope/T.g:73:14: ( '*' atom )*

            for (;;)
            {
                int alt4=2;
                switch ( this->LA(1) )
                {
                case 9:
                	{
                		alt4=1;
                	}
                    break;

                }

                switch (alt4)
                {
            	case 1:
            	    // dynamic_scope/T.g:73:15: '*' atom
            	    {
            	         this->matchToken(9, &FOLLOW_9_in_mul207);
            	        if  (this->hasException())
            	        {
            	            goto rulemulEx;
            	        }


            	        this->followPush(FOLLOW_atom_in_mul209);
            	        atom();

            	        this->followPop();
            	        if  (this->hasException())
            	        {
            	            goto rulemulEx;
            	        }


            	    }
            	    break;

            	default:
            	    goto loop4;	/* break out of the loop */
            	    break;
                }
            }
            loop4: ; /* Jump out to here if this rule does not match */


        }

    }
    // This is where rules clean up and exit
    //
    goto rulemulEx; /* Prevent compiler warnings */
    rulemulEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end mul */

/**
 * $ANTLR start atom
 * dynamic_scope/T.g:81:1: atom : ( ID | INT );
 */
void
TParser::atom()
{
        TParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // dynamic_scope/T.g:82:5: ( ID | INT )
        // dynamic_scope/T.g:
        {
            if ( ((this->LA(1) >= ID) && (this->LA(1) <= INT)) )
            {
                this->consume();
                this->set_perror_recovery(false);
            }
            else
            {
                new ANTLR_Exception< TParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
                this->get_exception()->set_expectingSet(NULL);

                goto ruleatomEx;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto ruleatomEx; /* Prevent compiler warnings */
    ruleatomEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end atom */
/* End of parsing rules
 * ==============================================
 */

/* ==============================================
 * Syntactic predicates
 */
/* End of syntactic predicates
 * ==============================================
 */

	}


/* End of code
 * =============================================================================
 */
