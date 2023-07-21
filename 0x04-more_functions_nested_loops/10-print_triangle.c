#include "main.h"

/**
 * print_triangle -  prints a triangle to terminal
 *
 * @size: length of triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			int count_of_space, count_of_hash;

			count_of_space = size - i;
			count_of_hash = i;

			for (j = count_of_space; j > 0; --j)
			{
				_putchar(' ');
			}

			for (k = count_of_hash; k > 0; --k)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
