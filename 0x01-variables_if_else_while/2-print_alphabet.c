#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random number generated
 * Return: Always 0 Success
*/

int main(void)
{
	char ans[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar (ans[i]);
	}
	putchar ('\n');
	return (0);
}
