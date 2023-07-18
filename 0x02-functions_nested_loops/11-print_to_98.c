#include "main.h"

/**
 * print_to_98 - prints all natural numbers after n
 *
 * @n: placeholder of start point
 *
 * Return: void always
 */

void print_to_98(int n)
{
	int num;

	while  (n <= 98)
	{
		if (n >= 0 && n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			num = -n;
			_putchar('-');
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
