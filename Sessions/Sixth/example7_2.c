/* cypher1.c --alters inputs, preserving spaces */
#include <stdio.h>
#define SPACE ' ' /* ESTO ES COMILLA, ESPACIO, COMILLA*/
int main (void)
{
	char ch;
	ch = getchar();		/* lee un caracter*/
	while (ch != '\n')	/* while not end of line*/
	{
		if (ch==SPACE)	/* deja un espacio */
		putchar(ch);
		else
		putchar(ch+1);	/* cambia a otros caracteres	*/
		ch=getchar();	/* toma el siguiente carácter*/
	}	
	return 0; 		/* program terminates succesfully*/
}
