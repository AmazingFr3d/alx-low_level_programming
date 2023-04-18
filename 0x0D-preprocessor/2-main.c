#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	char file_name[] = __FILE__;

	printf("%s", file_name);
	printf("\n");
	return (0);
}
