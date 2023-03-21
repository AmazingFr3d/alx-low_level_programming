#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabets 10 tine in lower case
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		char x;

		for(x = 'a'; x <= 'z'; x++)
			_putchar(x);
		
		_putchar('\n')
	}
}
