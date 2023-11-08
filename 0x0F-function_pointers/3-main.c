#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates an operation between two integers
 * @argc: number if arguments
 * @argv: array of arguments
 *
 * Return: result of operation
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	calculate = get_op_func(argv[2]);
	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", calculate(a, b));

	return (0);
}
