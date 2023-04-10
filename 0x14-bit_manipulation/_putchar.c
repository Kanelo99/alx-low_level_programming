#include <stdio.h>

/**
 * _putchar - Writes the charactor c to stdout
 * @c: the Charactor to print
 * Return: oOn success 1
 * On error, -1 is returned, and errno is returned appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
