#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
