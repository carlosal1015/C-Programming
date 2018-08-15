#include <stdio.h>
int main(void) 
{
	int ascii;

	printf("Ingrese un cdigo ASCII:\n");
	scanf("%d", &ascii);
	printf("%d es el código ASCII para %c.\n", ascii, ascii);

	return 0;
}