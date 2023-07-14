#include <stdio.h>

/**
 * main - Entry point
 *
 * num1 - placeholder for decimal designates for the single digit characters
 *
 * num2 - placeholder for decimal designates for letters a-f
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num1;
	int num2;

	num1 = 48;
	num2 = 97;

	while (num1 < 58)
	{
		putchar(num1);
		num1++;
	}

	while (num2 < 103)
	{
		putchar(num2);
		num2++;
	}

	putchar('\n');

	return (0);
}
