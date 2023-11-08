#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if no errors are encountered
 */

int main(int argc, char *argv[])
{
	int i;
	char *func;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func = (char *)main;

	for (; i > 0; i--, func++)
	{
		printf("%02x", *func & 0xff);
		if (i != 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
