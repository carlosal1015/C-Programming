#include <stdio.h>
int main(void)
{
    char name[20], lastname[20];

    printf("¿Cuál es su primer nombre?\n");
    scanf("%s", name);
    printf("¿Cuál es su apellido?\n");
    scanf("%s", lastname);

    printf("Su apellido es %s.\n"
    "Su primer nombre es %s.\n", lastname, name);

    return 0;
}