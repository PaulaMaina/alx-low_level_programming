#include "main.h"

/**
 * _strcpy - copies the string pointer to by src,
 * to the buffer pointed to by dest
 * including \0
 * @src: pointer to string to be copied
 * @dest: location of copied string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
