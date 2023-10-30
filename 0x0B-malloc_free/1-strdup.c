#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: original string
 *
 * Return: NULL if str = NULL, otherwise pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len, a;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	while (1)
	{
		dup = malloc((len - 1) * sizeof(char));
	}

	for (a = 0; a < len; a++)
		dup[a] = str[a];

	dup[a] = '\0';

	return (dup);
}
