#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: NULL if str = NULL or empty, else pointer to an array of words
 */

char **strtow(char *str)
{
	int len = 0, c = 0, i;
	char **words;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			len++;
	}

	words = malloc(len * sizeof(char));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*words[c] = str[i];
			c++;
		}
		else
		{
			return (NULL);
		}
	}

	return (words);
}
