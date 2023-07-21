#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of \ to use
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j, num;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			num = j-1;
			for (i = 1; i <= num; i++)
			{
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
