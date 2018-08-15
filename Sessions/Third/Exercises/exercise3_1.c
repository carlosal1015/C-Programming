#include <stdio.h>
int main(void)
{
    float pi = 3.14159;
    
    printf("Primer flag justificado a la izquierda:\t"
    "%-20s\n", pi);
//    printf("Segundo flag \t% 6.2f\n", pi);
//   printf("Tercer flag \t%#8.0f\n", pi);
//   printf("Cuarto flag \t%08.3f\n", pi);

    return 0;
}