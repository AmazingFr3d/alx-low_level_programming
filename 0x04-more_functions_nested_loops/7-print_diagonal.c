#include "main.h"

/**
* print_diagonal - print diagonal with
* @n: Times to print
*/
void print_diagonal(int n)
{
	int line1, line2;

	for (line1 = 0; line1 < n; line1++)
	{
		for (line2 = 0; line2 < line1; line2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
