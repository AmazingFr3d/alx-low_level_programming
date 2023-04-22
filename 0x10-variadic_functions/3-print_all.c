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
	char c;
	int i;
	float f;
	char *s;
	char *sep ="";
	int index = 0;

	va_start(ap, format);
	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = va_arg(ap, int);
			printf("%s%c", sep, c);
		}
		else if (format[index] == 'i')
		{
			i = va_arg(ap, int);
			printf("%s%d", sep, i);
		}
		else if (format[index] == 'f')
		{
			f = va_arg(ap, double);
			printf("%s%f", sep, f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s%s",sep , s);
			}
		}
		sep = ", ";
		index += 1;
	}
	va_end(ap);
	printf("\n");
}
