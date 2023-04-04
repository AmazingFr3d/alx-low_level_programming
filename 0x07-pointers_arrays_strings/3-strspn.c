#include <stdio.h>
#include "main.h"

/**
* _strspn -  a function that gets the length of a prefix substring
* @s: charater poiter
* @accept: charater
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
