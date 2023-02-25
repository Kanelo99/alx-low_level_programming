#include "main.h"

/**
 * print_diagonal - Draws diagonal line n times
 * @n: number of times diagonal line is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	if (j == i)
	_putchar('\\');
	else id (j < i)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
