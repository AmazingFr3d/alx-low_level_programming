#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 on negative number of bytes
 */
int main(int argc, char **argv)
{
	int bytes, i;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (i >= bytes - 1)
		{
			printf("%02x\n ", main_ptr[i]);
			break;
		}
		printf("%02hhx ", main_ptr[i]);
	}
	return (0);
}
