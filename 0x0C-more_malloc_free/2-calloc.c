#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero using memset */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
