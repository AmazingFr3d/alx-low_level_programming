#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	(void)argv;
	return (0);
}
