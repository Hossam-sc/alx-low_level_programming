#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Entry point
 *@grid: grid
 *@height: height of grid
 * Return: 0 Always
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
