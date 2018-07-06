/* pizza.c - - usa constantes definidas en un contexto pizza */
#include <stdio.h>
#define PI 3.14159
main(){
float area, circum, radius;

printf("¿Cuál es el radio de su pizza? (en cm.)\n");
scanf("%f", &radius);

area = PI*radius*radius;
circum = 2.0*PI*radius;

printf("Los parámetros básicos de su pizza son: \n");
printf("circunferencia = %1.2f, área= %1.2f\n", circum, area);
}