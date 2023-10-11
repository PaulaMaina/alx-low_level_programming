/*
 * Author: Pauline Maina
 */
#include "main.h"
#include <string.h>
/**
 * main - prints '_putchar' followed by a new line
 * Return: 0 if no errors are encountered
 */
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i < strlen(word))
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
