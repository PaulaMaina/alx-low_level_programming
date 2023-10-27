/*
 * Author: Pauline Maina
 */
#include "main.h"
/**
 * _islower-checks if a letter is lowercase
 * @c: the character to be checked by the function
 * Return: 1 if letter is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
