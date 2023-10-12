#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, k;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < size)
		{
			k = size - j - 1;
			while (i  < size)
			{
				if (k > i)
					_putchar(32);
				else
					_putchar(35);
				i++;
			}
			j++;
			_putchar('\n');
		}
	}
}
