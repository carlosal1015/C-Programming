/* */
#include <stdio.h>
#define SIZE 10
main()
{
	int index, score[SIZE];
	int sum=0;
	float average;
	
	printf("Enter %d scores:", SIZE);
	for(index=0;index< SIZE;index++){
	scanf("%d", &score[index]);	/* read in the ten scores*/
	printf("The scores read in are as follows:\n");
	for(index=0;index<SIZE;index++)
	printf("%5d\n", score[index]);	/* verify input*/
	for(index=0:index<SIZE; index++)
	sum+=score[index];
		
	}
	scanf("%d", );
	
}
