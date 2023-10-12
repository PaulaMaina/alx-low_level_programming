#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int s;
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (s = size - i; s > 1; s--)
			{
				_putchar(32);
			}
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
