/* sizeof.c -- uso del operador sizeof */
#include <stdio.h>
main()
{
int n;
printf("n tiene %d bytes; todos los ints tienen %d bytes. \n", sizeof n, sizeof (int));
}
