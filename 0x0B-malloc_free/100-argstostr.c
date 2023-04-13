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
	int ar, v, w, x;
	char *spr;

	if (ac == 0 || av  == NULL)
	{
		return (NULL);
	}
	while (v < ac)
	{
		while (av[v][w])
		{
			ar++;
			w++;
		}
		w = 0;
		v++;
	}
	spr = malloc(ac + 1 + (sizeof(char) * ar));
	v = 0;
	while (av[v])
	{
		while (av[v][w])
		{
			spr[x] = av[v][w];
			x++;
			w++;
		}
		spr[x] = '\n';
		w = 0;
		x++;
		v++;
	}
	x++;
	spr[x] = '\0';
	return (spr);
}
