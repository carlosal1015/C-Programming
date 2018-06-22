/* pizza.c - - usa constantes definidas en un contexto pizza */
#include <stdio.h>
#define PI 3.14159
main(){
float area, circum, radius;

printf("¿Cual es el radio de su pizza?%% \n");
scanf("%f", &radius);
area = PI*radius*radius;
circum = 2.0*PI*radius;
printf("Los parametros basicos de su pizza son: \n");
printf("circunferencia = %1.2f, area= %1.2f\n", circum, area);
}
