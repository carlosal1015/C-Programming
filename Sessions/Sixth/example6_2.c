/* when.c -- cuando un loop termina */
#include <stdio.h>
main()
{
	int n=5;
	while (n<9)
	{
		printf("n=%d\n", n);		/* line 7*/
		n++;						/* line 10*/
		printf("Ahora n = %d\n",n);/* line 11*/
	}
}
