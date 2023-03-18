#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Description: generates a random number then guess
 *if its positive, negative or zero
 *Return: Always 0 (Success)
 */


int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n < 0)
		printf("%i is negative\n" , n);
	else if(n > 0 )
		printf("%i is positive\n" , n) ;
	else 
		printf("%i is zero\n" , n);
	return (0);
}