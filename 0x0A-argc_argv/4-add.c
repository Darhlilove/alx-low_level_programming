#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers passed as command line arguments
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *currentArg = argv[i];
		int j = 0;

		while (currentArg[j] != '\0')
		{
			if (!isdigit(currentArg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(currentArg);
	}

	printf("%d\n", sum);

	return (0);
}
