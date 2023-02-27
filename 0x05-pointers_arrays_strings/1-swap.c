#include <stdio.h>

/**
 * swap_int -Swaps the value of two integers
 * @a: The first interger
 * @b: The second interger
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
