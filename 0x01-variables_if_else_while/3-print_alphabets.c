/*
 * Author: Pauline Maina
 * Description: This program prints the alphabet in lower and upper cases
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	char smallLetter = 'a';
	char capitalLetter = 'A';

	for (smallLetter = 'a'; smallLetter <= 'z'; smallLetter++)
	{
		putchar(smallLetter);
	}
	for (capitalLetter = 'A'; capitalLetter <= 'Z'; capitalLetter++)
	{
		putchar(capitalLetter);
	}
	putchar('\n');
	return (0);
}
