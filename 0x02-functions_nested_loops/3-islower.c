#include "main.h"

/**
 * _islower - Checks for lowercase charactors
 * @c: The charactor to be checked
 * Return: 1 for lowercase charector 0r 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <=122)
	{
	return (1);
	}
	return (0);
}
