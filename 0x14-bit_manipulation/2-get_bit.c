#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Input number
 * @index: Index starting from 0
 *
 * Return: value of the bit, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
