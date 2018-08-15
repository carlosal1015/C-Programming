#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[20], lastname[20];

    printf("Ingrese su primer nombre:\n");
    scanf("%s", name);
    printf("Ingrese su apellido:\n");
    scanf("%s", lastname);

    printf("Nombre: \t%s\t%zd caracteres.\n", name, strlen(name));
    printf("Apellido: \t%s\t%zd caracteres.\n", lastname, strlen(lastname));
    // Si tiene tilde, entonces contará un carácter más.
    return 0;
}