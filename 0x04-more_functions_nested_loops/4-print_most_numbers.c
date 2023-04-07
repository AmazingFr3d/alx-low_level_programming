#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Return: Void
 */
void print_most_numbers(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
	    _putchar(n + '0');
	}
	_putchar('\n');
}

