#include "main.h"

/**
 * print_two_digits - Prints a two-digit number.
 * @num: The number to be printed.
 *
 * Return: void
 */
void print_two_digits(int num)
{
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: The starting number.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			if (n >= 0)
			{
				_putchar(n + '0');
			}

			else
			{
				_putchar('-');
				print_two_digits(-n);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n > 99)
				_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	print_two_digits(98);
	_putchar('\n');
}
