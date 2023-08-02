#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: placeholder for the number
 *
 * Return: factorial or -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
