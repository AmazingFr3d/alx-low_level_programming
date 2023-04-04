#include <stdio.h>
#include "main.h"

/**
 * _strspn - get the length of sub-text
 * @s: charater poiter
 * @accept: charater
 * Return: break position
 */
unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int pos = 0;

	while (s[pos])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		pos++;
	}
	return (pos);
}
