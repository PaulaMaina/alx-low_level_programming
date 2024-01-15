#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative integer if s1 < s2, 0 if s1 == s2,
 * and positive if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int result;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			result = s1[a] - s2[a];
			return (result);
		}
	}
	return (0);
}
