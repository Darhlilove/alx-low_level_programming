#include <stdio.h>
#include "main.h"

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
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]); /* Convert string to integer */
		int num2 = atoi(argv[2]); /* Convert string to integer */

		printf("%d\n", num1 * num2);

		return (0);
	}
}
