#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix of integers
 * @a: array of integers
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0, total = 0, sq;

	sq = size * size;

	while (x < sq)
	{
		if (x % (size + 1) == 0)
			total += a[x];

		x++;
	}

	printf("%d, ", total);

	total = 0;
	x = 0;

	while (x < sq)
	{
		if (x % (size - 1) == 0 && x != (sq - 1) && x != 0)
			total += a[x];

		x++;
	}

	printf("%d\n", total);
}
