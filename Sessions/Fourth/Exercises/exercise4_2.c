#include <stdio.h>
int main(void)
{
    int i = 1;
    int n;
    scanf("%d", &n);
    printf("watch out! Here come a bunch of fractions!\n");
    
    while(i<30){
        n = 1/i;
        printf("%f", n);
    }
    printf("That's all, folks!\n");

    return 0;
}