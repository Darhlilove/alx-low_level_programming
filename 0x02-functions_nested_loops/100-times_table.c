#include "main.h"

/**
 * print_times_table - Prints the 9 times table starting from 0.
 *
 * @n: placeholder for number
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
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product <= 9)
				{
					if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
