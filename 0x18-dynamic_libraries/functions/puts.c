#include "main.h"

/**
 * _puts - prints a string
 * followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int elem = 0;

	while (str[elem] != '\0')
	{
		_putchar(str[elem]);
		elem++;
	}
	_putchar('\n');
}
