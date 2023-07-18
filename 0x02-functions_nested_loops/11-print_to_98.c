#include "main.h"

/**
 * print_to_98 - prints all natural numbers after n
 *
 * @n: placeholder of start point
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
