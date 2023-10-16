#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*b = *a;
	*a = tmp;
}
