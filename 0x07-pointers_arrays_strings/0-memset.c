#include "main.h"

/**
 *_memset -  fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *@s: the string
 *@b: the character want to be fill
 *@n: the size
 *Return: new string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
