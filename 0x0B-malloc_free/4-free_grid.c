#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: an array
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
