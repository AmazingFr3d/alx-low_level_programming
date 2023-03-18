#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 *main: generates a random number for n and print the polarity
 *
 *Return: always return zero(0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}else{
			printf("%d is positive\n", n);			
		}
	
	}else{
		printf("%d is negative\n", n);
	}
	return (0);
}
