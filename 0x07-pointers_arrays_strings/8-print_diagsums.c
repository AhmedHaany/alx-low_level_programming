#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals in a 2d array
 * @a: 2d array square
 * @size: size of square
 *
 * Return: void always
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
