#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer being printed
 * Return: an integer
 */
void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar(45);
	}

	a /= 10;

	if (a != 0)
	{
		print_number(a);
	}

	_putchar(48 + ((unsigned int) n % 10));
}
