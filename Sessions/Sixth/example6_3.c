/* sweetie1.c un loop de conteo usando while */
#include <stdio.h>
#define NUMBER 22
main()
{
	int count = 1;	/* initialization */
	while (count<=NUMBER)	/* test*/
	{
		printf("Be my Valentine!\n");
		count++;
		/* update count*/
	}
}
/*
El programa no sabe cuando parar, eso ocurre con el while.
*/

