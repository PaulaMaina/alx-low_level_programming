#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: binry number
 * @index: index of the bit you want to set
 *
 * Return: 1 on sucess else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary = sizeof(long int) * 8;
	unsigned long int bit = 1;

	if (index >= binary)
		return (-1);
	bit = bit << index;

	*n = (*n & bit) ? *n - bit : *n;

	return (1);
}
