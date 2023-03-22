#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j + 'a');
		}
		_putchar('\n');
	}
}
