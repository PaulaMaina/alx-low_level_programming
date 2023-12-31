#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: string being changed
 *
 * Return: resulting string str
 */

char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] > 96 && str[c] < 123)
			str[c] -= 32;
	}

	return (str);
}
