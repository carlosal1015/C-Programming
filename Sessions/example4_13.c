#include <stdio.h>
#define MAX 100
main()
{
	int count = MAX + 1;
	
	while(--count > 0){
		printf("%d bottles of gas on the Wall, %d bottles of gas\n", count, count);
		printf("Take one down and pass it around, \n");
		printf("%d bottles of gas!\n\n", count-1);
	}
}
