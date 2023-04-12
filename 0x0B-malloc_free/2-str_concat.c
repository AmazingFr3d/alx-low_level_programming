#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concantenation of two strings
 * @s1: first to be concantenated
 * @s2: second string to be concatenated
 * Return: 0 Always.
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int s, n;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = n = 0;
	while (s1[s] != '\0')
	{
		s++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}
	cont = malloc(sizeof(char) * (s + n + 1));
	if (cont == NULL)
	{
		return (NULL);
	}
	s = n = 0;
	while (s1[s] != '\0')
	{
		cont[s] = s1[s];
		s++;
	}
	while (s2[n] != '\0')
	{
		cont[s] = s2[n];
		s++, n++;
	}
	cont[s] = '\0';
	return (cont);
}

