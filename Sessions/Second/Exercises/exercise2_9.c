#include <stdio.h>
int main(void)
{
	unsigned int SEGUNDOS = 31560000;
	unsigned int edad;

	printf("¿Cuál es tu edad (en años)?:\n");
	scanf("%u", &edad);
	printf("Tú tienes %u segundos de vida!\n", SEGUNDOS * edad);

    return 0;
}
