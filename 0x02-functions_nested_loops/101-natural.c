#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int result;

	result = sum_multiple_of_three_or_five(1024);
	printf("%d", result);
	return (0);
}

/**
 * sum_multiple_of_three_or_five - Calculates the sum of multiples of
 * 3 or 5 up to n.
 *
 * @n: The upper limit (exclusive) for finding multiples.
 *
 * Return: The sum of multiples of 3 or 5 up to n.
 */
int sum_multiple_of_three_or_five(int n)
{
	int num, result;

	result = 0;
	for (num = 1; num < n; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			result = result + num;
		}
	}

	return (result);
}
