#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void on success
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
