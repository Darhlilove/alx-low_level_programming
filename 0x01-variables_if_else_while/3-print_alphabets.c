#include <stdio.h>

/**
 * main - Entry point
 *
 * CH - upper case characters
 *
 * ch - lower case characters
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char CH = 'A';
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);  /* Prints the lower case characters */
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);  /* Prints the upper case characters */
		CH++;
	}
	printf("\n");
	return (0);
}
