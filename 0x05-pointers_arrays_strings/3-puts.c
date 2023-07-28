#include "main.h"

/**
 * _puts - prints string to stdout
 *
 * @str: placeholder for string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
