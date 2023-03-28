#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n numbers of an array of integer
 * @a: Array of integers
 * @n: Number of elemenrs of the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
