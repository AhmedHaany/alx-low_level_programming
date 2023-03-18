#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
*/

int main(void)
{
	char ans[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar (ans[i]);
	}
	putchar ('\n');
	return (0);
}
