#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, strLength;
	char *first, *last = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		last++;
	}

	strLength = i + 1;
	first = s;

	for (i = 0; i < strLength / 2; i++)
	{
		char a;

		a = *last;
		*last = *first;
		*first = a;
		first++;
		last--;
	}
	last[strLength + 1] = '\0';
}
