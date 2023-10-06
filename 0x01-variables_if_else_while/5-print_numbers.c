/*
 * Author: Pauline Maina
 * Description: This program prints the single digit numbers in base 10
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int n;

	for  (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
