#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the new string
 * @src: the original string
 * @n: number of bytes
 * Return: dest after copying into it
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
