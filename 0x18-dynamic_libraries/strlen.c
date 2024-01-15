#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: value of the string length
 */
int _strlen(char *s)
{
	int elem = 0;

	while (s[elem] != '\0')
	{
		elem++;
	}

	return (elem);
}
