#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: mandatory parameter
 * @separator: separator charater
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list ap;
	char *sptr;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		sptr = va_arg(ap, char*);
		if (sptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", sptr);
		}
		if (separator != NULL && (n - 1) > c)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
