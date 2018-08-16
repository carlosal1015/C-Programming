#include <stdio.h>
int main(void)
{
	float number;

	printf("Digite un número decimal:\n");
	scanf("%f", &number);
	printf("Su cubo es %.2f", number * number * number);
	
	return 0;
}