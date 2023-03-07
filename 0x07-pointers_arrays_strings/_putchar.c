#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactor c to stdout
 * @c : charactor to write
 *
 * Return: on success 1
 * On error, -1 is returned, and error is set approppriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
