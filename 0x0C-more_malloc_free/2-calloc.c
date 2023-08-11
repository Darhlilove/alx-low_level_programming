#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	memory = malloc(total_size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		memory[i] = 0;

	return (memory);
}
