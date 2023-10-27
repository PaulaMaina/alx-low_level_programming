#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if no errors, otherwise 1
 */

int main(int argc, char *argv[])
{
	int index, a, result = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (index = 1; index < argc; index++)
		{
			for (a = 0; argv[index][a] != '\0'; a++)
			{
				if (argv[index][a] < '0' || argv[index][a] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[index]);
		}
		printf("%d\n", result);
	}

	return (0);
}
