#include <stdio.h>
#include <string.h>
#define Q "Su Hamlet era divertido sin ser vulgar."
int main(void)
{
    printf("El vendió el cuadro por $%2.2f.\n", 2.345e2);
    printf("%c%c%c\n",'H',105,'\41');
    printf("%s\ntiene %d carácteres.\n", Q, strlen(Q));
    printf("¿Es %2.2e los mismo que %2.2f?.\n",1201.0,1201.0);

    return 0;
}