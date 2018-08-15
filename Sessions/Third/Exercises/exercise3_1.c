#include <stdio.h>
int main(void)
{
    float pi = 3.14159;
    
    printf("Primer flag %+6.2f\n", pi);
    printf("Segundo flag % 6.2f\n", pi);
    printf("Tercer flag %#8.0f\n", pi);
    printf("Cuarto flag %08.3f\n", pi);

    return 0;
}