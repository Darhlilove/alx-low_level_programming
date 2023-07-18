#include "main.h"

/**
 * _abs - Entry point
 *
 * @num: placeholder for number to be operated on
 *
 * Return: result of absolute
 */

int _abs(int num)
{
	int result;

	if (num < 0)
	{
		result = num * -1;
		return (result);
	}
	else
	{
		result = num;
		return (result);
	}
}
