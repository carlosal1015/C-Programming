//  pulgadas2centimetros.c
#include <stdio.h>
int main(void)
{
    float pulgadas, centimetros, conversor = 2.54;

    printf("Ingrese un valor en pulgadas:\n");
    scanf("%f", &pulgadas);
    
    centimetros = pulgadas * conversor;
    printf("El valor es %.2f cm.\n", centimetros);

    return 0;
}