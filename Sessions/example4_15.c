/* convert.c - - automatic type convertions */
#include <stdio.h>
main()
{
char ch;
int i;
float fl;

fl = i = ch = 'A';				/* line 8*/
printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
ch = ch +1;						/*line 10*/
i = fl + 2*ch;					/* line 11*/
fl = 2.0*ch+i;					/* line 12*/
printf("%s", typeof fl);
printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
ch = 5212205.17;				// debe ser signo -
printf("Now ch = %c\n", ch);	/* line 14*/
}
