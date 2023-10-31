#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac:  number of arguments
 * @av: array of arguments
 *
 * Return: NULL if ac = 0 or av = NULL, else pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int size, len1, len2, len3 = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (len1 = 0; len1 < ac; len1++)
	{
		for (len2 = 0; av[len1][len2] != '\0'; len2++)
			size += 1;
		size += 1;
	}
	size += 1;

	concat = malloc(size * sizeof(char));

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (len1 = 0; len1 < ac; len1++)
	{
		for (len2 = 0; av[len1][len2] != '\0'; len2++)
		{
			concat[len3] = av[len1][len2];
			len3++;
		}
		concat[len3] = '\n';
		len3++;
	}
	concat[len3] = '\0';
	return (concat);
}
