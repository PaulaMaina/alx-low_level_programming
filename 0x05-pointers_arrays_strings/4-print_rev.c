#include "main.h"

/**
 * print_rev - prints a string reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int elem = 0;
	int strLength = 0;
	int index = 0;
	char *rev[];

	while (s[elem] != '\0')
	{
		strLength++;
		elem++;
	}

	while (strLength > 0)
	{
		rev[index] = s[strLength];
		_putchar(rev[index]);
		strLength--;
	}
	_putchar('\n');
}
