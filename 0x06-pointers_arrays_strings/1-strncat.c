#include "main.h"

/**
 *_strncat - concatenate n characters from src to dest
 *@dest: first string
 *@src: second string
 *@n: number of characters
 *Return: the new string
*/

char *_strncat(char *dest, char *src, int n)
{
	if (n <= 0)
		return (dest);

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0' && j < n ; j++)
	{
		dest[i++] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
