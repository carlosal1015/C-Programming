/* divisors.c -- nested ifs display divisors of a number */
#include <stdio.h>
#define NO 0
#define YES 1

int main (void)
{
	long num;		/* number to be check*/
	long div;		/* potential divisors*/
	int prime;
	
	printf("Please enter an integer for analysis.\n");
	printf("Enter q to quit.\n");
	
	while (scanf("%ld", &num)==1 && num>1)	// como un break, ahora agregarlo dentro del for
	{
		for (div=2, prime=YES; (div*div)<=num; div++)
		{
			if( num%div==0)
			{
				if (num%div !=num)
					printf("%ld is divisible by %ld.\n", num, div, num/div);
				else
					printf("%ld is divisible by %ld.\n", num, div);
					prime = NO;
			}
		}
	if (prime==YES)
		printf("%ld is prime.\n", num);
		printf("Please enter another integer for analysis");
		printf("Enter q to quit.\n");
	}

}
