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
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; scr[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
