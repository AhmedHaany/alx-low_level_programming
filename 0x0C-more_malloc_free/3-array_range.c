#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: the started value.
 * @max: the end value.
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	int i;

	for (i = 0; i <= max - min; i++)
		ptr[i] = min++;

	return (ptr);
}
