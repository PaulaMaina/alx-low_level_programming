#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * previously allocated by malloc(old_size)
 * @old_size: number of bytes of allocated space for ptr
 * @new_size: number of bytes for the new memory allocation
 *
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *new_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	temp = ptr;
	for (a = 0; a < old_size; a++)
		new_ptr[a] = temp[a];
	free(ptr);
	return (new_ptr);
}
