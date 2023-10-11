#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int h_digit1, hr_digit2;
	int min_digit1, min_digit2;

	for (h_digit1 = 0; h_digit1 <= 2; h_digit1++)
	{
		for (hr_digit2 = 0; hr_digit2 <= 9; hr_digit2++)
		{
			if ((h_digit1 <= 1 && hr_digit2 <= 9) || (h_digit1 <= 2 && hr_digit2 <= 3))
			{
				for (min_digit1 = 0; min_digit1 <= 5; min_digit1++)
				{
					for (min_digit2 = 0; min_digit2 <= 9; min_digit2++)
					{
						_putchar(48 + h_digit1);
						_putchar(48 + hr_digit2);
						_putchar(58);
						_putchar(48 + min_digit1);
						_putchar(48 + min_digit2);
						_putchar('\n');
					}
				}
			}
		}
	}

}
