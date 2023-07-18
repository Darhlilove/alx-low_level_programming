#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet: prints letters of the alphabet
 *
 * Return: void always on success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
