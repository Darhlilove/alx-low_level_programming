#include "main.h"

/**
 * print_times_table - Prints the 9 times table starting from 0.
 *
 * Return: void
 */
void print_times_table(void)
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
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				putchar(product + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar((product / 10) + '0');
				putchar((product % 10) + '0');
			}
		}
		putchar('\n');
	}
}
