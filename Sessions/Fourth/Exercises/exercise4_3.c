#include <stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	printf("This program convierte segundos a minutos y ");
	printf("segundos.\n");
	printf("Solo debe ingresar los segundos.\n");
	printf("Ingrese 0 para finalizar el programa.\n");
	scanf("%d", &sec);
	while(sec>0){
		min = sec/S_TO_M;
		left = sec % S_TO_M;
		printf("%d sec is %d min, %d sec.\n", sec, min, left);
		printf("Next input?\n");
		scanf("%d", &sec);
	}
	printf("See you!\n");

	return 0;
}