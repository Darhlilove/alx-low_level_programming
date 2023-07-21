#include "main.h"

/**
 * _isdigit - checks for digits 0 to 9
 *
 * @c: placeholder for number to be checked
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '0' + 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
