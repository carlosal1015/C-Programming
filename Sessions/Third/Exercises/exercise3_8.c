#include <stdio.h>
int main(void)
{
    float inch, foot;
    char name[20];

    printf("Ingrese su altura (en pulgadas):\n");
    scanf("%f", &inch);
    printf("Cuál es su nombre?\n");
    scanf("%s", name);

    foot = inch / 12.0 ; // 1 pie == 12 pulgadas

    printf("%s, eres %.3f pie(s) de alto.\n", name, foot);

    return 0;
}