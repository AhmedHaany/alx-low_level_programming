#include "main.h"

/**
 *reverse_array - function to reverse array content
 *@a: ther array of integers
 *@n: number ofelments of the array
 *Return: always void
*/

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;

	while (i >= 0)
	{
		printf("%d", a[i]);

		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
