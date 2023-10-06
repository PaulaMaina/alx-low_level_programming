/*
 * Author: Pauline Maina
 * Description: This program print all possible combinations of 2 2-digit num.
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 0; firstNumber <= 98; firstNumber++)
	{
		for (secondNumber = firstNumber + 1; secondNumber <= 99; secondNumber++)
		{
			putchar(48 + (firstNumber / 10));
			putchar(48 + (firstNumber % 10));
			putchar(' ');

			putchar(48 + (secondNumber / 10));
			putchar(48 + (secondNumber % 10));

			if (firstNumber == 98 && secondNumber == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
