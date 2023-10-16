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
	char *begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src--;
	}
	*dest = '\0';

	return (begin);
}
