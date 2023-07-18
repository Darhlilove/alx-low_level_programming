#include "main.h"

/**
 * _islower - Entry point
 *
 * c - placeholder for the character to be checked
 *
 * Return: 1 for lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
