#include "main.h"

/**
 * cap_string - capitlizes all words of a string
 * @str: the string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int a, b;
	int checker;
	char ops[] = ",;.!?\" (){}\n\t";

	for (a = 0, checker = 0; str[a] != '\0'; a++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			checker = 1;
		}

		for (b = 0, ops[b] != '\0'; b++)
		{
			if (ops[b] == str[a])
			{
				checker = 1;
			}
		}

		if (checker)
		{
			if (str[a] > 96 && str[a] < 123)
			{
				str[a] -= 32;
				checker = 0;
			}
			else if (str[a] > 64 && str[a] < 91)
			{
				checker = 0;
			}
			else if (str[a] > 47 && str[a] < 58)
			{
				checker = 0;
			}
		}
	}
	return (str);
}
