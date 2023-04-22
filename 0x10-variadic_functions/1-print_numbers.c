#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: mandatory parameter
 * @separator: separator charater
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list ap;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
