/* skip2.c - - omite los dos primeros enteros de una entrada */
#include <stdio.h>
main()
{
	int n;
	
	printf("Ingrese tres enteros:\n");
	scanf("%*d %*d %d", &n);
	printf("El último entero fue %d", n);
}
