/* chcount.c --counts nonwhitespace characters*/
#include <stdio.h>
#define PERIOD '.'

int main (void){
	int ch;
	int charcount = 0;
	
	while ((ch=getchar())!=PERIOD)
	{
		if (ch!=' '&& ch!= '\n' && ch!= '\t')
		charcount++;
	}
	printf("There are %d nonwhitespace character.\n", charcount);
	return 0;		/* program terminates succesfully*/
}

//Logical operators combine relationships.
