#include "main.h"

/**
 * prime - determines whether a number is a prime number
 * @num: number whose factors are determined
 * @a: incrementer to compare to num
 *
 * Return: 1 if no factors are found, otherwise 0
 */

int prime(int num, int a)
{
	if (num == 2)
		return (1);

	if (num <= 1 || num % 2 == 0)
		return (0);

	if (num % a == 0 && num != 1)
		return (0);

	if (a < num)
		return (prime(num, a + 2));

	return (1);
}

/**
 * is_prime_number - finds a prime number
 * @n: number to be determined if it's a prime number
 *
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (prime(n, 3));
}
