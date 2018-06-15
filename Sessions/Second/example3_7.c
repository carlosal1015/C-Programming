/* prntval.c - -  encontrando el valor de return de printf() */
#include <stdio.h>
main()
{
int n = 212;
int rv;

rv = printf("%d F es el punto de ebullicion del agua.\n", n);
printf("La función printf() imprimio %d caracteres\n", rv);
}
