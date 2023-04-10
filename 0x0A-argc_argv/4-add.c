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
	int c, d, val;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (isdigit(argv[c][d]) == 0)
			{
				printf("Error\n");
                                return (1);
			}
		}
		val = atoi(argv[c]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
