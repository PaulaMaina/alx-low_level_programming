#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int s = size;
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				while (s > 0)
				{
					_putchar(' ');
					s--;
				}
				_putchar('#');
			}
		}
	}
}
