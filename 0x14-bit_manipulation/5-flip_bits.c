#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: Number 1
 * @m: Number 2
 *
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bit_count = 0;

	while (xor > 0)
	{
		bit_count += xor & 1;
		xor >>= 1;
	}
	return (bit_count);
}
