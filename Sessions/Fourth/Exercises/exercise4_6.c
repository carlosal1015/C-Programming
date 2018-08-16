#include <stdio.h>
#define M_TO_H 60
int main(void)
{
	int min, hour, left;
	printf("This program convierte minutos a horas y ");
	printf("minutos.\n");
	printf("Solo debe ingresar los minutos.\n");
	printf("Ingrese 0 para finalizar el programa.\n");
	scanf("%d", &min);
	while(min>0){
		hour = min/M_TO_H;
		left = min % M_TO_H;
		printf("%d min is %d hour, %d min.\n", min, hour, left);
		printf("Next input?\n");
		scanf("%d", &min);
	}
	printf("See you!\n");

	return 0;
}