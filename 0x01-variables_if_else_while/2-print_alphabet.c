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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);  /* Prints the characters */
		ch++;
	}
	putchar('\n');
	return (0);
}
