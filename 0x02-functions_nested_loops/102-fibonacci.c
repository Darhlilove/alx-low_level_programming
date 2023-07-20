#include <stdio.h>

/**
 * fibonacci - prints first 50 of sequence starting with 1 and 2
 *
 * @n: number of numbers to print
 *
 * Return: void
 */

void fibonacci(int n);

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	fibonacci(50);
	return (0);
}

/**
 * fibonacci - prints first 50 of sequence starting with 1 and 2
 *
 * @n: number of numbers to print
 *
 * Return: void
 */

void fibonacci(int n)
{
	int num1, num2, result, count, cond;

	num1 = 1;
	num2 = 2;

	printf("%d, ", num1);
	printf("%d, ", num2);

	cond = n - 2; /* counter for n-2 observations */
	for (count = 1; count <= cond; count++)
	{
		result = num1 + num2;

		if (count != cond)
		{
			printf("%d, ", result);
		}
		else
		{
			printf("%d\n", result);
		}

		num1 = num2;
		num2 = result;
	}
}
