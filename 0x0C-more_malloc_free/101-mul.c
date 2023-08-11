#include "main.h"

/**
 * check_digit - Check if a string is a valid positive number
 *
 * @s: The string to check
 *
 * Return: 1 if valid, 0 if not
 */

int check_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	int len1, len2, len_sum, i, j;
	int *result;

	if (argc != 3 || !check_digit(argv[1]) || !check_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	len_sum = len1 + len2;

	result = calloc(len_sum, sizeof(int));
	if (result == NULL)
		return (98);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0')
				* (argv[2][j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	for (i = 0; i < len_sum; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);
	return (0);
}
