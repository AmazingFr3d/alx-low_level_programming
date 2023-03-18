#include <stdio.h>
#include <time.h>
/**
 * main - Program entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	putchar(lower);
	putchar('\n');
	return (0);
}
