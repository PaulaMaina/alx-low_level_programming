#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer to be raised
 * @y: power
 *
 * Return: x raised to the power y, -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (result);
	else if (y == 1)
		return (x);

	result = x *  _pow_recursion(x, y - 1);

	return (result);
}
