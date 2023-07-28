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
	char array[] = *str;
	int i = 0;

	while (array[i] != '\0')
	{
		_putchar(array[i]);
		i++;
	}

	_putchar('\n');
}
