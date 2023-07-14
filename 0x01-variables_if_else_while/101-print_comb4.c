#include <stdio.h>

/**
 * main - Entry point
 *
 * num1 - placeholder for decimal designates for single digit characters 0-7
 *
 * num2 - placeholder for decimal designates for single digit characters 1-8
 *
 * num3 - placeholder for decimal designates for single digit characters 2-9
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 48; num1 < 56; num1++)
	{
		for (num2 = num1 + 1; num2 < 57; num2++)
		{
			for (num3 = num2 + 1; num3 < 58; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 == 55 && num2 == 56 && num3 == 57)
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
