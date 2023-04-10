#include "main.h"

/**
 * _strpbrk - locates first occurence of a character in accept in s
 * @s: string to search in
 * @accept: string to search in
 *
 * Return: the start of the first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				char *p;

				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);
}
