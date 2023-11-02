#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: number of bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	for (m = 0; m < nmemb; m++)
		ar[m] = 0;

	return (ar);
}
