#include <stdio.h>
/**
 * _print_rev_recursion - check the code
 * *s: String to be printed
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
