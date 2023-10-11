#include <stdio.h>
/**
 * main - prints the sum of the multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int number, sum;

	while (number < 1024)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
			sum += number;
		}
		number++;
	}
	printf("%d\n", sum);
	return (0);
}
