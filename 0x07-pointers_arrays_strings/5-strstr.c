#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be located
 *
 * Return: pointer to the beginning of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, i;

	while (haystack[a] != '\0')
	{
		i = 0;

		while ((needle[i + b] != '\0') && (haystack[a + b] != '\0'))
		{
			if (haystack[a + b] != needle[i + b])
				break;

			b++;
		}
		if (needle[i + b] == '\0')
			return (&haystack[a]);

		i++;
		a++;
	}

	return (NULL);
}
