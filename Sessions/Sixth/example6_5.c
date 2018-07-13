/* postage.c tarifa postales de primera clase */
#include <stdio.h>
#define FIRST 25
#define NEXT 20
main()
{
	int ounces, cost;

	printf("ounces, cost\n");
	for(ounces=1, cost=FIRST;ounces<=56;ounces++, cost+=NEXT)
		printf("%5d %7d\n", ounces, cost);
}

