#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 if no errors are encountered
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] != NULL)
		{
			;
		}
	}
	printf("%d\n", (i - 1));

	return (0);
}
