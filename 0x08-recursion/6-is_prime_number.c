#include <stdio.h>
#include "main.h"
/**
 * _helper - helper funtion
 * @j: Input Number
 * @i: Initial guess
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _helper(int j, int i)
{
	if (i == j)
	{
		return (1);
	}
	else if (j % i != 0)
	{
		return (_helper(j, i + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - Determins a prime number
 * @n: Input number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (_helper(n, 2));
	}
}
