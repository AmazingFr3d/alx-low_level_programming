#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: mandatory parameter
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int x;
	int add;
	va_list ap;

	x = 0;
	if (n != 0)
	{
		va_start(ap, n);
		for (x = 0; x < n; x++)
		{
			add += va_args(ap, int);
		}
		va_end(ap);
		return (add);
	}
	return (0);
}
