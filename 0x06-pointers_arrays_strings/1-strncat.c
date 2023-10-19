#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: first string
 * @dest: second string
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; (src[i] != '\0' && n > 0); i++, n--)
	{
		dest[len] = src[i];
		len++;
	}

	return (*dest);
}
