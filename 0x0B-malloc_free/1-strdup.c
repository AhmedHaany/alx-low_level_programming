#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: string given as a parameter.
 * Return: NULL if str = NULL or
 * a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int i, n;
	char *ans;

	for (n = 0; str[n] != '\0'; n++)
	{}

	ans = malloc(n * sizeof(*str) + 1);

	if (ans == 0 || n == 0)
		return (NULL);

	else
	{
		for (i = 0; i < n; i++)
			ans[i] = str[i];
	}
	return (ans);
}
