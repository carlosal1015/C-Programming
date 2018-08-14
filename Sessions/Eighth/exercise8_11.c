/* sketcher.c --this program makes solid figures */
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MAXLENGTH 80
int badlimits(int begin, int end, int limit);
void display(char c, int first, int last);

int main (void)
{
	int ch;							/* character to be printed*/
	int start, stop;				/* character and stopping points*/
	int badlimits();
	while((ch = getchar()) != EOF)	/* read in character*/
	{
		if (ch == '\n' || ch == ' ' || ch == '\t')
		continue;
		if (scanf("%d %d", &start, & stop) != 2)	/*read limits */
		break;
		else
		display(ch, start, stop);
	}
	return 0;
}

int badlimits(int begin, int end, int limit)
{
	if (begin > end || begin < 1 || end > limit)
	return TRUE;
	else
	return FALSE;
}

void display(char c, int first, int last)
{
	int column;
	
	for (column = 1;column < first; column++)
	putchar(' ');		/* print blanks to*/
	for (column=first; column <= last; column++)
	putchar(c);			/* print char to stopping point*/
	putchar('\n');		/* end line and start a new one*/
}
//siempre se parte de un programa ya hecho, se puede retocar las tareas.
