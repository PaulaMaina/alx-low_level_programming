#include "main.h"
/**
 * _isalpha-checks whether a character is alphabetic
 * @c: The character being checked
 * Return: 1 for an alphabetic character, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
