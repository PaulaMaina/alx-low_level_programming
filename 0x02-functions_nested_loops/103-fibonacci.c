#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers 
 * that are less than 4,000,000
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	int i = 1, j = 2;
	int sum = 2;

	while ( i + j < 4000000)
	{
		j += i;
		if (j % 2 == 0)
			sum += j;
		i = j - i;
		++n;	
	}
	printf("%ld\n", sum);
	return (0);
}
