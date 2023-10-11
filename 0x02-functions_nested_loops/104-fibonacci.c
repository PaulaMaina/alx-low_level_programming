#include <stdio.h>
/**
 * main - computes the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int n;
	long i = 1, j = 2;

	while (n < 98)
	{
		if (n == 1)
			printf("%ld,", i);
		else if (n == 2)
			printf(", %ld", j);
		else
		{
			j += i;
			i = j - i;

			printf(", %ld", j);
		}
		++n;
	}
	printf("\n");
	return (0);
}
