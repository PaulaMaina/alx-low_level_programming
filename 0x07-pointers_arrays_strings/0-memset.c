#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a <= n; a++)
		s[a] = b;

	return (s);
}
