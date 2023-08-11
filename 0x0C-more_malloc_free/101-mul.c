#include <unistd.h>
#include "main.h"

/**
 * _strlen - Calculate the length of a string
 *
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strdup - Duplicate a string using malloc
 *
 * @str: The input string
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	char *dup = malloc(len);
	int i;

	if (dup == NULL)
	{
		exit(98);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

/**
 * _atoi - Convert a string to an integer
 *
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int res = 0;

	while (*s)
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res);
}

/**
 * multiply - Multiply two numbers stored as strings
 *
 * @num1: The first number
 * @num2: The second number
 *
 * Return: A pointer to the result
 */
int *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int *result = malloc(sizeof(int) * len_result);
	int i, j;

	if (result == NULL)
		exit(98);

	for (i = 0; i < len_result; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;

			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}

	return (result);
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
	char *num1, *num2;
	int i, start;
	int *result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = _strdup(argv[1]);
	num2 = _strdup(argv[2]);
	result = multiply(num1, num2);
	start = (result[0] == 0) ? 1 : 0;

	for (i = start; i < _strlen(num1) + _strlen(num2); i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(num1);
	free(num2);
	free(result);

	return (0);
}
