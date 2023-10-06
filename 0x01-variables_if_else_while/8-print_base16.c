/*
 * Author: Pauline Maina
 * Description: The program prints all the numbers of base 16 in lowercase
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	int  number;
	char letter = 'a';

	for (number = 0; number <= 9; number++)
	{
		putchar(48 + number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
