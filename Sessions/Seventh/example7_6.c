/* wordcount.c -- counts characters, words, line */
#include <stdio.h>
#define STOP '|'
#define YES 1
#define NO 0

int main(void)
{
	char c;				/*	read in character 		*/
	long n_chars=0L;	/*	number of characters	*/
	int n_lines=0;		/*	number of lines			*/
	int n_words=0;		/*	number of words			*/
	int wordflag=NO;	/*	==YES if c is in a word	*/
	
	while ((c=getchar())!=STOP)
	{
		n_chars++;			/* count characters*/
		if (c=='\n')
		n_lines++;
		
		if (c!=' ' && c != '\n' && c!='\t' && wordflag ==NO)
		{
			wordflag = YES;		/* starting a new word	*/
			n_words++;			/*	count a word		*/
			
			if ((c==' ' || c=='\n' || c=='\t') && wordflag && == YES)
			{
				wordflag=NO;	/*	reached end of word	*/			
			}
		}
		printf("CHARACTERS == %ld, WORDS = %d, LINES = %d\n", n_chars, n_words, n_lines);
	}
}
