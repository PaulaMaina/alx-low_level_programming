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
	int dest_len;
	int i, j;
	char tmp[] = dest;

	for (dest_len = 0; dest_len != '\0'; dest_len++)
		;

	for (i = 0; (i < n || src[i] != '\0'); i++)
		dest[i] = src[i];

	for (j = 0; j <= dest_len; j++)
		dest[n + j] = tmp[j];

	dest[n + j] = '\0';

	return (*dest);
}
