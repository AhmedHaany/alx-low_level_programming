#include "main.h"

/**
 *_strcat - This function appends the src string to the dest string
 *@dest: first  string
 *@src: second string
 *
 * Return: The new string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
