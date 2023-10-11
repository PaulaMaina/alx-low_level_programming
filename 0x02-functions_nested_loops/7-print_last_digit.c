#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @number: number being chacked
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;

	return (last_digit);
}
