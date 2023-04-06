#include <stdio.h>
/**
 * _strlen_recursion - check the code
 * @s: String to be printed
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		return (n + _strlen_recursion(s + 1));
	}
	return (0);
}
