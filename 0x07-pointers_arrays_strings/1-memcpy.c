#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: final memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}

	return (c);
}
