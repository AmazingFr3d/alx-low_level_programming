#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * palindrome_helper - helper funtion
 * @x: Input String
 * @y: Start Character
 * @z: end Character
 * Return: 1 if a string is a palindrome and 0 if not
 */
int palindrome_helper(char *x, int y, int z)
{
	if (y >= z)
	{
		return (1);
	}
	if (x[y] == x[z])
	{
		return (palindrome_helper(x, y + 1, z - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - Determines a prime number
 * @s: Input String
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length < 2)
	{
		return (1);
	}
	else
	{
	return (palindrome_helper(s, 0, length - 1));
	}
}
