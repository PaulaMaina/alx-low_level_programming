/*
 * Author: Pauline Maina
 * Description: This program print the lowercase alphabet in reverse
 */
#include <stdio.h>

/**
 * main-entry point of the program
 * Return: Always 0 is not errors are encountered
 */
int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
