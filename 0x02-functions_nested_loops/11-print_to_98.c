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

	for  ( num = n; num <= 98; num++)
	{
		if (num >= 0 && num < 10)
		{
			_putchar(num + '0');
		}
		else if (num >= 10)
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
		if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
	}
	_putchar('\n');
}
