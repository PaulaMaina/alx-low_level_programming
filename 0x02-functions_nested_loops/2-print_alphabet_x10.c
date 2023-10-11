/*
 * Author: Pauline Maina
 */
#include "main.h"
/**
 * print_alphabet_x10-prints the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	while (i <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
