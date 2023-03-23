include "main.h"

/**
 * positive_or_negative - check n  whether
 *        it is positive, negative, or zero.
 * n parameter - positive or negative or zero
 * Return: Always 0.
*/

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
