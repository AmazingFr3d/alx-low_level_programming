#include "main.h"
/**
 * print_last_digit -  Prints the last digit of a number
 * @x: The numbe to work with
 * Return: The last digit
 */
int print_last_digit(int x)
{
	int last_dig = x % 10;

	if (last_dig < 0)
	{
		last_dig *= -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
