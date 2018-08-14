#include <stdio.h>
#define DOWN 0.06898
#define MIDDLE 0.12032
#define UP 0.14022
int main (void)
{
	int KWH;
	printf("Ingrese los kWh");
	scanf("%f", &KWH);
	
	if (TARIFA < 240)
		printf("La tarifa es %.f", KWH * DOWN);
	else if (TARIFA < 540)
		printf("La tarifa es %.f", KWH * MIDDLE) ;
	else
		printf("La tarifa es %.f", KWH * UP);
	return 0;
}
// TODO agregar las tarifas resultantes..
