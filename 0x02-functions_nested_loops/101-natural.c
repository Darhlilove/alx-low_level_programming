#include <stdio.h>

/**
 * sum_multiple_of_three_or_five - multple sum function
 *
 * @n: placeolder of number
 *
 * Return: result always
 */

int sum_multiple_of_three_or_five(int n);


/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int result;

	result = sum_multiple_of_three_or_five(1024);
	printf("%d\n", result);
	return (0);
}

/**
 * sum_multiple_of_three_or_five - multple sum function
 *
 * @n: placeolder of number
 *
 * Return: result always
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
