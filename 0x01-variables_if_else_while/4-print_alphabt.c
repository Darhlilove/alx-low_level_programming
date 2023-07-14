#include <stdio.h>

/**
 * main - Entry point
 *
 * ch - holds characters to be printed
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}

	return (0);
}
