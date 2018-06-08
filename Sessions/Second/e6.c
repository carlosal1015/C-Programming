/* charcode.c -- visualiza código numérico para un carácter*/
#include <stdio.h>
main()
{
char ch;

printf("Por favor ingrese un carácter. \n");
scanf("%c", &ch);
printf("El código para %c, es %d. \n", ch, ch);
}
