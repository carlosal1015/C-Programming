/* rows.c using dependet nest loops*/
#include <stdio.h>
#define ROWS 6
#define CHARS 6
main()
{
	int row;
	char ch;
	
	for (row=0; row< ROWS; row++)
	{
		for(ch='A'; (ch+CHARS)>'A'; ch++)
		printf("%c", ch);
		printf("\n");
	}
}
