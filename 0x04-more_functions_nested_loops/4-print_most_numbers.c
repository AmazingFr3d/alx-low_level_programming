#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i > 10)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
		i = i + 1;
	}
	_putchar('\n');
}
