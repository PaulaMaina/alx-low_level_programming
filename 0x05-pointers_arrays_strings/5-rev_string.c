#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c;
	char x;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}

	c = a;

	for (a--,  b = 0; b < c / 2; a--, b++)
	{
		x = s[b];
		s[b] = s[a];
		s[a] = x;
	}
}
