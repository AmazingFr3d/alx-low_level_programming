#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: followed by a new line, and return 1 in case of failure
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
