#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: a pointer
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int u = 0;
	int x = 0;
	char *sptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[u] != '\0')
	{
		u++;
	}
	sptr = malloc((sizeof(char) * u) + 1);
	if (sptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		sptr[x] = str[x];
	}
	sptr[x] = '\0';
	return (sptr);
}
