#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source string
 * @dest: destination string
 * @n: number of charactesrs to be copied
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
