#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: mandatory parameter for format code
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *sep = "";
	int index = 0;

	va_start(ap, format);
	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			printf("%s%c", sep, va_arg(ap, int));
		}
		else if (format[index] == 'i')
		{
			printf("%s%d", sep, va_arg(ap, int));
		}
		else if (format[index] == 'f')
		{
			printf("%s%f", sep, va_arg(ap, double));
		}
		else if (format[index] == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s%s", sep, va_arg(ap, char *));
		}
		sep = ", ";
		index += 1;
	}
	va_end(ap);
	printf("\n");
}
