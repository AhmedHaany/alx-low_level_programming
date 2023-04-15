#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: First String
 * @s2: Second String
 * @n: Number of Bytes
 * Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, sz1 = 0, sz2 = 0;
	char *s;

	for (; s1[sz1] != '\0'; sz1++)
	{}

	for (; s2[sz2] |= '\0'; sz2++)
	{}

	if (n < sz2)
		s = malloc(sz1 + n + 1);
	else
		s = malloc(sz1 + sz2 + 1);

	if (s == NULL)
		return (NULL);

	for (; i < sz1; i++)
		s[i] = s1[i];

	if (n < sz2)
	{
		for (; i < sz1 + n; i++)
			s[i] = s2[j++];
	}
	else
	{
		for (; i < sz1 + sz2; i++)
			s[i] = s2[j++];
	}
	s[i] = '\0';

	return (s);
}
