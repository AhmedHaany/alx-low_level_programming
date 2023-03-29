#include "main.h"

/**
 * print_line - function to print line
 * @n: number of dash
 * Return: void
*/

void print_line(int n)
{
	if (n <= 0)
		return;

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
