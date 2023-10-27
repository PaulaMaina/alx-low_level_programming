#include <stdio.h>

/**
 * main - prints all arguments the program receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if no errors are encountered
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
