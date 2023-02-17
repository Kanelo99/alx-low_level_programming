#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* HEADER goes here*/

/*Betty function*/

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Code goes here*/

	if ( n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negetive\n", n);
	return (0);
}
