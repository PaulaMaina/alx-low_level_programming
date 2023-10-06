/*
 * Author: Pauline Maina
 * Description: The program prints single digit numbers using putchar
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
