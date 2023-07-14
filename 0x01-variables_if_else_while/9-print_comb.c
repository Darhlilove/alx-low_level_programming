#include <stdio.h>

/**
 * main - Entry point
 *
 * num - placeholder for decimal designates for the single digit characters
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	return (0);
}
