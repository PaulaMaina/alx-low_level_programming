#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if no errors, 1 if more than 1 argument is passed
 */

int main(int argc, char *argv[])
{
	int coins, amount;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	
	amount = atoi(argv[1]);

	while (amount > 0)
	{
		coins++;

		if ((amount - 25) >= 0)
		{
			amount -= 25;
			continue;
		}
		
		if ((amount - 10) >= 0)
		{
			amount -= 10;
			continue;
		}	

		if ((amount - 5) >= 0)
		{
			amount -= 5;
			continue;
		}
		if ((amount - 1) >= 0)
		{
			amount -= 1;
		}

		amount--;
	}
	printf("%d\n", coins);

	return (0);
}
