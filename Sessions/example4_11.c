/* post_pre.c -- postfix y prefix */
#include <stdio.h>
main()
{
int a = 1, b = 1;
int aplus, bplus;

aplus = a++;//siempre se modifica el a
bplus = ++b;

printf("a\t\taplus b\t\tbplusb\n");
printf("%1d\t%5d\t%5d\t%5d\n", a, aplus, b, bplus);
}
