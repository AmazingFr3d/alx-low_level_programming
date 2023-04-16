#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: char array
 * @needle: char array (keyword)
 * Return: array
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
