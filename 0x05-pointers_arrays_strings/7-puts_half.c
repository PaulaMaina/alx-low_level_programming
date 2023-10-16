#include "main.h"

/**
 * puts_half - prints the second half of a string,
 * followed by a new line
 * @str: string to be used
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int half;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	for (; str[half] != 0; half++)
		_putchar(str[half]);

	_putchaar('\n');
}
