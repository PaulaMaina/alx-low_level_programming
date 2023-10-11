#include "main.h"
/**
 * _abs - Computes the absolute value of a number
 * @number: integer to be checked
 * Return: The absolute value
 */
int _abs(int number)
{
	if (number < 0)
	{
		int abs_value;

		abs_value = number * -1;

		return (abs_value);
	}
	else
	{
		return (number);
	}
}
