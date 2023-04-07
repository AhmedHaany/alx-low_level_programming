#include "main.h"

/**
 *_strncpy - copies from src n chars to dest
 * @dest: will be copied into
 * @src: will be copied from
 * @n: characters to copy
 *
 * Return: new dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
