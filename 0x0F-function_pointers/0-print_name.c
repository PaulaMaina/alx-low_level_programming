#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
