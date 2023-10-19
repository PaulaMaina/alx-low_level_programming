#include "main.h"

/**
 * _strcat - conctenates two strings
 * @src: first string
 * @dest: string to be concatenated
 * at the end of the first string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int src_len, dest_len;
	int i;
	char tmp[] = dest;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	*dest = *src;
	dest--;

	for (i = 0; i <= dest_len; i++)
	{
		dest[src_len + i] = tmp[i];
	}
	dest[src_len + i] = '\0';

	return (dest);
}
