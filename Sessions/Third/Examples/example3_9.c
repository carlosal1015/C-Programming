/* varwid.c - - utilizo campo de salida de anchura variable */
#include <stdio.h>
main()
{
int number = 256;
unsigned width, precision;
double weight = 242.5;

printf("Ingrese el ancho del campo.\n");
scanf("%d", &width);
printf("El número es :%*d: \n", width);
printf("Ahora ingrese un ancho y precision: \n");
scanf("%d %d", &width, &precision);
printf("Peso = %*.*f\n", width, precision, weight);
}
