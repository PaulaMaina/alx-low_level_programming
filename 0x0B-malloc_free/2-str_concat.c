#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, size, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	size = len1 + len2 + 1;
	concat = malloc(size * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1 && s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2 && s2[i] != '\0'; i++)
	{
		concat[len1 + i] = s2[i];
	}

	concat[len1 + i] = '\0';

	return (concat);
}
