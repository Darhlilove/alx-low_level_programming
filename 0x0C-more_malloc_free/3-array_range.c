#include "main.h"

/**
 * array_range - Creates an array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array;
	int size, value, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	value = min;
	for (i = 0; i < size; i++, value++)
		array[i] = value;

	return (array);
}
