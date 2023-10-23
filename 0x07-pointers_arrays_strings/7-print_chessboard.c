#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of characters
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, b = 0;

	while (b < 8)
	{
		i = 0;

		while (i < 8)
		{
			_putchar(a[b][i]);
			i++;
		}
		_putchar('\n');
		b++;
	}
}
