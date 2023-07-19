#include "main.h"

/**
 * print_times_table - Prints the 9 times table starting from 0.
 *
 * @n: placeholder for number (0 to 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				product = i * j;

				_putchar(',');
				_putchar(' ');

				if (product < 100)
					_putchar(' ');

				if (product < 10)
					_putchar(' ');

				if (product >= 100)
					_putchar((product / 100) + '0');

				if (product >= 10)
					_putchar(((product / 10) % 10) + '0');

				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
