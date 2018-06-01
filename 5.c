/* no_good.c -un programa con errores*/
#include <stdio.h>
main()
{
//int n, int n2, int n3;
int n,n2,n3; //Solucion al ejercicio.
/*
Otra manera es de la siguiente forma:
int n1;
int n2;
int n3;
*/
/* este programa tiene algunos errores*/
n = 5;
n2 = n * n;
n3 = n2 * n;// o sino n* n*n
printf("n=%d, nsquared =%d, n cubed = %d.\n",n, n2, n3);
}
