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

	if (num < 0)
	{
		result = (-1 * num) % 10
	}
	else
	{
		result = num % 10;
	}
	_putchar('0' + result);
	return (result);
}
