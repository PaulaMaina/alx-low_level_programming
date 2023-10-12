#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of \
 * Return: void
 */
void print_diagonal(int n)
{
	int s = 0;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			while (s < i)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
