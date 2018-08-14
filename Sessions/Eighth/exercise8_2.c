/* echo.c -- repeats input */
#include <stdio.h>

int main(void)
{
	char ch;
	
	while((ch= getchar())!='#')
	putchar(ch);
	return 0;		/* program terminates succesfully*/
}

// Buscar aplicaciones
