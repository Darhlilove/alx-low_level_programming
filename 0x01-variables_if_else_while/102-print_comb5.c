#include <stdio.h>

/**
 * main - Entry point
 *
 * num1 - placeholder for decimals
 *
 * num2 - placeholder for decimals
 *
 * Return: Always 0 on success
 */


int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
