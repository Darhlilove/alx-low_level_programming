#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: placeholder for first integer
 * @b: placeholder for second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
