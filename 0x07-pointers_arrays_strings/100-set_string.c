#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to pointer to
 * @to: pointer to a character
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = *to;
}
