#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenation of two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: an integer
 * Return: 0 Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int x = 0, z = 0, l = 0, m = 0;

	while (s2 && s2[m])
	{
		m++;
	}
	while (s1 && s1[l])
	{
		l++;
	}
	if (m > n)
	{
		i = malloc(sizeof(char) * (m + n + 1));
	}
	else
		i = malloc((m + l + 1) * sizeof(char));
	if (i == NULL)
		return (NULL);
	while (l > z)
	{
		i[x] = s1[x];
		x++;
	}
	while (m <= n && x < (m + n))
		i[x++] = s2[z++];
	i[x] = '\0';
	return (i);
}

