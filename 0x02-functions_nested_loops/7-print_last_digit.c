#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @num: placeholder for number to be operated on
 *
 * Return: result
 */

int print_last_digit(int num)
{
	int result;

	result = num % 10;

	if (result < 0)
	{
		result = -result;
	}
	_putchar('0' + result);
	return (result);
}
