#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the integer
 * @c: an array of a char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int u = 0;
	char *str = 0;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (u = 0; u < size; u++)
	{
		str[u] = c;
	}
	if (size == 0)
	{
		return (0);
	}
	return (str);
}
