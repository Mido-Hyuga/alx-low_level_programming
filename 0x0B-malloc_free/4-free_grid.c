#include "main.h"

/**
* free_grid - free 2D array
* @grid: integer
* @height: integer
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (;height  >= 0; height--)
			free(grid[height])
		free(grid);
	}
}
