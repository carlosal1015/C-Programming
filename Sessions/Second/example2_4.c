/* print2.c -- más propiedades de printf()	*/
#include <stdio.h>
main()
{
unsigned un = 400000;
long ln = 20000000000;
unsigned long uln = 2*20000000000; /* 4000000000*/
short sn=200;
printf("un = %u, pero no debería %d. \n", un, un);
printf("ln = %ld, pero no debería %d. \n", ln, ln);
printf("uln = %lu, pero no debería %u. \n", uln, uln);
printf("sn = %hd, pero también %d. \n", sn, sn);
}
/*
hoy en día el short y el int son iguales
*/
