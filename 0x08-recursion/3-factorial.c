#include <stdio.h>
/**
 * factorial - check the code n*(n-1)!
 * @n: Factorial Number
 * Return: -1 If n is lower than 0.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
