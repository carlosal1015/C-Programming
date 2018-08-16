#include <stdio.h>
int main(void)
{
	int number, i=0;

	printf("Digite un número entero:\n");
	scanf("%d", &number);
	while(i<=10)
	{
		printf("%d\n", number + i);
		i++;
	}
	
	return 0;
}