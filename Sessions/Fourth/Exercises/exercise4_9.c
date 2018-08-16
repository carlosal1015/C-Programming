#include <stdio.h>
#define D_TO_W 7
int main(void)
{
	int day, week, left;
	printf("This program convierte días a semanas y ");
	printf("días.\n");
	printf("Solo debe ingresar los días.\n");
	printf("Ingrese 0 para finalizar el programa.\n");
	scanf("%d", &day);
	while(day>0){
		week = day/D_TO_W;
		left = day % D_TO_W;
		printf("%d días es %d semana(s), %d día(s).\n", day, week, left);
		printf("Next input?\n");
		scanf("%d", &day);
	}
	printf("See you!\n");

	return 0;
}