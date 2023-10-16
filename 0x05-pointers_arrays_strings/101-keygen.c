#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int pass;
	int counter;
	int i;

	srand(time(NULL));

	for (counter = 0, i = 2772; i > 122; counter++)
	{
		pass = (rand() % 125) + 1;

		printf("%c", pass);
		i -= pass;
	}
	printf("%c", i);
	return (0);
}
