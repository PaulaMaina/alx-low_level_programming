#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int a, i, j;

	i = 0;
	j = -1;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			j *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (i < 0)
				i = (i * 10) - (s[a] - '0');
			else
				i = (s[a] - '0') * -1;

			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}

	}
	if (j < 0)
		i *= -1;

	return (i);
}
