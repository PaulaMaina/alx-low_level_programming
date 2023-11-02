#include "main.h"
#include <stdlib.h>

/**
 * _strlength - calculates the length of a string
 * @str: string
 *
 * Return: number of elements in the string
 */

int _strlength(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		;

	return (s);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, a, b;
	char *str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlength(s1);
	str_concat = malloc(sizeof(char) * (len1 + n + 1));

	if (str_concat == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		str_concat[a] = s1[a];

	for (b = 0; b < n; b++)
		str_concat[a + b] = s2[b];

	str_concat[a + b] = '\0';

	return (str_concat);
}
