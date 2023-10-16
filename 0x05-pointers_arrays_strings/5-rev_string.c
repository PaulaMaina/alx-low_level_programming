#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int elem = 0;
	int index = 0;

	while (s[elem] != '\0')
	{
		elem++;
	}

	char rev_str[elem];
	elem -= 1;

	while (s[elem] != '\0')
	{
		rev_str[index] = s[elem];
		index++;
		elem--;
	}
	rev_str[index + 1] = '\0';
}
