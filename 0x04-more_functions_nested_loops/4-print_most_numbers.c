#include "main.h"
/**
 * print_most_numbers - prints single integers except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 0;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(48 + c);
	}
	_putchar('\n');
}
