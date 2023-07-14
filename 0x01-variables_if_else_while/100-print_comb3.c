#include <stdio.h>

/**
 * main - Entry point
 *
 * num1 - placeholder for decimal designates for single digit characters 0-8
 *
 * num2 - placeholder for decimal designates for single digit characters 1-9
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);

				if (num1 == 56 && num2 == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
