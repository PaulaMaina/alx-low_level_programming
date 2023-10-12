#include <stdio.h>
#include <math.h>
/**
 * main - prints the prime factors of a 612852475143
 * Return: 0
 */
int main(void)
{
	int num = 612852475143;
	long a, maxFactor;
	double sq = sqrt(num);

	for (a = 1; x <= sq; a++)
	{
		if (num % a == 0)
			maxFactor = num / a;
	}
	printf("%ld\n", maxFactor);
	return (0);
}
