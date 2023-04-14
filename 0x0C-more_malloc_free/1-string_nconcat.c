#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenation of two strings
 * @s1: first string allocated
 * @s2: second string allocated
 * @n: number of bytes
 * Return: 0 Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int x = 0, z = 0, l = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
	{
		x++;
	}
	while (s2[l])
	{
		l++;
	}
	if (l <= n)
		m = l + x;
	else
		m = n + x;
	i = malloc(sizeof(char) * m + 1);
	if (i == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (z < m)
	{
		if (m >= z)
			i[z] = s1[z];
		if (x <= z)
		{
			i[z] = s2[l];
			l++;
		}
		z++;
	}
	i[z] = '\0';
	return (i);
}


