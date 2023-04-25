#include "variadic_functions.h"

/**
 * sum_them_all - sums its parameter
 * @n: number of the arguments to sum
 *
 * Return: sum of the parameters passed
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, s;

	s = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(list, int);
	}
	va_end(list);
	return (s);
}
