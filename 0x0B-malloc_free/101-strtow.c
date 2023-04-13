#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_up_word - function that sum up the number of word
 * @sm: string
 *
 * Return: 0 always.
 */
int sum_up_word(char *sm)
{
	int tag = 0, x = 0, s = 0;

	for (x = 0; sm[x] != '\0'; x++)
	{
		if (sm[x] == ' ')
		{
			tag = 0;
		}
		if (tag == 0)
		{
			tag = 1;
			s++;
		}
	}
	return (s);
}

/**
 * strtow - function that splits a sstring into words
 * @str: string split into word
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
	char **spr, *tsr;
	int m, z = 0, ac = 0, word, i = 0, set, finish;


	while (*(str + ac))
	{
		ac++;
	}
	word = sum_up_word(str);
	if (word == 0)
		return (NULL);
	spr =(char **)malloc(sizeof(char *) * (word + 1));
	if (spr == NULL)
		return (NULL);
	for (m = 0; m <= ac; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			i = 0;
			if (i)
			{
				finish = m;
				tsr =(char *)malloc(sizeof(char) * (i + 1));
				if (tsr == NULL)
					return (NULL);
				while (set < finish)
					*tsr++ = str[set++];
				*tsr = '\0';
				spr[z] = tsr - i;
				z++;
				i = 0;
			}
		}
		else if (i++ == 0)
			set = m;
	}
	spr[z] = NULL;
	return (spr);
}
