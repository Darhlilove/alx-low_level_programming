#include "main.h"

/**
 * print_line - prints 10 times the numbers, from 0 to 14
 *
 * @n: number of _ to use
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
