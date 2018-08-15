#include <stdio.h>
int main(void)
{
	float masa_agua_mol = 3.0e-23;
    float masa_agua_quarter =  950;
	float quarter;
    float moleculas;

    printf("Ingrese la cantidad de agua (en cuartos de litro):\n");
	scanf("%f", &quarter);
    moleculas = quarter * masa_agua_quarter / masa_agua_mol;
	printf("%.2f cuarto(s) de agua contiene %.2e moléculas.\n", quarter, moleculas);

    return 0;
}
