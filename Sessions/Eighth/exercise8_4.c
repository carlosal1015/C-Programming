#include <stdio.h>
int main (void)
{
	char ch;
	int index;
	int chnum;
	
	while ((ch= getchar())!='\n')
	{
		chnum=ch%26;
		index = 0;
		while (index++<(39-chnum))
		putchar(' ');
		index = 0;
			while ( index++<(2*chnum+1))
			putchar(ch);
			putchar('\n');
	}
	return 0;
}
