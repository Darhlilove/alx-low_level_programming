#include <stdio.h>

/**
 * main - Entry point
 *
 * ch - placeholder for characters
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);  /* Prints the characters */
		ch--;
	}
	putchar('\n');
	return (0);
}
