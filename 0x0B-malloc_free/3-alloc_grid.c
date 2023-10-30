#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of rows
 * @height: number of columns
 *
 * Return: NULL if width or height are 0 or negative, else grid
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int rows, cols;

	if (width == 0 || height == 0)
		return (NULL);

	if (width < 0 || height < 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		arr[rows] = malloc(width * sizeof(int));

		if (arr[rows] == NULL)
		{
			for (cols = 0; cols < rows; cols++)
				free(arr[cols]);
			free(arr);
			return (NULL);
		}
		for (cols = 0; cols < width; cols++)
		{
			arr[rows][cols] = 0;
		}
	}

	return (arr);
}
