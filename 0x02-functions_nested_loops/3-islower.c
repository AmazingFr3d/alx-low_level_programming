#include "main.h"
#include "ctype.h"
/**
 * _islower - Checks if c is lower case
 *@c: This is the letter to be checked
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	int rtn;

	if (islower(c) != 0)
	{
		rtn = 1;
	}
	else
	{
		rtn = 0;
	}
	return (rtn);
}
