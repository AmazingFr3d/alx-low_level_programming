#include "main.h"

/**
*print_line - print line
*@n: The number of character to print
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar("_");
	}
	_putchar("\n");
}
