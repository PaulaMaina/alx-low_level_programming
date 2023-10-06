/*
 * Author: Pauline Maina
 * Description: This program prints all possible combinations of single numbers
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(48 + number);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
