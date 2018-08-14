/* echo.c -- repeats input */
#include <stdio.h>

int main(void)
{
	char ch;
	
	while((ch= getchar())!=EOF)
	putchar(ch);
	return 0;		/* program terminates succesfully*/
}

// Buscar aplicaciones
// depende del sistema, en DevC es Ctrl + Z [Intro]
