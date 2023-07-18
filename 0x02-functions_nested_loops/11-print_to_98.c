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
	int num;

	while ((n != 98 && n <= 98) || (n != 98 && n >= 98))
	{
		num = n;
		if (n >= 0 && n < 10)
			_putchar(num + '0');
		else if (n >= 10)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		else
		{
			num = -num;
			_putchar('-');
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar(',');
		_putchar(' ');

		if (n <= 98)
			n++;
		else
			n--;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
