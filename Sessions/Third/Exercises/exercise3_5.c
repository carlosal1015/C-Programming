#include <stdio.h>
#define BOOK "War and Peace"
int main(void)
{
	float cost=12.99;
	float percent=80.0;
	
	printf("Esta copia de \"%s\" se vende por $%0.2f.\n", BOOK, cost);
	printf("Es decir, el %0.0f%% de la lista.\n", percent);
	
	return 0;
}