/*Listing 3.9 escape.c*/
#include <stdio.h>

main()
{
	float salary;
	
	printf("Enter su salario deseado mensual:");	/* 1 */
	printf("  $_______\b\b\b\b\b\b\b");				/* 2 */
	scanf("%f", &salary);
	printf("\n\t$%.2f al mes is %.2f al año.", salary, salary*12.0);
	printf("\rGee!\n");

}
