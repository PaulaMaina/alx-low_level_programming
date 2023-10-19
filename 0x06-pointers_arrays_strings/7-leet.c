#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
	char *encoded_str = str;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == c[i] || *str == c[i] - 32)
				*str = num[i] + '0';
		}
		str++;
	}

	return (encoded_str);
}
