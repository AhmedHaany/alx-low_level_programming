#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: New string
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int sz1 = 0, sz2 = 0, sum = 0;

	if (s1 != NULL)
		for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		{}
	if (s2 != NULL)
		for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		{}
	sum = sz1 + sz2;

	str = malloc(sizeof(char) * sum + 1);

	if (str == NULL)
		return (NULL);

	int i, j;

	for (i = 0; i < sz1; i++)
	{
		str[i] = s1[i];
	}
	sz1 = 0;
	for (j = i; j < sum; j++)
	{
		str[j] = s2[sz1++];
	}

	return (str);
}
