#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz
 *
 * Return: nothing
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s%s", "FizzBuzz", (i == 100) ? "\n" : " ");
		}
		else if (i % 3 == 0)
		{
			printf("%s%s", "Fizz", (i == 100) ? "\n" : " ");
		}
		else if (i % 5 == 0)
		{
			printf("%s%s", "Buzz", (i == 100) ? "\n" : " ");
		}
		else
		{
			printf("%d%s", i, (i == 100) ? "\n" : " ");
		}
	}
}
