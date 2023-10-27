#include <stdio.h>

/**
 * main - prints the name of a file, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 if no errors are encountered
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
