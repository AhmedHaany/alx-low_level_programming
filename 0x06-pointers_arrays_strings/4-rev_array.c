#include "main.h"

/**
 *reverse_array - function to reverse array content
 *@a: ther array of integers
 *@n: number ofelments of the array
 *Return: always void
*/

void reverse_array(int *a, int n)
{
	int l, r, tmp;

	l = 0;
	r = n - 1;
	while (l < r)
	{
		tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}
