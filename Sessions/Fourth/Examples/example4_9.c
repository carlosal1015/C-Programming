/* min_sec.c -- convierte segundos a minutos y segundos */
#include <stdio.h>
#define SEC_PER_MIN 60
main(){
int sec, min, left;

printf("Convierte segundos a minutos y segundos! \n\n");
printf("Ingrese el n�mero de segundos a convertir. \n");
scanf("%d", &sec);		/* n�mero de segundos le�dos */
min = sec/SEC_PER_MIN;	/* n�mero de minutos truncados */
left = sec%SEC_PER_MIN;	/* n�mero de segundos restantes */
printf("%d segundos es %d minutos, %d segundos.\n",sec, min, left);
}
