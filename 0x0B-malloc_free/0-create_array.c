#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: specific char.
 * Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == 0 || size == 0)
		return (0);

	int i;

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
