#include <stdio.h>

/**
 * main - prints numbers form 1 to 100
 * but for multiples of 3 prints fizz 
 * and for multiples of 5 prints buzz
 * Return: A;ways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; 1++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf(" Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf(" Buzz");
	}
	else if (i % 5 == 0 && i % 3 == 0)
	{
	printf(" FuzzBuzz");
	}
	else if (i==1)
	{
	printf("%d", i);
	}
	else
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
