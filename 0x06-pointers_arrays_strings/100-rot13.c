#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: resulting string
 */

char *rot13(char *s)
{
	char c;
	char *encoded_str = s;

	while (*s)
	{
		c = (*s & 32) + 65;

		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = (*s - c + 13) % 26 + c;
		}

		s++;
	}

	return (encoded_str);
