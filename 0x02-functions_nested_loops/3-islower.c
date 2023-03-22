#include "main.h"
#include "ctype.h"
/**
 * _islower - Checks if c is lower case
 *
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
