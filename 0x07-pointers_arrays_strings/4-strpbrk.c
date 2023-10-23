#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: string to be located
 * @accept: string to be searched
 *
 * Return: pointer to the bytes in s where s = accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;
	char *c;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				return (c);
			}

			b++;
		}

		a++;
	}
}
