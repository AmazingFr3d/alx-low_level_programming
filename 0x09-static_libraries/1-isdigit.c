#include "main.h"
#include "ctype.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	int rtn;

	if (isdigit(c) != 0)
	{
		rtn = 1;
	}
	else
	{
		rtn = 0;
	}
	return (rtn);
}
