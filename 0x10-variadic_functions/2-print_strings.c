#include "variadic_functions.h"

/**
 * print_strings - prints strings given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	va_end(list);

	printf('\n');
}
