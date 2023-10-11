/*
 * Author: Pauline Maina
 */
#include <stdio.h>
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
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
