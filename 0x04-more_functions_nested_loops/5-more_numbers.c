#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
	_putchcar('1');
	_putchar (j % 10 + '0');
	}
	_putchar('\n');
	}
}
