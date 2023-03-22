#include "main.h"
#include "ctype.h"
/**
 * int _isalpha - Checks is c is alphabet
 * @c: This is the variable to be checked
 * Return: 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	int rtn;

	if (isalpha(c) != 0)
	{
		rtn = 1;	
	}
	else
	{
		rtn = 0;
	}
	return (rtn);
}
