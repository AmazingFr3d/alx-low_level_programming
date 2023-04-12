#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: width of  an integer
 * @height: height of an integer
 * Return: 0 Always.
 */
int **alloc_grid(int width, int height)
{
	int **wid;
	int x, z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	wid = malloc(sizeof(int *) * height);

	if (wid == NULL)
	{
		free(wid);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		wid[x] = malloc(sizeof(int) * width);
		if (wid[x] == NULL)
		{
			for (z = x; z >= 0; z--)
			{
				free(wid[z]);
			}
			free(wid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			wid[x][z] = 0;
	}
	return (wid);
}
