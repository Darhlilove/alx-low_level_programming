#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[] =  {25, 10, 5, 2, 1};
	int numCoins;
	int minCoins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);
	minCoins = 0;

	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			minCoins++;
		}
	}

	printf("%d\n", minCoins);

	return (0);
}
