#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
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
