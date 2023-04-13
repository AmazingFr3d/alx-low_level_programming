#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenation of all the argument of your program
 * @ac: integer
 * @av: string
 * Return: a pointer to new string, otherwise NULL if it's fails
 */
char *argstostr(int ac, char **av)
{
	int ar = 0, z = 0, w = 0, k = 0;
	char *spr;

	if (ac == 0 || av  == NULL)
	{
		return (NULL);
	}
	while (z < ac)
	{
		while (av[z][w])
		{
			ar++;
			w++;
		}
		w = 0;
		z++;
	}
	spr = malloc((sizeof(char) * ar) + ac + 1);
	z = 0;
	while (av[z])
	{
		while (av[z][w])
		{
			spr[k] = av[z][w];
			k++;
			w++;
		}
		spr[k] = '\n';
		w = 0;
		k++;
		z++;
	}
	k++;
	spr[k] = '\0';
	return (spr);
}
