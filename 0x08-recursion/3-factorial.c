#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer whose factorial is to be returned
 *
 * Return: factorial
 */

int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (result);

	if (n > 1)
		result = result * factorial(n - 1);

	return (result);
}
