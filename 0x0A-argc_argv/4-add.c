#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: followed by a new line, and return 1 in case of failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int c;

	if (argc > 2)
	{
		for (c = 1; c < argc; c++)
		{
			if (isdigit(*argv[c]) != 0)
			{
				sum += atoi(argv[c]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
