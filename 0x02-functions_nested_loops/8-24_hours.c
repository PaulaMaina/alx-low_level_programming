#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hour_digit1, hour_digit2;
	int minute_digit1, minute_digit2;

	for (hr_digit1 = 0; hr_digit1 <= 2; hr_digit1++)
	{
		for (hr_digit2 = 0; hr_digit2 <= 9; hr_digit2++)
		{
			if (hr_digit1 <= 1 && hr_digit2 <= 9 || hr_digit1 <= 2 && hr_digit2 <= 3)
			{
				for (min_digit1 = 0; min_digit1 <= 5; min_digit1++)
				{
					for (min_digit2 = 0; min_digit2 <= 9; min_digit2++)
					{
						_putchar(48 + hr_digit1);
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
