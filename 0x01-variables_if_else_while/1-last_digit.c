/*
 * Author: Pauline Maina
 * Description: This program prints the last digit of a number
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int n;
	int endDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	endDigit = n % 10;
	if (endDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, endDigit);
	}
	else if (endDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, endDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, endDigit);
	}
	return (0);
}
