#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: the array
 * @n: the length of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d\n", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
	}
}
