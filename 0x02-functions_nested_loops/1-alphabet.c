/*
 * Author: Pauline Maina
 */
#include "main.h"
/**
 * main-invokes the print_alphabet function
 * Return: 0 if no errors are encountered
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
