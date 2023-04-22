#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: mandatory parameter
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	int add;
	va_list ap;

	add = 0;
	va_start(ap, n);
	if (n != 0)
	{
		for (c = 0; c < n; c++)
		{
			add += va_arg(ap, const unsigned int);
		}
		va_end(ap);
		return (add);
	}
	return (0);
}
