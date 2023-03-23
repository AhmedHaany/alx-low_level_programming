#include "main.h"

/**
 * _isalpha - function to be check if
 *           character is lowercase
 *
 * @c: check input of function
 *
 * Return: returns 1 if `c` is lowercase
 *          otherwise Always 0 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
