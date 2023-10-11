#include "main.h"
/**
 * _abs - Computes the absolute value of a number
 * @int: data type of the parameter
 * Return: The absolute value
 */
int _abs(int)
{
	int number;

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
