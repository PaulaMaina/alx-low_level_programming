#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: first array
 * @max: second array
 *
 * Return: pointer to the created array, else NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		arr[a] = min;
		min++;
	}

	return (arr);
}
