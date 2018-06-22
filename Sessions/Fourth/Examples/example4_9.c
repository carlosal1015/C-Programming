/* min_sec.c -- convierte segundos a minutos y segundos */
#include <stdio.h>
#define SEC_PER_MIN 60
main(){
int sec, min, left;

printf("Convierte segundos a minutos y segundos! \n\n");
printf("Ingrese el número de segundos a convertir. \n");
scanf("%d", &sec);		/* número de segundos leídos */
min = sec/SEC_PER_MIN;	/* número de minutos truncados */
left = sec%SEC_PER_MIN;	/* número de segundos restantes */
printf("%d segundos es %d minutos, %d segundos.\n",sec, min, left);
}
