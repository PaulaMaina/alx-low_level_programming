#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(48 + (b / 10));
			}
			_putchar(48 + (b % 10));
		}
		_putchar('\n');
	}
}
