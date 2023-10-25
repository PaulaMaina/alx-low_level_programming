#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is returned
 *
 * Return: square root as an integer
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - helper function to find the square root
 * @a: number to check if is the square root
 * @b: number to compare against a
 *
 * Return: square root if natural, -1 if not
 */

int root(int a, int b)
{
	int square;

	square = b * b;

	if (square == a)
		return (b);
	else if (square < a)
		return (root(a, b + 1));
	else
		return (-1);
}
