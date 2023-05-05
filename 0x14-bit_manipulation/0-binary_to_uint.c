#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: The binary number to be converted
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) + (*b++ - '0');
	}
	return (res);
}
