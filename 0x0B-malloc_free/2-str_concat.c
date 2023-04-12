#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concantenation of two strings
 * @s1: first string to be concantenated
 * @s2: second string to be concantenated
 * Return: 0 Always.
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int x = 0;
	int co = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[co] != '\0')
	{
		co++;
	}
	cont = malloc(sizeof(char) * (x + co + 1));
	if (cont == NULL)
	{
		return (NULL);
	}
	while (s1[x] != '\0')
	{
		cont[x] = s1[x];
		x++;
	}
	while (s2[co] != '\0')
	{
		cont[x] = s2[co];
		x++, co++;
	}
	cont[x] = '\0';
	return (cont);
}
