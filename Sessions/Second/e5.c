/* print2.c -- m�s propiedades de printf()	*/
#include <stdio.h>
main()
{
unsigned un = 400000;
long ln = 20000000000;
unsigned long uln = 2*20000000000; /* 4000000000*/
short sn=200;
printf("un = %u, pero no deber�a %d. \n", un, un);
printf("ln = %ld, pero no deber�a %d. \n", ln, ln);
printf("uln = %lu, pero no deber�a %u. \n", uln, uln);
printf("sn = %hd, pero tambi�n %d. \n", sn, sn);
}
/*
hoy en d�a el short y el int son iguales
*/
