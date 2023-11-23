#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: binary number
 * @index: index of the bit you want to set
 *
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary = sizeof(long int) * 8;
	unsigned long int bit = 1;

	if (index >= binary)
		return (-1);
	bit = bit << index;
	*n = *n | bit;

	return (1);
}
