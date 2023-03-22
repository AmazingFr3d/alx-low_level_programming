#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the nuber to be checked
 * Return: 1 if > 0, 0 if = 0 and -1 if < 0
 */
int print_sign(int n)
{
	int rtn;

	if (n > 0)
	{
		_putchar('+');
		rtn = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		rtn = 0;
	}
	else
	{
		_putchar('-');
		rtn = -1
	}
	return rtn
}
