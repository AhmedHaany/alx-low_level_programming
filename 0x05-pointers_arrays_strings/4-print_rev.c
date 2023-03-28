#include "main.h"

/**
 * print_rev - prints a string, in reveerse, followed by a new line.
 * @s: The string to be printed
 *
 * Return: void ALWAYS
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
