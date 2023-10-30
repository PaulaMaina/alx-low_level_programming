#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of character
 * and initializes it with a  specific character
 * @size: number of bytes to be allocated
 * @c: first character in the array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		ar[a] = c;
	}

	return (ar);
}
