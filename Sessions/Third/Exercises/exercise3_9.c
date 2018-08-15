#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[20], lastname[20];

    printf("Ingrese su primer nombre:\n");
    scanf("%s", name);
    printf("Ingrese su apellido:\n");
    scanf("%s", lastname);
    
    printf("Su nombre es %s y su apellido es %s.\n", name, lastname);
    printf("Su nombre tiene %zd caracteres y su apellido tiene %zd caracteres.\n",
    strlen(name), strlen(lastname));
    // Si tiene tilde, entonces contará un carácter más.
    return 0;
}