/*
 * Author: Pauline Maina
 * Description: The program prints the alphabet in lowercase
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
