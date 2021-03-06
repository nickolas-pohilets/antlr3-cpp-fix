#include "CLexer.hpp"
#include "CParser.hpp"

int main(int argc, char *argv[])
{
    ANTLR_UINT8*	    fName;

    if (argc < 2 || argv[1] == NULL)
    {
		fName	=(ANTLR_UINT8*)"./input"; // Note in VS2005 debug, working directory must be configured
    }
    else
    {
		fName	= (ANTLR_UINT8*)argv[1];
    }


	CLexer::InputStreamType input(fName, ANTLR_ENC_8BIT);
	CLexer lxr(&input);	    // CLexerNew is generated by ANTLR
	CParser::TokenStreamType tstream(ANTLR_SIZE_HINT, lxr.get_tokSource() );
	CParser psr(&tstream);  // CParserNew is generated by ANTLR3

	psr.main();

    return 0;
}
