#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to standard output
 * @c: character to be printed
 *
 * Return: 1 if no errors, otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
