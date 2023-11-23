#include "main.h"

/**
 * flip_bits - return the number of bits you would need to flip
 * to get from one number to number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = n ^ m;
	unsigned long int binary = sizeof(long int) * 8, bit = 1;
	unsigned int tally = 0;

	for (bit = bit << (binary - 1); bit; bit = bit >> 1)
	{
		if (bit & flips)
			tally++;
	}
	return (tally);
}
