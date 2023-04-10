#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c = 0;

	if (argc > 0)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
