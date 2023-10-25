#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: length of the string as an integer
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len = _strlen_recursion(s + 1) + 1;

	return (len);
}
