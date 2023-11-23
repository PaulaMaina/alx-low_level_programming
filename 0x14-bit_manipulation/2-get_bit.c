#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit you want to get
 *
 * Return: value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int binary = sizeof(int) * 8;
	unsigned int bit = 1;

	if (index >= binary)
		return (-1);

	return ((bit << index & n) ? 1 : 0);
}
