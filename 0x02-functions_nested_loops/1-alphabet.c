/*
 * Author: Pauline Maina
 */
#include "main.h"
/**
 * print_alphabet-prints the letters of the alphabet in lowercase
 * return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
