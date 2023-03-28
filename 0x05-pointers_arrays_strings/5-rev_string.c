#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void ALWAYS
*/

void rev_string(char *s)
{
	int i = 0;
	char c;

	while (s[i])
		i++;
	int n = i - 1;

	for (int x = 0; x < i / 2; x++)
	{
		c = s[x];
		s[x] = s[n];
		s[n] = c;
		n--;
	}
	_putchar('\n');
}
