#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: void
 */

void times_table(void)
{
	int num1;
	int num2;
	int result;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			result = num1 * num2;
			_putchar(result + '0');
			if (num2 != 9)
			{
				if (result > 10)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				_putchar(' ');
				_putchar(',');
			}
		}
	}
}
