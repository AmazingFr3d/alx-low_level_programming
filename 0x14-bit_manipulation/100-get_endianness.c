#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: Void
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *end = (char *)&num;

	if (*end == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
