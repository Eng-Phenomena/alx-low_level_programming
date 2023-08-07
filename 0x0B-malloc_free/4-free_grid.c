#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing allocated memory
 * @grid: 2d pointer to be freed
 * @height: int 
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
