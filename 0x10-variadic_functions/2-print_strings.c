#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int s;
	char *el;

	va_start(str, n);

	for (s = 0; s < n; s++)
	{
		el = va_arg(str, char *);
		if (!el)
			el = "(nil)";
		printf("%s", el);

		if (separator != NULL && (s != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
