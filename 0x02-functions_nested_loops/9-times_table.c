#include "main.h"
/**
 * times_table - prints the times table of 9
 * Return: void
 */
void times_table(void)
{
	int number, multiplier, result;
	int i, j;

	for (number = 0; number <= 9; number++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			result = number * multiplier;

			if (result > 9)
			{
				i = result % 10;
				j = (result - i) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(48 + j);
				_putchar(48 + i);
			}
			else
			{
				if (multiplier != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + result);
			}
		}
		_putchar('\n');
	}
}
