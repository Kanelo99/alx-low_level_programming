#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the charactor c to stdout
 * @c: The charactor to print
 * Return: 1 (success)
 * On Erroe: -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
