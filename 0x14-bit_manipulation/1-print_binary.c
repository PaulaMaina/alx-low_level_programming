#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = sizeof(long int) * 8;
	unsigned long int leading_zero = 1, bit = 1;

	for (bit = bit << (bin - 1); bit; bit = bit >> 1)
	{
		if ((n & bit) && leading_zero)
			leading_zero = 0;
		if (!leading_zero)
			_putchar(((n & bit) ? 1 : 0) + '0');
	}
	if (leading_zero)
		_putchar('0');
}
