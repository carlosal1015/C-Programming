/* charcode.c -- visualiza c�digo num�rico para un car�cter*/
#include <stdio.h>
main()
{
char ch;

printf("Por favor ingrese un car�cter. \n");
scanf("%c", &ch);
printf("El c�digo para %c, es %d. \n", ch, ch);
}
