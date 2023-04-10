#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
