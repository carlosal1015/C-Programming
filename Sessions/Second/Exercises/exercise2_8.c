#include <stdio.h>
int main (void)
{
    float number;
    printf("Ingrese un número punto flotante:\n");
    scanf("%f", &number);

    printf("La entrada es %f o %e.\n",number, number);

    return 0;
}