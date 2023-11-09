#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of all types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	va_list par;
	unsigned int a = 0;
	char *str, *sep = "";

	if (format)
	{
		va_start(par, format);
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(par, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(par, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(par, double));
					break;
				case 's':
					str = va_arg(par, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
		va_end(par);
	}
	printf("\n");
}
