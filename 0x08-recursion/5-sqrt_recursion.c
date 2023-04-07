#include <stdio.h>
#include "main.h"
/**
 * _helper - helper funtion
 * @j: Input Number
 * @i: Initial guess
 * Return: -1 If n does not have a natural square root.
 */
int _helper(int j, int i)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	return (_helper(j, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number To Square
 * Return: -1 If n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, 1));
	}

}
