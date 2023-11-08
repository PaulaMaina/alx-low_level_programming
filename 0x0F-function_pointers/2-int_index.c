#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to a function that compares the number to an elememnt
 *
 * Return: index of the first element ot be matched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 1 || cmp == NULL || array == NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}

	return (-1);
}
