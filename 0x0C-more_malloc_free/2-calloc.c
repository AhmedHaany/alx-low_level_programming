#include "main.h"

/**
 * *_calloc - create array nmemb of size bytes
 * @nmemb: number of elements
 * @size: size of byte
 * Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	char *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	unsigned int i = 0;

	for (; i < nmemb * size; i++)
		ptr[i] = '0';

	return (ptr);
}
