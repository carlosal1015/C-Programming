/* typesize.c -- imprime tipos de tamaños	*/
#include <stdio.h>
main(){
char ch;

printf("Tipo int tiene formato de %d bytes. \n", sizeof(int));
printf("Tipo char tiene un tamaño de %d bytes. \n", sizeof(char));
printf("Tipo long tiene un tamaño de %d bytes. \n", sizeof(long));
printf("Tipo double tiene un tamaño de %d bytes. \n", sizeof(double));
printf("Tipo long double tiene un tamaño de %d bytes. \n", sizeof(long double));
/* Error:
printf("Tipo long long double tiene un tamaño de %d bytes. \n", sizeof(long long double));
*/
}