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

	while (s[elem] != '\0')
	{
		elem++;
	}

	elem -= 1;

	while (s[elem] != '\0')
	{
		_putchar(s[elem]);
		elem--;
	}
	_putchar('\n');
}
