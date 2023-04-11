#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: char array
* @needle: char array (keyword)
*
* Return: array
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ans = haystack;

		if (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		else
			*haystack++;
		if (*needle == '\0')
			return (ans);
	}
	return (NULL);
}
