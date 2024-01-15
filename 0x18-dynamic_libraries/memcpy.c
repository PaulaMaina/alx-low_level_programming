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

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (c);
}
