/* showchar1.c --program with I/O program */
#include <stdio.h>
void display (char c, int lines, int width);
int main (void)

{
	int ch;
	int rows, cols;
	
	printf("Enter a character and two integers: \n");
	while( (ch = getchar())!=EOF)
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("Enter another character and two integers; \n");
		printf("Simulate eof to quit.\n");
	}
	return 0;
}

void display (char c, int lines, int width)
{
	int row, col;
	for (row=1;row<=lines; row++)
	{
		for (col=1;col<=width; col++)
		putchar(c);
		putchar('\n');		/* end lineand start a new one */
	}
}
