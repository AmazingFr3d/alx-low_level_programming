#include <stdio.h>

/**
* main - Entry piont
*
* Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) || (i % 5)) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
i		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
