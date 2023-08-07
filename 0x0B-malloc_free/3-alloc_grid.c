#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - 2d array
 * @width: int width
 * @height: int height
 * Return: 2d array pattern
 */

int **alloc_grid(int width, int height)
{
	int **pat, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	pat = (int **) malloc(sizeof(int *) * height);

	if (pat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pat[i] = (int *) malloc(sizeof(int) * width);
		if (pat[i] == NULL)
		{
			for (; i >= 0; i--)
				free(pat[i]);
			free(pat);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			pat[i][j] = 0;
	}

	return (pat);
}
